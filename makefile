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