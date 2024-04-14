#include "antlr4-runtime.h"
#include "parallactUserVisitor.h"
#include "parallactParser.h"
#include "parallactLexer.h"
#include <string>
#include <sstream>
#include <iostream>

int main() {
    std::ifstream stream("example.txt");
    antlr4::ANTLRInputStream input(stream);
    parallactLexer lexer(&input);
    antlr4::CommonTokenStream tokens(&lexer);
    parallactParser parser(&tokens);
    parallactUserVisitor visitor;
    visitor.visit(parser.program());

    return 0;
}