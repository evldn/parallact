
// Generated from parallact.g4 by ANTLR 4.13.1


#include "parallactVisitor.h"

#include "parallactParser.h"


using namespace antlrcpp;

using namespace antlr4;

namespace {

struct ParallactParserStaticData final {
  ParallactParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  ParallactParserStaticData(const ParallactParserStaticData&) = delete;
  ParallactParserStaticData(ParallactParserStaticData&&) = delete;
  ParallactParserStaticData& operator=(const ParallactParserStaticData&) = delete;
  ParallactParserStaticData& operator=(ParallactParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag parallactParserOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
ParallactParserStaticData *parallactParserStaticData = nullptr;

void parallactParserInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (parallactParserStaticData != nullptr) {
    return;
  }
#else
  assert(parallactParserStaticData == nullptr);
#endif
  auto staticData = std::make_unique<ParallactParserStaticData>(
    std::vector<std::string>{
      "program", "function", "block", "statement", "assignment", "forStatement", 
      "expression", "literal", "type"
    },
    std::vector<std::string>{
      "", "'parallel with'", "'mpi'", "'openmp'", "'{'", "'}'", "';'", "'='", 
      "'++'", "'--'", "'+='", "'-='", "'for'", "'('", "')'", "'<'", "'>'", 
      "'=='", "'!='", "'int'", "'float'", "'double'"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "", "INT", "STRING", "IDENTIFIER", "WS"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,25,103,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,1,0,4,0,20,8,0,11,0,12,0,21,1,1,1,1,1,1,1,1,1,2,1,2,5,2,
  	30,8,2,10,2,12,2,33,9,2,1,2,1,2,1,3,1,3,1,3,1,3,3,3,41,8,3,1,4,1,4,1,
  	4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,3,4,61,
  	8,4,1,5,1,5,1,5,1,5,1,5,1,5,1,5,3,5,70,8,5,1,5,1,5,1,5,1,5,1,5,1,5,1,
  	5,1,6,1,6,1,6,1,6,1,6,1,6,1,6,3,6,86,8,6,1,6,1,6,1,6,1,6,1,6,1,6,5,6,
  	94,8,6,10,6,12,6,97,9,6,1,7,1,7,1,8,1,8,1,8,0,1,12,9,0,2,4,6,8,10,12,
  	14,16,0,5,1,0,2,3,1,0,15,16,1,0,17,18,1,0,22,23,1,0,19,21,107,0,19,1,
  	0,0,0,2,23,1,0,0,0,4,27,1,0,0,0,6,40,1,0,0,0,8,60,1,0,0,0,10,62,1,0,0,
  	0,12,85,1,0,0,0,14,98,1,0,0,0,16,100,1,0,0,0,18,20,3,2,1,0,19,18,1,0,
  	0,0,20,21,1,0,0,0,21,19,1,0,0,0,21,22,1,0,0,0,22,1,1,0,0,0,23,24,5,1,
  	0,0,24,25,7,0,0,0,25,26,3,4,2,0,26,3,1,0,0,0,27,31,5,4,0,0,28,30,3,6,
  	3,0,29,28,1,0,0,0,30,33,1,0,0,0,31,29,1,0,0,0,31,32,1,0,0,0,32,34,1,0,
  	0,0,33,31,1,0,0,0,34,35,5,5,0,0,35,5,1,0,0,0,36,37,3,8,4,0,37,38,5,6,
  	0,0,38,41,1,0,0,0,39,41,3,10,5,0,40,36,1,0,0,0,40,39,1,0,0,0,41,7,1,0,
  	0,0,42,43,3,16,8,0,43,44,5,24,0,0,44,45,5,7,0,0,45,46,3,12,6,0,46,61,
  	1,0,0,0,47,48,5,24,0,0,48,49,5,7,0,0,49,61,3,12,6,0,50,51,5,24,0,0,51,
  	61,5,8,0,0,52,53,5,24,0,0,53,61,5,9,0,0,54,55,5,24,0,0,55,56,5,10,0,0,
  	56,61,3,12,6,0,57,58,5,24,0,0,58,59,5,11,0,0,59,61,3,12,6,0,60,42,1,0,
  	0,0,60,47,1,0,0,0,60,50,1,0,0,0,60,52,1,0,0,0,60,54,1,0,0,0,60,57,1,0,
  	0,0,61,9,1,0,0,0,62,63,5,12,0,0,63,69,5,13,0,0,64,65,3,16,8,0,65,66,3,
  	8,4,0,66,70,1,0,0,0,67,70,3,8,4,0,68,70,5,24,0,0,69,64,1,0,0,0,69,67,
  	1,0,0,0,69,68,1,0,0,0,70,71,1,0,0,0,71,72,5,6,0,0,72,73,3,12,6,0,73,74,
  	5,6,0,0,74,75,3,8,4,0,75,76,5,14,0,0,76,77,3,4,2,0,77,11,1,0,0,0,78,79,
  	6,6,-1,0,79,86,3,14,7,0,80,81,5,13,0,0,81,82,3,12,6,0,82,83,5,14,0,0,
  	83,86,1,0,0,0,84,86,5,24,0,0,85,78,1,0,0,0,85,80,1,0,0,0,85,84,1,0,0,
  	0,86,95,1,0,0,0,87,88,10,4,0,0,88,89,7,1,0,0,89,94,3,12,6,5,90,91,10,
  	3,0,0,91,92,7,2,0,0,92,94,3,12,6,4,93,87,1,0,0,0,93,90,1,0,0,0,94,97,
  	1,0,0,0,95,93,1,0,0,0,95,96,1,0,0,0,96,13,1,0,0,0,97,95,1,0,0,0,98,99,
  	7,3,0,0,99,15,1,0,0,0,100,101,7,4,0,0,101,17,1,0,0,0,8,21,31,40,60,69,
  	85,93,95
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  parallactParserStaticData = staticData.release();
}

}

parallactParser::parallactParser(TokenStream *input) : parallactParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

parallactParser::parallactParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  parallactParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *parallactParserStaticData->atn, parallactParserStaticData->decisionToDFA, parallactParserStaticData->sharedContextCache, options);
}

parallactParser::~parallactParser() {
  delete _interpreter;
}

const atn::ATN& parallactParser::getATN() const {
  return *parallactParserStaticData->atn;
}

std::string parallactParser::getGrammarFileName() const {
  return "parallact.g4";
}

const std::vector<std::string>& parallactParser::getRuleNames() const {
  return parallactParserStaticData->ruleNames;
}

const dfa::Vocabulary& parallactParser::getVocabulary() const {
  return parallactParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView parallactParser::getSerializedATN() const {
  return parallactParserStaticData->serializedATN;
}


//----------------- ProgramContext ------------------------------------------------------------------

parallactParser::ProgramContext::ProgramContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<parallactParser::FunctionContext *> parallactParser::ProgramContext::function() {
  return getRuleContexts<parallactParser::FunctionContext>();
}

parallactParser::FunctionContext* parallactParser::ProgramContext::function(size_t i) {
  return getRuleContext<parallactParser::FunctionContext>(i);
}


size_t parallactParser::ProgramContext::getRuleIndex() const {
  return parallactParser::RuleProgram;
}


std::any parallactParser::ProgramContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<parallactVisitor*>(visitor))
    return parserVisitor->visitProgram(this);
  else
    return visitor->visitChildren(this);
}

parallactParser::ProgramContext* parallactParser::program() {
  ProgramContext *_localctx = _tracker.createInstance<ProgramContext>(_ctx, getState());
  enterRule(_localctx, 0, parallactParser::RuleProgram);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(19); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(18);
      function();
      setState(21); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == parallactParser::T__0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionContext ------------------------------------------------------------------

parallactParser::FunctionContext::FunctionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t parallactParser::FunctionContext::getRuleIndex() const {
  return parallactParser::RuleFunction;
}

void parallactParser::FunctionContext::copyFrom(FunctionContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- ParallelMpiOmpContext ------------------------------------------------------------------

parallactParser::BlockContext* parallactParser::ParallelMpiOmpContext::block() {
  return getRuleContext<parallactParser::BlockContext>(0);
}

parallactParser::ParallelMpiOmpContext::ParallelMpiOmpContext(FunctionContext *ctx) { copyFrom(ctx); }


std::any parallactParser::ParallelMpiOmpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<parallactVisitor*>(visitor))
    return parserVisitor->visitParallelMpiOmp(this);
  else
    return visitor->visitChildren(this);
}
parallactParser::FunctionContext* parallactParser::function() {
  FunctionContext *_localctx = _tracker.createInstance<FunctionContext>(_ctx, getState());
  enterRule(_localctx, 2, parallactParser::RuleFunction);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    _localctx = _tracker.createInstance<parallactParser::ParallelMpiOmpContext>(_localctx);
    enterOuterAlt(_localctx, 1);
    setState(23);
    match(parallactParser::T__0);
    setState(24);
    antlrcpp::downCast<ParallelMpiOmpContext *>(_localctx)->standart = _input->LT(1);
    _la = _input->LA(1);
    if (!(_la == parallactParser::T__1

    || _la == parallactParser::T__2)) {
      antlrcpp::downCast<ParallelMpiOmpContext *>(_localctx)->standart = _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(25);
    block();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BlockContext ------------------------------------------------------------------

parallactParser::BlockContext::BlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<parallactParser::StatementContext *> parallactParser::BlockContext::statement() {
  return getRuleContexts<parallactParser::StatementContext>();
}

parallactParser::StatementContext* parallactParser::BlockContext::statement(size_t i) {
  return getRuleContext<parallactParser::StatementContext>(i);
}


size_t parallactParser::BlockContext::getRuleIndex() const {
  return parallactParser::RuleBlock;
}


std::any parallactParser::BlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<parallactVisitor*>(visitor))
    return parserVisitor->visitBlock(this);
  else
    return visitor->visitChildren(this);
}

parallactParser::BlockContext* parallactParser::block() {
  BlockContext *_localctx = _tracker.createInstance<BlockContext>(_ctx, getState());
  enterRule(_localctx, 4, parallactParser::RuleBlock);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(27);
    match(parallactParser::T__3);
    setState(31);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 20451328) != 0)) {
      setState(28);
      statement();
      setState(33);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(34);
    match(parallactParser::T__4);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementContext ------------------------------------------------------------------

parallactParser::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

parallactParser::AssignmentContext* parallactParser::StatementContext::assignment() {
  return getRuleContext<parallactParser::AssignmentContext>(0);
}

parallactParser::ForStatementContext* parallactParser::StatementContext::forStatement() {
  return getRuleContext<parallactParser::ForStatementContext>(0);
}


size_t parallactParser::StatementContext::getRuleIndex() const {
  return parallactParser::RuleStatement;
}


std::any parallactParser::StatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<parallactVisitor*>(visitor))
    return parserVisitor->visitStatement(this);
  else
    return visitor->visitChildren(this);
}

parallactParser::StatementContext* parallactParser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 6, parallactParser::RuleStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(40);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case parallactParser::T__18:
      case parallactParser::T__19:
      case parallactParser::T__20:
      case parallactParser::IDENTIFIER: {
        enterOuterAlt(_localctx, 1);
        setState(36);
        assignment();
        setState(37);
        match(parallactParser::T__5);
        break;
      }

      case parallactParser::T__11: {
        enterOuterAlt(_localctx, 2);
        setState(39);
        forStatement();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AssignmentContext ------------------------------------------------------------------

parallactParser::AssignmentContext::AssignmentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

parallactParser::TypeContext* parallactParser::AssignmentContext::type() {
  return getRuleContext<parallactParser::TypeContext>(0);
}

tree::TerminalNode* parallactParser::AssignmentContext::IDENTIFIER() {
  return getToken(parallactParser::IDENTIFIER, 0);
}

parallactParser::ExpressionContext* parallactParser::AssignmentContext::expression() {
  return getRuleContext<parallactParser::ExpressionContext>(0);
}


size_t parallactParser::AssignmentContext::getRuleIndex() const {
  return parallactParser::RuleAssignment;
}


std::any parallactParser::AssignmentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<parallactVisitor*>(visitor))
    return parserVisitor->visitAssignment(this);
  else
    return visitor->visitChildren(this);
}

parallactParser::AssignmentContext* parallactParser::assignment() {
  AssignmentContext *_localctx = _tracker.createInstance<AssignmentContext>(_ctx, getState());
  enterRule(_localctx, 8, parallactParser::RuleAssignment);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(60);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(42);
      type();
      setState(43);
      match(parallactParser::IDENTIFIER);
      setState(44);
      match(parallactParser::T__6);
      setState(45);
      expression(0);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(47);
      match(parallactParser::IDENTIFIER);
      setState(48);
      match(parallactParser::T__6);
      setState(49);
      expression(0);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(50);
      match(parallactParser::IDENTIFIER);
      setState(51);
      match(parallactParser::T__7);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(52);
      match(parallactParser::IDENTIFIER);
      setState(53);
      match(parallactParser::T__8);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(54);
      match(parallactParser::IDENTIFIER);
      setState(55);
      match(parallactParser::T__9);
      setState(56);
      expression(0);
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(57);
      match(parallactParser::IDENTIFIER);
      setState(58);
      match(parallactParser::T__10);
      setState(59);
      expression(0);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ForStatementContext ------------------------------------------------------------------

parallactParser::ForStatementContext::ForStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

parallactParser::ExpressionContext* parallactParser::ForStatementContext::expression() {
  return getRuleContext<parallactParser::ExpressionContext>(0);
}

std::vector<parallactParser::AssignmentContext *> parallactParser::ForStatementContext::assignment() {
  return getRuleContexts<parallactParser::AssignmentContext>();
}

parallactParser::AssignmentContext* parallactParser::ForStatementContext::assignment(size_t i) {
  return getRuleContext<parallactParser::AssignmentContext>(i);
}

parallactParser::BlockContext* parallactParser::ForStatementContext::block() {
  return getRuleContext<parallactParser::BlockContext>(0);
}

parallactParser::TypeContext* parallactParser::ForStatementContext::type() {
  return getRuleContext<parallactParser::TypeContext>(0);
}

tree::TerminalNode* parallactParser::ForStatementContext::IDENTIFIER() {
  return getToken(parallactParser::IDENTIFIER, 0);
}


size_t parallactParser::ForStatementContext::getRuleIndex() const {
  return parallactParser::RuleForStatement;
}


std::any parallactParser::ForStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<parallactVisitor*>(visitor))
    return parserVisitor->visitForStatement(this);
  else
    return visitor->visitChildren(this);
}

parallactParser::ForStatementContext* parallactParser::forStatement() {
  ForStatementContext *_localctx = _tracker.createInstance<ForStatementContext>(_ctx, getState());
  enterRule(_localctx, 10, parallactParser::RuleForStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(62);
    match(parallactParser::T__11);
    setState(63);
    match(parallactParser::T__12);
    setState(69);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx)) {
    case 1: {
      setState(64);
      type();
      setState(65);
      assignment();
      break;
    }

    case 2: {
      setState(67);
      assignment();
      break;
    }

    case 3: {
      setState(68);
      match(parallactParser::IDENTIFIER);
      break;
    }

    default:
      break;
    }
    setState(71);
    match(parallactParser::T__5);
    setState(72);
    expression(0);
    setState(73);
    match(parallactParser::T__5);
    setState(74);
    assignment();
    setState(75);
    match(parallactParser::T__13);
    setState(76);
    block();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionContext ------------------------------------------------------------------

parallactParser::ExpressionContext::ExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

parallactParser::LiteralContext* parallactParser::ExpressionContext::literal() {
  return getRuleContext<parallactParser::LiteralContext>(0);
}

std::vector<parallactParser::ExpressionContext *> parallactParser::ExpressionContext::expression() {
  return getRuleContexts<parallactParser::ExpressionContext>();
}

parallactParser::ExpressionContext* parallactParser::ExpressionContext::expression(size_t i) {
  return getRuleContext<parallactParser::ExpressionContext>(i);
}

tree::TerminalNode* parallactParser::ExpressionContext::IDENTIFIER() {
  return getToken(parallactParser::IDENTIFIER, 0);
}


size_t parallactParser::ExpressionContext::getRuleIndex() const {
  return parallactParser::RuleExpression;
}


std::any parallactParser::ExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<parallactVisitor*>(visitor))
    return parserVisitor->visitExpression(this);
  else
    return visitor->visitChildren(this);
}


parallactParser::ExpressionContext* parallactParser::expression() {
   return expression(0);
}

parallactParser::ExpressionContext* parallactParser::expression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  parallactParser::ExpressionContext *_localctx = _tracker.createInstance<ExpressionContext>(_ctx, parentState);
  parallactParser::ExpressionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 12;
  enterRecursionRule(_localctx, 12, parallactParser::RuleExpression, precedence);

    size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(85);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case parallactParser::INT:
      case parallactParser::STRING: {
        setState(79);
        literal();
        break;
      }

      case parallactParser::T__12: {
        setState(80);
        match(parallactParser::T__12);
        setState(81);
        expression(0);
        setState(82);
        match(parallactParser::T__13);
        break;
      }

      case parallactParser::IDENTIFIER: {
        setState(84);
        match(parallactParser::IDENTIFIER);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(95);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(93);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(87);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(88);
          antlrcpp::downCast<ExpressionContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!(_la == parallactParser::T__14

          || _la == parallactParser::T__15)) {
            antlrcpp::downCast<ExpressionContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(89);
          expression(5);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(90);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(91);
          antlrcpp::downCast<ExpressionContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!(_la == parallactParser::T__16

          || _la == parallactParser::T__17)) {
            antlrcpp::downCast<ExpressionContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(92);
          expression(4);
          break;
        }

        default:
          break;
        } 
      }
      setState(97);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- LiteralContext ------------------------------------------------------------------

parallactParser::LiteralContext::LiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* parallactParser::LiteralContext::INT() {
  return getToken(parallactParser::INT, 0);
}

tree::TerminalNode* parallactParser::LiteralContext::STRING() {
  return getToken(parallactParser::STRING, 0);
}


size_t parallactParser::LiteralContext::getRuleIndex() const {
  return parallactParser::RuleLiteral;
}


std::any parallactParser::LiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<parallactVisitor*>(visitor))
    return parserVisitor->visitLiteral(this);
  else
    return visitor->visitChildren(this);
}

parallactParser::LiteralContext* parallactParser::literal() {
  LiteralContext *_localctx = _tracker.createInstance<LiteralContext>(_ctx, getState());
  enterRule(_localctx, 14, parallactParser::RuleLiteral);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(98);
    _la = _input->LA(1);
    if (!(_la == parallactParser::INT

    || _la == parallactParser::STRING)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeContext ------------------------------------------------------------------

parallactParser::TypeContext::TypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t parallactParser::TypeContext::getRuleIndex() const {
  return parallactParser::RuleType;
}


std::any parallactParser::TypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<parallactVisitor*>(visitor))
    return parserVisitor->visitType(this);
  else
    return visitor->visitChildren(this);
}

parallactParser::TypeContext* parallactParser::type() {
  TypeContext *_localctx = _tracker.createInstance<TypeContext>(_ctx, getState());
  enterRule(_localctx, 16, parallactParser::RuleType);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(100);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 3670016) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool parallactParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 6: return expressionSempred(antlrcpp::downCast<ExpressionContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool parallactParser::expressionSempred(ExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 4);
    case 1: return precpred(_ctx, 3);

  default:
    break;
  }
  return true;
}

void parallactParser::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  parallactParserInitialize();
#else
  ::antlr4::internal::call_once(parallactParserOnceFlag, parallactParserInitialize);
#endif
}
