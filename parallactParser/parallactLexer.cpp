
// Generated from ./parallact.g4 by ANTLR 4.13.1


#include "parallactLexer.h"


using namespace antlr4;



using namespace antlr4;

namespace {

struct ParallactLexerStaticData final {
  ParallactLexerStaticData(std::vector<std::string> ruleNames,
                          std::vector<std::string> channelNames,
                          std::vector<std::string> modeNames,
                          std::vector<std::string> literalNames,
                          std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), channelNames(std::move(channelNames)),
        modeNames(std::move(modeNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  ParallactLexerStaticData(const ParallactLexerStaticData&) = delete;
  ParallactLexerStaticData(ParallactLexerStaticData&&) = delete;
  ParallactLexerStaticData& operator=(const ParallactLexerStaticData&) = delete;
  ParallactLexerStaticData& operator=(ParallactLexerStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> channelNames;
  const std::vector<std::string> modeNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag parallactlexerLexerOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
ParallactLexerStaticData *parallactlexerLexerStaticData = nullptr;

void parallactlexerLexerInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (parallactlexerLexerStaticData != nullptr) {
    return;
  }
#else
  assert(parallactlexerLexerStaticData == nullptr);
#endif
  auto staticData = std::make_unique<ParallactLexerStaticData>(
    std::vector<std::string>{
      "T__0", "T__1", "T__2", "T__3", "T__4", "T__5", "T__6", "T__7", "T__8", 
      "T__9", "T__10", "T__11", "T__12", "T__13", "T__14", "INT", "STRING", 
      "IDENTIFIER", "WS"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
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
  	4,0,19,122,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,
  	6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,
  	7,14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,1,0,1,0,1,0,1,0,1,0,1,0,
  	1,0,1,0,1,0,1,1,1,1,1,2,1,2,1,3,1,3,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,
  	5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,6,1,6,1,7,1,7,1,8,1,8,1,8,1,8,1,8,1,9,
  	1,9,1,10,1,10,1,10,1,10,1,10,1,11,1,11,1,12,1,12,1,13,1,13,1,13,1,14,
  	1,14,1,14,1,15,4,15,98,8,15,11,15,12,15,99,1,16,1,16,5,16,104,8,16,10,
  	16,12,16,107,9,16,1,16,1,16,1,17,4,17,112,8,17,11,17,12,17,113,1,18,4,
  	18,117,8,18,11,18,12,18,118,1,18,1,18,0,0,19,1,1,3,2,5,3,7,4,9,5,11,6,
  	13,7,15,8,17,9,19,10,21,11,23,12,25,13,27,14,29,15,31,16,33,17,35,18,
  	37,19,1,0,4,1,0,48,57,1,0,34,34,5,0,58,58,60,60,62,62,65,90,97,122,3,
  	0,9,10,13,13,32,32,125,0,1,1,0,0,0,0,3,1,0,0,0,0,5,1,0,0,0,0,7,1,0,0,
  	0,0,9,1,0,0,0,0,11,1,0,0,0,0,13,1,0,0,0,0,15,1,0,0,0,0,17,1,0,0,0,0,19,
  	1,0,0,0,0,21,1,0,0,0,0,23,1,0,0,0,0,25,1,0,0,0,0,27,1,0,0,0,0,29,1,0,
  	0,0,0,31,1,0,0,0,0,33,1,0,0,0,0,35,1,0,0,0,0,37,1,0,0,0,1,39,1,0,0,0,
  	3,48,1,0,0,0,5,50,1,0,0,0,7,52,1,0,0,0,9,54,1,0,0,0,11,62,1,0,0,0,13,
  	70,1,0,0,0,15,72,1,0,0,0,17,74,1,0,0,0,19,79,1,0,0,0,21,81,1,0,0,0,23,
  	86,1,0,0,0,25,88,1,0,0,0,27,90,1,0,0,0,29,93,1,0,0,0,31,97,1,0,0,0,33,
  	101,1,0,0,0,35,111,1,0,0,0,37,116,1,0,0,0,39,40,5,102,0,0,40,41,5,117,
  	0,0,41,42,5,110,0,0,42,43,5,99,0,0,43,44,5,116,0,0,44,45,5,105,0,0,45,
  	46,5,111,0,0,46,47,5,110,0,0,47,2,1,0,0,0,48,49,5,123,0,0,49,4,1,0,0,
  	0,50,51,5,59,0,0,51,6,1,0,0,0,52,53,5,125,0,0,53,8,1,0,0,0,54,55,5,105,
  	0,0,55,56,5,110,0,0,56,57,5,112,0,0,57,58,5,117,0,0,58,59,5,116,0,0,59,
  	60,5,115,0,0,60,61,5,58,0,0,61,10,1,0,0,0,62,63,5,111,0,0,63,64,5,117,
  	0,0,64,65,5,116,0,0,65,66,5,112,0,0,66,67,5,117,0,0,67,68,5,116,0,0,68,
  	69,5,58,0,0,69,12,1,0,0,0,70,71,5,44,0,0,71,14,1,0,0,0,72,73,5,40,0,0,
  	73,16,1,0,0,0,74,75,5,114,0,0,75,76,5,101,0,0,76,77,5,108,0,0,77,78,5,
  	121,0,0,78,18,1,0,0,0,79,80,5,41,0,0,80,20,1,0,0,0,81,82,5,110,0,0,82,
  	83,5,111,0,0,83,84,5,110,0,0,84,85,5,101,0,0,85,22,1,0,0,0,86,87,5,60,
  	0,0,87,24,1,0,0,0,88,89,5,62,0,0,89,26,1,0,0,0,90,91,5,61,0,0,91,92,5,
  	61,0,0,92,28,1,0,0,0,93,94,5,33,0,0,94,95,5,61,0,0,95,30,1,0,0,0,96,98,
  	7,0,0,0,97,96,1,0,0,0,98,99,1,0,0,0,99,97,1,0,0,0,99,100,1,0,0,0,100,
  	32,1,0,0,0,101,105,5,34,0,0,102,104,8,1,0,0,103,102,1,0,0,0,104,107,1,
  	0,0,0,105,103,1,0,0,0,105,106,1,0,0,0,106,108,1,0,0,0,107,105,1,0,0,0,
  	108,109,5,34,0,0,109,34,1,0,0,0,110,112,7,2,0,0,111,110,1,0,0,0,112,113,
  	1,0,0,0,113,111,1,0,0,0,113,114,1,0,0,0,114,36,1,0,0,0,115,117,7,3,0,
  	0,116,115,1,0,0,0,117,118,1,0,0,0,118,116,1,0,0,0,118,119,1,0,0,0,119,
  	120,1,0,0,0,120,121,6,18,0,0,121,38,1,0,0,0,5,0,99,105,113,118,1,6,0,
  	0
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  parallactlexerLexerStaticData = staticData.release();
}

}

parallactLexer::parallactLexer(CharStream *input) : Lexer(input) {
  parallactLexer::initialize();
  _interpreter = new atn::LexerATNSimulator(this, *parallactlexerLexerStaticData->atn, parallactlexerLexerStaticData->decisionToDFA, parallactlexerLexerStaticData->sharedContextCache);
}

parallactLexer::~parallactLexer() {
  delete _interpreter;
}

std::string parallactLexer::getGrammarFileName() const {
  return "parallact.g4";
}

const std::vector<std::string>& parallactLexer::getRuleNames() const {
  return parallactlexerLexerStaticData->ruleNames;
}

const std::vector<std::string>& parallactLexer::getChannelNames() const {
  return parallactlexerLexerStaticData->channelNames;
}

const std::vector<std::string>& parallactLexer::getModeNames() const {
  return parallactlexerLexerStaticData->modeNames;
}

const dfa::Vocabulary& parallactLexer::getVocabulary() const {
  return parallactlexerLexerStaticData->vocabulary;
}

antlr4::atn::SerializedATNView parallactLexer::getSerializedATN() const {
  return parallactlexerLexerStaticData->serializedATN;
}

const atn::ATN& parallactLexer::getATN() const {
  return *parallactlexerLexerStaticData->atn;
}




void parallactLexer::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  parallactlexerLexerInitialize();
#else
  ::antlr4::internal::call_once(parallactlexerLexerOnceFlag, parallactlexerLexerInitialize);
#endif
}
