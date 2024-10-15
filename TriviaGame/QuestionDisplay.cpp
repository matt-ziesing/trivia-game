#include "QuestionDisplay.h"

QuestionDisplay::QuestionDisplay() {
    userAnswer = "NULL"; // setting the default answer to the question to be "NULL"
}

std::string QuestionDisplay::get_Answer() {
    return userAnswer; // returning the user's answer when called
}

void QuestionDisplay::set_Answer(std::string answer) {
    QuestionDisplay::userAnswer = answer; // sets the user's answer to be the given answer from the function
}