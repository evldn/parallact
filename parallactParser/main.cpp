#include "antlr4-runtime.h"
#include "parallactUserVisitor.h"
#include "parallactParser.h"
#include "parallactLexer.h"
#include <string>
#include <sstream>
#include <iostream>

int main() {
    std::cout << "Please, enter you project name: ";
    std::string projectName;
    std::cin >> projectName;
    while (projectName == "executorLibrary") {
        std::cout << "This name is system!" << std::endl;
        std::cout << "Please, enter you project name: ";
        std::cin >> projectName;
    }
    std::ifstream stream("example.txt");
    antlr4::ANTLRInputStream input(stream);
    parallactLexer lexer(&input);
    antlr4::CommonTokenStream tokens(&lexer);
    parallactParser parser(&tokens);
    parallactUserVisitor visitor;
    visitor.setProjectName(projectName);
    visitor.visit(parser.program());
    return 0;
}