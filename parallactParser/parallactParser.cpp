
// Generated from ./parallact.g4 by ANTLR 4.13.1


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
      "program", "funcDeclaration", "block", "input", "output", "paramList", 
      "assigment", "relyClause", "type", "none", "expression", "literal"
    },
    std::vector<std::string>{
      "", "'function'", "'{'", "';'", "'}'", "'inputs:'", "'output:'", "','", 
      "'('", "'rely'", "')'", "'none'", "'<'", "'>'", "'=='", "'!='"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "INT", 
      "STRING", "IDENTIFIER", "WS"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,19,97,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,7,
  	7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,1,0,4,0,26,8,0,11,0,12,0,27,1,
  	1,1,1,1,1,1,1,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,3,1,3,3,3,43,8,3,1,4,1,4,
  	3,4,47,8,4,1,5,1,5,1,5,5,5,52,8,5,10,5,12,5,55,9,5,1,6,1,6,1,6,1,6,3,
  	6,61,8,6,1,6,3,6,64,8,6,1,7,1,7,1,7,1,7,1,7,1,8,1,8,1,9,1,9,1,10,1,10,
  	1,10,1,10,1,10,1,10,1,10,3,10,82,8,10,1,10,1,10,1,10,1,10,1,10,1,10,5,
  	10,90,8,10,10,10,12,10,93,9,10,1,11,1,11,1,11,0,1,20,12,0,2,4,6,8,10,
  	12,14,16,18,20,22,0,3,1,0,12,13,1,0,14,15,1,0,16,17,94,0,25,1,0,0,0,2,
  	29,1,0,0,0,4,33,1,0,0,0,6,40,1,0,0,0,8,44,1,0,0,0,10,48,1,0,0,0,12,63,
  	1,0,0,0,14,65,1,0,0,0,16,70,1,0,0,0,18,72,1,0,0,0,20,81,1,0,0,0,22,94,
  	1,0,0,0,24,26,3,2,1,0,25,24,1,0,0,0,26,27,1,0,0,0,27,25,1,0,0,0,27,28,
  	1,0,0,0,28,1,1,0,0,0,29,30,5,1,0,0,30,31,5,18,0,0,31,32,3,4,2,0,32,3,
  	1,0,0,0,33,34,5,2,0,0,34,35,3,6,3,0,35,36,5,3,0,0,36,37,3,8,4,0,37,38,
  	5,3,0,0,38,39,5,4,0,0,39,5,1,0,0,0,40,42,5,5,0,0,41,43,3,10,5,0,42,41,
  	1,0,0,0,42,43,1,0,0,0,43,7,1,0,0,0,44,46,5,6,0,0,45,47,3,10,5,0,46,45,
  	1,0,0,0,46,47,1,0,0,0,47,9,1,0,0,0,48,53,3,12,6,0,49,50,5,7,0,0,50,52,
  	3,12,6,0,51,49,1,0,0,0,52,55,1,0,0,0,53,51,1,0,0,0,53,54,1,0,0,0,54,11,
  	1,0,0,0,55,53,1,0,0,0,56,60,3,16,8,0,57,61,5,18,0,0,58,59,5,18,0,0,59,
  	61,3,14,7,0,60,57,1,0,0,0,60,58,1,0,0,0,61,64,1,0,0,0,62,64,3,18,9,0,
  	63,56,1,0,0,0,63,62,1,0,0,0,64,13,1,0,0,0,65,66,5,8,0,0,66,67,5,9,0,0,
  	67,68,5,18,0,0,68,69,5,10,0,0,69,15,1,0,0,0,70,71,5,18,0,0,71,17,1,0,
  	0,0,72,73,5,11,0,0,73,19,1,0,0,0,74,75,6,10,-1,0,75,82,3,22,11,0,76,77,
  	5,8,0,0,77,78,3,20,10,0,78,79,5,10,0,0,79,82,1,0,0,0,80,82,5,18,0,0,81,
  	74,1,0,0,0,81,76,1,0,0,0,81,80,1,0,0,0,82,91,1,0,0,0,83,84,10,4,0,0,84,
  	85,7,0,0,0,85,90,3,20,10,5,86,87,10,3,0,0,87,88,7,1,0,0,88,90,3,20,10,
  	4,89,83,1,0,0,0,89,86,1,0,0,0,90,93,1,0,0,0,91,89,1,0,0,0,91,92,1,0,0,
  	0,92,21,1,0,0,0,93,91,1,0,0,0,94,95,7,2,0,0,95,23,1,0,0,0,9,27,42,46,
  	53,60,63,81,89,91
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

std::vector<parallactParser::FuncDeclarationContext *> parallactParser::ProgramContext::funcDeclaration() {
  return getRuleContexts<parallactParser::FuncDeclarationContext>();
}

parallactParser::FuncDeclarationContext* parallactParser::ProgramContext::funcDeclaration(size_t i) {
  return getRuleContext<parallactParser::FuncDeclarationContext>(i);
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
    setState(25); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(24);
      funcDeclaration();
      setState(27); 
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

//----------------- FuncDeclarationContext ------------------------------------------------------------------

parallactParser::FuncDeclarationContext::FuncDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* parallactParser::FuncDeclarationContext::IDENTIFIER() {
  return getToken(parallactParser::IDENTIFIER, 0);
}

parallactParser::BlockContext* parallactParser::FuncDeclarationContext::block() {
  return getRuleContext<parallactParser::BlockContext>(0);
}


size_t parallactParser::FuncDeclarationContext::getRuleIndex() const {
  return parallactParser::RuleFuncDeclaration;
}


std::any parallactParser::FuncDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<parallactVisitor*>(visitor))
    return parserVisitor->visitFuncDeclaration(this);
  else
    return visitor->visitChildren(this);
}

parallactParser::FuncDeclarationContext* parallactParser::funcDeclaration() {
  FuncDeclarationContext *_localctx = _tracker.createInstance<FuncDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 2, parallactParser::RuleFuncDeclaration);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(29);
    match(parallactParser::T__0);
    setState(30);
    match(parallactParser::IDENTIFIER);
    setState(31);
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

parallactParser::InputContext* parallactParser::BlockContext::input() {
  return getRuleContext<parallactParser::InputContext>(0);
}

parallactParser::OutputContext* parallactParser::BlockContext::output() {
  return getRuleContext<parallactParser::OutputContext>(0);
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

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(33);
    match(parallactParser::T__1);
    setState(34);
    input();
    setState(35);
    match(parallactParser::T__2);
    setState(36);
    output();
    setState(37);
    match(parallactParser::T__2);
    setState(38);
    match(parallactParser::T__3);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InputContext ------------------------------------------------------------------

parallactParser::InputContext::InputContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

parallactParser::ParamListContext* parallactParser::InputContext::paramList() {
  return getRuleContext<parallactParser::ParamListContext>(0);
}


size_t parallactParser::InputContext::getRuleIndex() const {
  return parallactParser::RuleInput;
}


std::any parallactParser::InputContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<parallactVisitor*>(visitor))
    return parserVisitor->visitInput(this);
  else
    return visitor->visitChildren(this);
}

parallactParser::InputContext* parallactParser::input() {
  InputContext *_localctx = _tracker.createInstance<InputContext>(_ctx, getState());
  enterRule(_localctx, 6, parallactParser::RuleInput);
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
    setState(40);
    match(parallactParser::T__4);
    setState(42);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == parallactParser::T__10

    || _la == parallactParser::IDENTIFIER) {
      setState(41);
      paramList();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OutputContext ------------------------------------------------------------------

parallactParser::OutputContext::OutputContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

parallactParser::ParamListContext* parallactParser::OutputContext::paramList() {
  return getRuleContext<parallactParser::ParamListContext>(0);
}


size_t parallactParser::OutputContext::getRuleIndex() const {
  return parallactParser::RuleOutput;
}


std::any parallactParser::OutputContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<parallactVisitor*>(visitor))
    return parserVisitor->visitOutput(this);
  else
    return visitor->visitChildren(this);
}

parallactParser::OutputContext* parallactParser::output() {
  OutputContext *_localctx = _tracker.createInstance<OutputContext>(_ctx, getState());
  enterRule(_localctx, 8, parallactParser::RuleOutput);
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
    setState(44);
    match(parallactParser::T__5);
    setState(46);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == parallactParser::T__10

    || _la == parallactParser::IDENTIFIER) {
      setState(45);
      paramList();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParamListContext ------------------------------------------------------------------

parallactParser::ParamListContext::ParamListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<parallactParser::AssigmentContext *> parallactParser::ParamListContext::assigment() {
  return getRuleContexts<parallactParser::AssigmentContext>();
}

parallactParser::AssigmentContext* parallactParser::ParamListContext::assigment(size_t i) {
  return getRuleContext<parallactParser::AssigmentContext>(i);
}


size_t parallactParser::ParamListContext::getRuleIndex() const {
  return parallactParser::RuleParamList;
}


std::any parallactParser::ParamListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<parallactVisitor*>(visitor))
    return parserVisitor->visitParamList(this);
  else
    return visitor->visitChildren(this);
}

parallactParser::ParamListContext* parallactParser::paramList() {
  ParamListContext *_localctx = _tracker.createInstance<ParamListContext>(_ctx, getState());
  enterRule(_localctx, 10, parallactParser::RuleParamList);
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
    setState(48);
    assigment();
    setState(53);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == parallactParser::T__6) {
      setState(49);
      match(parallactParser::T__6);
      setState(50);
      assigment();
      setState(55);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AssigmentContext ------------------------------------------------------------------

parallactParser::AssigmentContext::AssigmentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

parallactParser::TypeContext* parallactParser::AssigmentContext::type() {
  return getRuleContext<parallactParser::TypeContext>(0);
}

tree::TerminalNode* parallactParser::AssigmentContext::IDENTIFIER() {
  return getToken(parallactParser::IDENTIFIER, 0);
}

parallactParser::RelyClauseContext* parallactParser::AssigmentContext::relyClause() {
  return getRuleContext<parallactParser::RelyClauseContext>(0);
}

parallactParser::NoneContext* parallactParser::AssigmentContext::none() {
  return getRuleContext<parallactParser::NoneContext>(0);
}


size_t parallactParser::AssigmentContext::getRuleIndex() const {
  return parallactParser::RuleAssigment;
}


std::any parallactParser::AssigmentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<parallactVisitor*>(visitor))
    return parserVisitor->visitAssigment(this);
  else
    return visitor->visitChildren(this);
}

parallactParser::AssigmentContext* parallactParser::assigment() {
  AssigmentContext *_localctx = _tracker.createInstance<AssigmentContext>(_ctx, getState());
  enterRule(_localctx, 12, parallactParser::RuleAssigment);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(63);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case parallactParser::IDENTIFIER: {
        enterOuterAlt(_localctx, 1);
        setState(56);
        type();
        setState(60);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx)) {
        case 1: {
          setState(57);
          match(parallactParser::IDENTIFIER);
          break;
        }

        case 2: {
          setState(58);
          match(parallactParser::IDENTIFIER);
          setState(59);
          relyClause();
          break;
        }

        default:
          break;
        }
        break;
      }

      case parallactParser::T__10: {
        enterOuterAlt(_localctx, 2);
        setState(62);
        none();
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

//----------------- RelyClauseContext ------------------------------------------------------------------

parallactParser::RelyClauseContext::RelyClauseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* parallactParser::RelyClauseContext::IDENTIFIER() {
  return getToken(parallactParser::IDENTIFIER, 0);
}


size_t parallactParser::RelyClauseContext::getRuleIndex() const {
  return parallactParser::RuleRelyClause;
}


std::any parallactParser::RelyClauseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<parallactVisitor*>(visitor))
    return parserVisitor->visitRelyClause(this);
  else
    return visitor->visitChildren(this);
}

parallactParser::RelyClauseContext* parallactParser::relyClause() {
  RelyClauseContext *_localctx = _tracker.createInstance<RelyClauseContext>(_ctx, getState());
  enterRule(_localctx, 14, parallactParser::RuleRelyClause);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(65);
    match(parallactParser::T__7);
    setState(66);
    match(parallactParser::T__8);
    setState(67);
    match(parallactParser::IDENTIFIER);
    setState(68);
    match(parallactParser::T__9);
   
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

tree::TerminalNode* parallactParser::TypeContext::IDENTIFIER() {
  return getToken(parallactParser::IDENTIFIER, 0);
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

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(70);
    match(parallactParser::IDENTIFIER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NoneContext ------------------------------------------------------------------

parallactParser::NoneContext::NoneContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t parallactParser::NoneContext::getRuleIndex() const {
  return parallactParser::RuleNone;
}


std::any parallactParser::NoneContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<parallactVisitor*>(visitor))
    return parserVisitor->visitNone(this);
  else
    return visitor->visitChildren(this);
}

parallactParser::NoneContext* parallactParser::none() {
  NoneContext *_localctx = _tracker.createInstance<NoneContext>(_ctx, getState());
  enterRule(_localctx, 18, parallactParser::RuleNone);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(72);
    match(parallactParser::T__10);
   
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
  size_t startState = 20;
  enterRecursionRule(_localctx, 20, parallactParser::RuleExpression, precedence);

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
    setState(81);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case parallactParser::INT:
      case parallactParser::STRING: {
        setState(75);
        literal();
        break;
      }

      case parallactParser::T__7: {
        setState(76);
        match(parallactParser::T__7);
        setState(77);
        expression(0);
        setState(78);
        match(parallactParser::T__9);
        break;
      }

      case parallactParser::IDENTIFIER: {
        setState(80);
        match(parallactParser::IDENTIFIER);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(91);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(89);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(83);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(84);
          antlrcpp::downCast<ExpressionContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!(_la == parallactParser::T__11

          || _la == parallactParser::T__12)) {
            antlrcpp::downCast<ExpressionContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(85);
          expression(5);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(86);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(87);
          antlrcpp::downCast<ExpressionContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!(_la == parallactParser::T__13

          || _la == parallactParser::T__14)) {
            antlrcpp::downCast<ExpressionContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(88);
          expression(4);
          break;
        }

        default:
          break;
        } 
      }
      setState(93);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx);
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
  enterRule(_localctx, 22, parallactParser::RuleLiteral);
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
    setState(94);
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

bool parallactParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 10: return expressionSempred(antlrcpp::downCast<ExpressionContext *>(context), predicateIndex);

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
