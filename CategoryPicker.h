// creating a header guard for the CategoryPicker class
#ifndef CATEGORYPICKER_H
#define CATEGORYPICKER_H

// including the QuestionDisplay class for the CategoryPicker class to inherit from
#include "QuestionDisplay.h"

// creating the CategoryPicker class that inherits from QuestionDisplay class
class CategoryPicker : public QuestionDisplay {
private:
    int chosenCategory; // represents the numerical value of the chosen category
    int chosenQuestion; // represents the numerical value of the chosen question
    int historyLength; // represents the amount of history questions
    int videoGamesLength; // represents the amount of video games questions
    int generalKnowledgeLength; // represents the amount of general knowledge questions
    int sportsLength; // represents the amount of sports questions
    int musicLength; // represents the amount of music questions
    int scienceLength; // represents the amount of science questions

public:
    CategoryPicker(); // default constructor for the CategoryPicker class

    void categoryChoice(); // allows the user to choose which category they would like their questions form
    void questionSelect(); // selects a random question from the given categories questions, in numerical form
    
    int get_chosenCategory(); // returns the numerical value of the chosen category
    void set_chosenCategory(int category); // sets the numerical value of the chosen category
    int get_chosenQuestion(); // returns the numerical value of the chosen question
    void set_chosenQuestion(int question); // sets the numerical value of the chosen question
} ;

#endif