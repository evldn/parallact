#pragma once

#include "antlr4-runtime.h"
#include "parallactBaseVisitor.h"

#include <iostream>
#include <string>
#include <vector>

class parallactUserVisitor : public parallactBaseVisitor {
public:
    std::string code;
    bool MPI = false;
    bool OpenMP = false;

    virtual std::any visitParallelMpiOmp(parallactParser::ParallelMpiOmpContext *ctx) override {
        if (ctx->standart->getType() == 2) {
            std::cout << "We on mpi" << std::endl;
            code += "int rank, size;\n"
                    "MPI_Init();\n"
                    "MPI_Comm_rank(MPI_COMM_WORLD, &rank);\n"
                    "MPI_Comm_size(MPI_COMM_WORLD, &size);\n";
            MPI = true;
        }
        return visitChildren(ctx);
    }

    virtual std::any visitForStatement(parallactParser::ForStatementContext* ctx) override {
        std::cout << "We on for" << std::endl;
        if (MPI) {
            code += "int n = " + ctx->expression()->expression().at(1)->getText() + ";\n";
            code += "int local_n = n / size;\n";
            code += "int start = rank * local_n;\n";
            code += "int end = (rank + 1) * local_n;\n";
            code += "for (" + ctx->type()->getText() + " "
                + ctx->assignment().at(0)->IDENTIFIER()->getText() + " = " + "start; "
                + ctx->expression()->expression().at(0)->getText() + " < " + "end; "
                + ctx->assignment().at(1)->IDENTIFIER()->getText() + "++)" + " {\n";
            code += "\t // your code\n";
            code += "}";
        }
        return 0;
    }
};