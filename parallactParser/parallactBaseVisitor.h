
// Generated from ./parallact.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"
#include "parallactVisitor.h"


/**
 * This class provides an empty implementation of parallactVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  parallactBaseVisitor : public parallactVisitor {
public:

  virtual std::any visitProgram(parallactParser::ProgramContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFuncDeclaration(parallactParser::FuncDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBlock(parallactParser::BlockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitInput(parallactParser::InputContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOutput(parallactParser::OutputContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParamList(parallactParser::ParamListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAssigment(parallactParser::AssigmentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRelyClause(parallactParser::RelyClauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitType(parallactParser::TypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNone(parallactParser::NoneContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExpression(parallactParser::ExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLiteral(parallactParser::LiteralContext *ctx) override {
    return visitChildren(ctx);
  }


};

