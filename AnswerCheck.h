#ifndef ANSWERCHECK_H
#define ANSWERCHECK_H

#include "CorrectTotal.h"

class AnswerCheck : public CorrectTotal {
private:
    std::string* correctHistoryAnswers;
    std::string* correctVideoGameAnswers;
    std::string* correctGeneralKnowledgeAnswers;
    std::string* correctSportsAnswers;
    std::string* correctMusicAnswers;
    std::string* correctScienceAnswers;

    int historyAnswerLength;
    int videoGameAnswerLength;
    int generalKnowledgeAnswerLength;
    int sportAnswerLength;
    int musicAnswerLength;
    int scienceAnswerLength;

public:
    AnswerCheck();

    bool correctCheck(QuestionDisplay* question, CategoryPicker user);

    void set_correctHistoryAnswers(std::string* answers);
    void set_correctVideoGameAnswers(std::string* answers);
    void set_correctGeneralKnowledgeAnswers(std::string* answers);
    void set_correctSportsAnswers(std::string* answers);
    void set_correctMusicAnswers(std::string* answers);
    void set_correctScienceAnswers(std::string* answers);

    ~AnswerCheck();
} ;

#endif