#include "parallactUserVisitor.h"

std::any parallactUserVisitor::visitProgram(parallactParser::ProgramContext *ctx) {
    path = "D:/UNN/LABS/parallelLanguage/projects/" + projectName + "/";
    if (std::filesystem::is_directory(path)) {
        std::filesystem::remove_all(path);
    }
    std::filesystem::create_directories(path);
    std::ofstream out;
    // Create CMakeLists.txt file
    out.open(path + "CMakeLists.txt");
    // Generate CMakeLists.txt file
    out << "create_executable_project(" << projectName << "Ex)" << std::endl;
    // Update CMakeLists.txt file
    appendLineToFile(path + "../CMakeLists.txt", "add_subdirectory(" + projectName + ")\n");
    out.close();
    visitChildren(ctx);
    // Create main.cpp file
    out.open(path + "main.cpp");
    out << "#include \"executor.hpp\"" << std::endl;
    out << "#include \"utils.hpp\"" << std::endl;
    std::string includeBlock;
    std::string inputsBlock;
    std::string parserBlock;
    std::string outputsBlock;
    std::string functionBlock;
    std::string dependencyBlock;

    int i = 1;
    std::string usage;
    for (const auto& func : functions) {
        includeBlock += "#include \"" + func.first + ".hpp\"" + "\n";
        functionBlock += "\texecutor.addFunction(\"" + func.first + "\", [&]() { " + func.first + "(";
        for (const auto& input : func.second.input) {
            functionBlock += input.name + ", ";
            if (input.rely) continue;
            inputsBlock += "\t" + input.type + " " + input.name + ";\n";
            parserBlock += "\tif (!from_string(argv[" + std::to_string(i) + "], " + input.name + ")) {\n";
            parserBlock += "\t\tstd::cerr << \"Invalid number for " + input.name + ": \" << argv[" + std::to_string(i) + "] << \"\\n\";" + "\n";
            parserBlock += "\t\treturn 1;\n";
            parserBlock += "\t}\n";
            usage += " <" + input.name + ">";
            i++;
        }
        for (const auto& output : func.second.output) {
            outputsBlock += "\t" + output.type + " " + output.name + ";\n";
            functionBlock += output.name + ", ";
        }
        functionBlock.pop_back();
        functionBlock.pop_back();
        functionBlock += "); });\n";
        for (const auto& dependency : func.second.dependency) {
            dependencyBlock += "\texecutor.addDependency(\"" + dependency + "\", \"" + func.first + "\");" + "\n";
        }
    }

    out << includeBlock << std::endl;
    out << "int main(int argc, char **argv) {" << std::endl;
    out << "\tExecutor executor;" << std::endl << std::endl;
    out << inputsBlock << std::endl;
    out << "\tif (argc < " << i << ") {\n";
    out << "\t\tstd::cerr << \"Usage:" << usage << "\\n\";\n";
    out << "\t\treturn 1;\n";
    out << "\t}\n";
    out << parserBlock << std::endl;
    out << outputsBlock << std::endl;
    out << functionBlock << std::endl;
    out << dependencyBlock << std::endl;
    out << "\texecutor.execute();" << std::endl << "\treturn 0;" << std::endl << "}";
    return 0;
}

std::any parallactUserVisitor::visitFuncDeclaration(parallactParser::FuncDeclarationContext *ctx) {
    // Create .hpp file function
    FunctionParametrs parametrs;
    std::string nameFunction = ctx->IDENTIFIER()->getText();
    std::ofstream out(path + nameFunction + ".hpp");
    std::string nameFunctionUpper = nameFunction;
    std::transform(nameFunctionUpper.begin(), nameFunctionUpper.end(), nameFunctionUpper.begin(), ::toupper);
    out << "#ifndef " + nameFunctionUpper + "_HPP" << std::endl;
    out << "#define " + nameFunctionUpper + "_HPP" << std::endl << std::endl;
    out << "#include <vector>" << std::endl;
    out << "#include <iostream>" << std::endl;
    std::string paramList;
    for (parallactParser::AssigmentContext* assigment : ctx->block()->input()->paramList()->assigment()) {
        if (assigment->relyClause()) {
            out << "#include \"" << assigment->relyClause()->IDENTIFIER()->getText() << ".hpp\"" << std::endl;
            parametrs.dependency.push_back(assigment->relyClause()->IDENTIFIER()->getText());
        }
        paramList += "const " + assigment->type()->getText() + " " + assigment->IDENTIFIER()->getText() + ", ";
        IOUnit input(assigment->type()->getText(), assigment->IDENTIFIER()->getText(), bool(assigment->relyClause()));
        parametrs.input.push_back(input);
    }

    for (parallactParser::AssigmentContext* assigment : ctx->block()->output()->paramList()->assigment()) {
        if (!assigment->none()) {
            paramList += assigment->type()->getText() + "& " + assigment->IDENTIFIER()->getText() + ", ";
            IOUnit output(assigment->type()->getText(), assigment->IDENTIFIER()->getText());
            parametrs.output.push_back(output);
        }
    }
    paramList.pop_back();
    paramList.pop_back();
    out << std::endl;
    std::string funcDecl = "void " + nameFunction + "(" + paramList + ")";
    out << funcDecl << ";" << std::endl << std::endl;
    out << "#endif // " + nameFunctionUpper + "_HPP";
    functions[nameFunction] = parametrs;
    out.close();

    // Create .cpp file function
    out.open(path + nameFunction + ".cpp");
    out << "#include \"" + nameFunction + ".hpp\"" << std::endl << std::endl;
    out << funcDecl << " {" << std::endl;
    out << "\t" << "std::cout << \"" << nameFunction << "()\" << std::endl;" << std::endl;
    out << "}";
    out.close();
    return visitChildren(ctx);
}