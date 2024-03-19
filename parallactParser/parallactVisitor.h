
// Generated from parallact.g4 by ANTLR 4.13.1

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

    virtual std::any visitParallelMpiOmp(parallactParser::ParallelMpiOmpContext *context) = 0;

    virtual std::any visitBlock(parallactParser::BlockContext *context) = 0;

    virtual std::any visitStatement(parallactParser::StatementContext *context) = 0;

    virtual std::any visitAssignment(parallactParser::AssignmentContext *context) = 0;

    virtual std::any visitForStatement(parallactParser::ForStatementContext *context) = 0;

    virtual std::any visitExpression(parallactParser::ExpressionContext *context) = 0;

    virtual std::any visitLiteral(parallactParser::LiteralContext *context) = 0;

    virtual std::any visitType(parallactParser::TypeContext *context) = 0;


};

