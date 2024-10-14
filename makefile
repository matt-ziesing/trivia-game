h-test:	History.cpp CategoryPicker.cpp QuestionDisplay.cpp historyTest-main.cpp
	g++ -Wall -o ht History.cpp CategoryPicker.cpp QuestionDisplay.cpp historyTest-main.cpp

vg-test: History.cpp VideoGames.cpp CategoryPicker.cpp QuestionDisplay.cpp vidgameTest-main.cpp
	g++ -Wall -o vdt VideoGames.cpp History.cpp CategoryPicker.cpp QuestionDisplay.cpp vidgameTest-main.cpp

gk-test: History.cpp VideoGames.cpp GeneralKnowledge.cpp CategoryPicker.cpp QuestionDisplay.cpp genKnowledgeTest-main.cpp
	g++ -Wall -o gkt History.cpp VideoGames.cpp GeneralKnowledge.cpp CategoryPicker.cpp QuestionDisplay.cpp genKnowledgeTest-main.cpp

sp-test: Sports.cpp History.cpp VideoGames.cpp GeneralKnowledge.cpp CategoryPicker.cpp QuestionDisplay.cpp sportsTest-main.cpp
	g++ -Wall -o spt Sports.cpp History.cpp VideoGames.cpp GeneralKnowledge.cpp CategoryPicker.cpp QuestionDisplay.cpp sportsTest-main.cpp

m-test: Music.cpp Sports.cpp History.cpp VideoGames.cpp GeneralKnowledge.cpp CategoryPicker.cpp QuestionDisplay.cpp musicTest-main.cpp
	g++ -Wall -o mt Music.cpp Sports.cpp History.cpp VideoGames.cpp GeneralKnowledge.cpp CategoryPicker.cpp QuestionDisplay.cpp musicTest-main.cpp

sc-test: Science.cpp Music.cpp Sports.cpp History.cpp VideoGames.cpp GeneralKnowledge.cpp CategoryPicker.cpp QuestionDisplay.cpp scienceTest-main.cpp
	g++ -Wall -o sct Science.cpp Music.cpp Sports.cpp History.cpp VideoGames.cpp GeneralKnowledge.cpp CategoryPicker.cpp QuestionDisplay.cpp scienceTest-main.cpp

ans-test: History.cpp CategoryPicker.cpp QuestionDisplay.cpp CorrectTotal.cpp AnswerCheck.cpp testing.cpp
	g++ -Wall -o ans History.cpp CategoryPicker.cpp QuestionDisplay.cpp CorrectTotal.cpp AnswerCheck.cpp testing.cpp

l-test: History.cpp CategoryPicker.cpp QuestionDisplay.cpp CorrectTotal.cpp AnswerCheck.cpp LeaderScores.cpp LeaderBoard.cpp testing.cpp
	g++ -Wall -o lt History.cpp CategoryPicker.cpp QuestionDisplay.cpp CorrectTotal.cpp AnswerCheck.cpp LeaderScores.cpp LeaderBoard.cpp testing.cpp

replay: GameReset.cpp History.cpp CategoryPicker.cpp QuestionDisplay.cpp CorrectTotal.cpp AnswerCheck.cpp LeaderScores.cpp LeaderBoard.cpp testing.cpp
	g++ -Wall -o r GameReset.cpp History.cpp CategoryPicker.cpp QuestionDisplay.cpp CorrectTotal.cpp AnswerCheck.cpp LeaderScores.cpp LeaderBoard.cpp testing.cpp

full: QuestionDisplay.cpp CategoryPicker.cpp History.cpp VideoGames.cpp GeneralKnowledge.cpp Sports.cpp Music.cpp Science.cpp CorrectTotal.cpp AnswerCheck.cpp LeaderScores.cpp LeaderBoard.cpp GameReset.cpp runscript.cpp
	g++ -Wall -o game QuestionDisplay.cpp CategoryPicker.cpp History.cpp VideoGames.cpp GeneralKnowledge.cpp Sports.cpp Music.cpp Science.cpp CorrectTotal.cpp AnswerCheck.cpp LeaderScores.cpp LeaderBoard.cpp GameReset.cpp runscript.cpp

debug: categoryPickerUnitTests.h questionDisplayUnitTests.h CategoryPicker.cpp QuestionDisplay.cpp unitTesting-main.cpp
	g++ -Wall -o debug categoryPickerUnitTests.h questionDisplayUnitTests.h CategoryPicker.cpp QuestionDisplay.cpp unitTesting-main.cpp