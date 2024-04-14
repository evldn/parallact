
// Generated from ./parallact.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"
#include "parallactParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by parallactParser.
 */
class  parallactVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by parallactParser.
   */
    virtual std::any visitProgram(parallactParser::ProgramContext *context) = 0;

    virtual std::any visitFuncDeclaration(parallactParser::FuncDeclarationContext *context) = 0;

    virtual std::any visitBlock(parallactParser::BlockContext *context) = 0;

    virtual std::any visitInput(parallactParser::InputContext *context) = 0;

    virtual std::any visitOutput(parallactParser::OutputContext *context) = 0;

    virtual std::any visitParamList(parallactParser::ParamListContext *context) = 0;

    virtual std::any visitAssigment(parallactParser::AssigmentContext *context) = 0;

    virtual std::any visitRelyClause(parallactParser::RelyClauseContext *context) = 0;

    virtual std::any visitType(parallactParser::TypeContext *context) = 0;

    virtual std::any visitNone(parallactParser::NoneContext *context) = 0;

    virtual std::any visitExpression(parallactParser::ExpressionContext *context) = 0;

    virtual std::any visitLiteral(parallactParser::LiteralContext *context) = 0;


};

