
// Generated from ./parallact.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"




class  parallactParser : public antlr4::Parser {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    T__7 = 8, T__8 = 9, T__9 = 10, T__10 = 11, T__11 = 12, T__12 = 13, T__13 = 14, 
    T__14 = 15, INT = 16, STRING = 17, IDENTIFIER = 18, WS = 19
  };

  enum {
    RuleProgram = 0, RuleFuncDeclaration = 1, RuleBlock = 2, RuleInput = 3, 
    RuleOutput = 4, RuleParamList = 5, RuleAssigment = 6, RuleRelyClause = 7, 
    RuleType = 8, RuleNone = 9, RuleExpression = 10, RuleLiteral = 11
  };

  explicit parallactParser(antlr4::TokenStream *input);

  parallactParser(antlr4::TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options);

  ~parallactParser() override;

  std::string getGrammarFileName() const override;

  const antlr4::atn::ATN& getATN() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;


  class ProgramContext;
  class FuncDeclarationContext;
  class BlockContext;
  class InputContext;
  class OutputContext;
  class ParamListContext;
  class AssigmentContext;
  class RelyClauseContext;
  class TypeContext;
  class NoneContext;
  class ExpressionContext;
  class LiteralContext; 

  class  ProgramContext : public antlr4::ParserRuleContext {
  public:
    ProgramContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<FuncDeclarationContext *> funcDeclaration();
    FuncDeclarationContext* funcDeclaration(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ProgramContext* program();

  class  FuncDeclarationContext : public antlr4::ParserRuleContext {
  public:
    FuncDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENTIFIER();
    BlockContext *block();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FuncDeclarationContext* funcDeclaration();

  class  BlockContext : public antlr4::ParserRuleContext {
  public:
    BlockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    InputContext *input();
    OutputContext *output();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BlockContext* block();

  class  InputContext : public antlr4::ParserRuleContext {
  public:
    InputContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ParamListContext *paramList();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InputContext* input();

  class  OutputContext : public antlr4::ParserRuleContext {
  public:
    OutputContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AssigmentContext *assigment();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OutputContext* output();

  class  ParamListContext : public antlr4::ParserRuleContext {
  public:
    ParamListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<AssigmentContext *> assigment();
    AssigmentContext* assigment(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ParamListContext* paramList();

  class  AssigmentContext : public antlr4::ParserRuleContext {
  public:
    AssigmentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeContext *type();
    antlr4::tree::TerminalNode *IDENTIFIER();
    RelyClauseContext *relyClause();
    NoneContext *none();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AssigmentContext* assigment();

  class  RelyClauseContext : public antlr4::ParserRuleContext {
  public:
    RelyClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENTIFIER();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RelyClauseContext* relyClause();

  class  TypeContext : public antlr4::ParserRuleContext {
  public:
    TypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENTIFIER();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypeContext* type();

  class  NoneContext : public antlr4::ParserRuleContext {
  public:
    NoneContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NoneContext* none();

  class  ExpressionContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *op = nullptr;
    ExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LiteralContext *literal();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *IDENTIFIER();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExpressionContext* expression();
  ExpressionContext* expression(int precedence);
  class  LiteralContext : public antlr4::ParserRuleContext {
  public:
    LiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INT();
    antlr4::tree::TerminalNode *STRING();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LiteralContext* literal();


  bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;

  bool expressionSempred(ExpressionContext *_localctx, size_t predicateIndex);

  // By default the static state used to implement the parser is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:
};

