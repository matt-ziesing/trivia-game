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

    bool correctCheck(QuestionDisplay* question, UserChoices user);

    void set_correctHistoryAnswers(std::string* answers);
    void set_correctVideoGameAnswers(std::string* answers);
    void set_correctGeneralKnowledgeAnswers(std::string* answers);
    void set_correctSportsAnswers(std::string* answers);
    void set_correctMusicAnswers(std::string* answers);
    void set_correctScienceAnswers(std::string* answers);

    void set_historyAnswerLength(int historyLength);
    void set_videoGameAnswerLength(int videoGameLength);
    void set_generalKnowledgeAnswerLength(int generalKnowledgeLength);
    void set_sportsAnswerLength(int sportsLength);
    void set_musicAnswerLength(int musicLength);
    void set_scienceAnswerLength(int scienceLength);

    std::string* get_correctHistoryAnswers();
    std::string* get_correctVideoGameAnswers();
    std::string* get_correctGeneralKnowledgeAnswers();
    std::string* get_correctSportsAnswers();
    std::string* get_correctMusicAnswers();
    std::string* get_correctScienceAnswers();
    
    int get_historyAnswerLength();
    int get_videoGameAnswerLength();
    int get_generalKnowledgeAnswerLength();
    int get_sportsAnswerLength();
    int get_musicAnswerLength();
    int get_scienceAnswerLength();

    ~AnswerCheck();
} ;

#endif