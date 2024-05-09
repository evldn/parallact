#pragma once

#include "antlr4-runtime.h"
#include "parallactBaseVisitor.h"

#include <iostream>
#include <cstring>
#include <vector>
#include <filesystem>

struct IOUnit {
    std::string type;
    std::string name;
    bool rely;
    IOUnit(std::string type_, std::string name_, bool rely_ = false) : type(type_), name(name_), rely(rely_) {}
};

struct FunctionParametrs {
    std::vector<IOUnit> input;
    std::vector<IOUnit> output;
    std::vector<std::string> dependency;
};

class parallactUserVisitor : public parallactBaseVisitor {
    std::string path;
    std::string projectName;
    std::map<std::string, FunctionParametrs> functions;
    static void appendLineToFile(std::string filepath, std::string line)
    {
        std::ofstream file;
        file.open(filepath, std::ios::out | std::ios::app);
        if (file.fail())
            throw std::ios_base::failure(std::strerror(errno));
        file.exceptions(file.exceptions() | std::ios::failbit | std::ifstream::badbit);
        file << line << std::endl;
    }
public:
    std::any visitFuncDeclaration(parallactParser::FuncDeclarationContext *ctx) override;
    std::any visitProgram(parallactParser::ProgramContext *ctx) override;
    void setProjectName(std::string projectName) { this->projectName = projectName; }
};