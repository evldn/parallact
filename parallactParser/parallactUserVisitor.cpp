#include "parallactUserVisitor.h"

std::any parallactUserVisitor::visitFuncDeclaration(parallactParser::FuncDeclarationContext *ctx) {
    std::string nameFunction = ctx->IDENTIFIER()->getText();
    std::string path = "D:/UNN/LABS/parallelLanguage/project/include/";
    std::ofstream out(path + nameFunction + ".hpp");
    std::string nameFunctionUpper = nameFunction;
    std::transform(nameFunctionUpper.begin(), nameFunctionUpper.end(), nameFunctionUpper.begin(), ::toupper);
    out << "#ifndef " + nameFunctionUpper + "_HPP" << std::endl;
    out << "#define " + nameFunctionUpper + "_HPP" << std::endl << std::endl;
    out << "#include <vector>" << std::endl;
    std::string paramList;
    for (parallactParser::AssigmentContext* assigment : ctx->block()->input()->paramList()->assigment()) {
        if (assigment->relyClause()) {
            out << "#include \"" << assigment->relyClause()->IDENTIFIER()->getText() << ".hpp\"" << std::endl;
        }
        paramList += "const " + assigment->type()->getText() + " " + assigment->IDENTIFIER()->getText() + ", ";
    }

    for (parallactParser::AssigmentContext* assigment : ctx->block()->output()->paramList()->assigment()) {
        if (!assigment->none()) {
            paramList += assigment->type()->getText() + "& " + assigment->IDENTIFIER()->getText() + ", ";
        }
    }
    paramList.pop_back();
    paramList.pop_back();
    out << std::endl;

    std::string funcDecl = "void " + nameFunction + "(" + paramList + ")";
    out << funcDecl << ";" << std::endl << std::endl;
    out << "#endif // " + nameFunctionUpper + "_HPP";
    out.close();

    out.open(path + nameFunction + ".cpp");
    out << "#include \"" + nameFunction + ".hpp\"" << std::endl << std::endl;
    out << funcDecl << " {" << std::endl;
    out << "\t " << "// TODO: write a code" << std::endl;
    out << "}";
    return visitChildren(ctx);
}