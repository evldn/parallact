#pragma once

#include "antlr4-runtime.h"
#include "parallactBaseVisitor.h"

#include <iostream>
#include <cstring>
#include <vector>

class parallactUserVisitor : public parallactBaseVisitor {
public:
    std::any visitFuncDeclaration(parallactParser::FuncDeclarationContext *ctx) override {
        std::string nameFunction = ctx->IDENTIFIER()->getText();
        std::ofstream out("generateFiles/" + nameFunction + ".hpp");
        std::string nameFunctionUpper = nameFunction;
        std::transform(nameFunctionUpper.begin(), nameFunctionUpper.end(), nameFunctionUpper.begin(), ::toupper);
        out << "#ifndef " + nameFunctionUpper + "_HPP" << std::endl;
        out << "#define " + nameFunctionUpper + "_HPP" << std::endl << std::endl;
        out << "#include <vector>" << std::endl;
        for (parallactParser::AssigmentContext* assigment : ctx->block()->input()->paramList()->assigment()) {
            if (assigment->relyClause()) {
                out << "#include \"" << assigment->relyClause()->IDENTIFIER()->getText() << ".hpp\"" << std::endl;
            }
        }
        out << std::endl;
        std::string typeOutput;
        if (ctx->block()->output()->assigment()->none()) {
            typeOutput = "void";
        } else if (ctx->block()->output()->assigment()->type()) {
            typeOutput = ctx->block()->output()->assigment()->type()->getText();
        }
        std::string paramList;
        for (parallactParser::AssigmentContext* assigment : ctx->block()->input()->paramList()->assigment()) {
            paramList += assigment->type()->getText() + " " + assigment->IDENTIFIER()->getText() + ", ";
        }
        paramList.pop_back();
        paramList.pop_back();
        std::string funcDecl = typeOutput + " " + nameFunction + "(" + paramList + ")";
        out << funcDecl << ";" << std::endl << std::endl;
        out << "#endif // " + nameFunctionUpper + "_HPP";
        out.close();

        out.open("generateFiles/" + nameFunction + ".cpp");
        out << "#include \"" + nameFunction + ".hpp\"" << std::endl << std::endl;
        out << funcDecl << " {" << std::endl;
        out << "\t " << "// TODO: write a code" << std::endl;
        out << "}";
        return visitChildren(ctx);
    }
};