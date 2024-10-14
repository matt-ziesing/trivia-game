#ifndef SPORTS_H
#define SPORTS_H

#include "UserChoices.h"

class Sports : public UserChoices {
private:
    std::string* questions; // represents all questions contained in the class
    int max_questions; // represents the current max number of questions

public:
    Sports(); // default constructor for the history class

    void questionDisplay(); // displays the question to the command window via the abstract class interface
    void questionDelete(); // deletes a question from the questions array

    std::string* get_Questions(); // returns the array of questions
    int get_maxQuestions(); // returns the current max number of questions
    void set_Questions(std::string* questions); // sets the array of questions to be the given string array
    void set_maxQuestions(int max_questions); // sets the current max number of questions to be the given int

    ~Sports(); // default destructor for the history class
} ;

#endif