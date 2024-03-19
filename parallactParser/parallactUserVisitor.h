#pragma once

#include "antlr4-runtime.h"
#include "parallactBaseVisitor.h"

#include <iostream>
#include <string>
#include <vector>

class parallactUserVisitor : public parallactBaseVisitor {
public:
    std::string code;

    virtual std::any visitParallelMpiOmp(parallactParser::ParallelMpiOmpContext *ctx) override {
        if (ctx->standart->getType() == 2) {
            std::cout << "We on mpi" << std::endl;
            code += "int rank, size;\n"
                    "MPI_Init();\n"
                    "MPI_Comm_rank(MPI_COMM_WORLD, &rank);\n"
                    "MPI_Comm_size(MPI_COMM_WORLD, &size);";
        }
        return 0;
    }
};