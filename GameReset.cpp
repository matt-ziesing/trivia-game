#include "GameReset.h"

#include <iostream>

void GameReset::resetScore(CorrectTotal* playerTotal) {
    playerTotal->set_Count(0);
}

void GameReset::resetQuestions(History* history, CategoryPicker* user) {
    std::string* historyQuestions = new std::string[5]{};
    historyQuestions[0] = "When did Australia achieve Federation?";
    historyQuestions[1] = "In what year did WWII end?";
    historyQuestions[2] = "In which country was Albert Einstein Born In?";
    historyQuestions[3] = "Who was the first Emperor of Rome?";
    historyQuestions[4] = "How many United States presidents have been assassinated?";

    history->set_Questions(historyQuestions);
    history->set_maxQuestions(5);
    user->set_historyLength(5);
}