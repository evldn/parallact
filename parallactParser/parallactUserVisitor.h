#pragma once

#include "antlr4-runtime.h"
#include "parallactBaseVisitor.h"

#include <iostream>
#include <cstring>
#include <vector>

class parallactUserVisitor : public parallactBaseVisitor {
public:
    std::any visitFuncDeclaration(parallactParser::FuncDeclarationContext *ctx) override;
};