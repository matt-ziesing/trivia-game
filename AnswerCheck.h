#ifndef ANSWERCHECK_H
#define ANSWERCHECK_H

#include "CorrectTotal.h"

class AnswerCheck : public CorrectTotal {
private:
    std::string* correctAnswers;

public:
    AnswerCheck();

    bool correctCheck(QuestionDisplay* question);

    std::string* get_correctAnswers();
    void set_correctAnswers(std::string* correctAnswers);

    ~AnswerCheck();
} ;

#endif