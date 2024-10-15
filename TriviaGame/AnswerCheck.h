#ifndef ANSWERCHECK_H
#define ANSWERCHECK_H

#include "CorrectTotal.h"

class AnswerCheck : public CorrectTotal {
private:
    // the below string arrays contain each of the answers for every question used in the program
    std::string* correctHistoryAnswers;
    std::string* correctVideoGameAnswers;
    std::string* correctGeneralKnowledgeAnswers;
    std::string* correctSportsAnswers;
    std::string* correctMusicAnswers;
    std::string* correctScienceAnswers;

    // the below integers contain the current length of the answer arrays in the program
    int historyAnswerLength;
    int videoGameAnswerLength;
    int generalKnowledgeAnswerLength;
    int sportAnswerLength;
    int musicAnswerLength;
    int scienceAnswerLength;

public:
    AnswerCheck(); // default constructor for the class

    // uses dynamic polymorphism to overide the same virutal function in its parent class, CorrectTotal
    bool correctCheck(QuestionDisplay* question, UserChoices user);

    // list of setters for the different answer arrays
    void set_correctHistoryAnswers(std::string* answers);
    void set_correctVideoGameAnswers(std::string* answers);
    void set_correctGeneralKnowledgeAnswers(std::string* answers);
    void set_correctSportsAnswers(std::string* answers);
    void set_correctMusicAnswers(std::string* answers);
    void set_correctScienceAnswers(std::string* answers);

    // list of setters for the length of the different answer arrays
    void set_historyAnswerLength(int historyLength);
    void set_videoGameAnswerLength(int videoGameLength);
    void set_generalKnowledgeAnswerLength(int generalKnowledgeLength);
    void set_sportsAnswerLength(int sportsLength);
    void set_musicAnswerLength(int musicLength);
    void set_scienceAnswerLength(int scienceLength);

    // list of getters for the string arrays of the different answer arrays
    std::string* get_correctHistoryAnswers();
    std::string* get_correctVideoGameAnswers();
    std::string* get_correctGeneralKnowledgeAnswers();
    std::string* get_correctSportsAnswers();
    std::string* get_correctMusicAnswers();
    std::string* get_correctScienceAnswers();
    
    // list of getters for the integers representing the length of the different answer arrays
    int get_historyAnswerLength();
    int get_videoGameAnswerLength();
    int get_generalKnowledgeAnswerLength();
    int get_sportsAnswerLength();
    int get_musicAnswerLength();
    int get_scienceAnswerLength();

    // destructor for all of the dynamically allocated arrays used in the class
    ~AnswerCheck();
} ;

#endif