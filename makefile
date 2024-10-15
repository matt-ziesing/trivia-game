CXX = g++

CXXFLAGS = -std=c++11 -Wall -Wextra

GAMESRCS = QuestionDisplay.cpp UserChoices.cpp History.cpp VideoGames.cpp GeneralKnowledge.cpp Sports.cpp Music.cpp Science.cpp CorrectTotal.cpp AnswerCheck.cpp LeaderScores.cpp LeaderBoard.cpp GameReset.cpp runscript.cpp

.PHONY: full

full: game
		./game
		@make -s clean

.PHONY: debug

debug: debug
		./debug

game: $(GAMESRCS)
	@$(CXX) $(CXXFLAGS) -o game $(GAMESRCS)

.PHONY: clean

clean:
	@rm -f game