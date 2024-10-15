CXX = g++

CXXFLAGS = -std=c++11 -Wall -Wextra

GAMESRCS = QuestionDisplay.cpp UserChoices.cpp History.cpp VideoGames.cpp GeneralKnowledge.cpp Sports.cpp Music.cpp Science.cpp CorrectTotal.cpp AnswerCheck.cpp LeaderScores.cpp LeaderBoard.cpp GameReset.cpp runscript.cpp

DEBUGSRCS = QuestionDisplay.cpp UserChoices.cpp History.cpp VideoGames.cpp GeneralKnowledge.cpp Sports.cpp Music.cpp Science.cpp CorrectTotal.cpp AnswerCheck.cpp LeaderScores.cpp LeaderBoard.cpp GameReset.cpp AnswerCheckUnitTests.h CorrectTotalUnitTests.h GameResetUnitTests.h LeaderBoardUnitTests.h QuestionDisplayUnitTests.h TriviaCategoryUnitTests.h UserChoicesUnitTests.h debugscript.cpp

.PHONY: full

full: game
		./game
		@make -s cleanGame

.PHONY: debug

debug: d
		./d
		@make -s cleanDebug

game: $(GAMESRCS)
	@$(CXX) $(CXXFLAGS) -o game $(GAMESRCS)

d: $(DEBUGSRCS)
	@$(CXX) $(CXXFLAGS) -o d $(DEBUGSRCS)

.PHONY: cleanGame

cleanGame:
	@rm -f game

.PHONY: cleanDebug

cleanDebug:
	@rm -f d