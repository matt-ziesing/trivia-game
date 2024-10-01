// creating a header guard for the CategoryPicker class
#ifndef CATEGORYPICKER_H
#define CATEGORYPICKER_H

// including the QuestionDisplay class for the CategoryPicker class to inherit from
#include "QuestionDisplay.h"

// creating the CategoryPicker class that inherits from QuestionDisplay class
class CategoryPicker : public QuestionDisplay {
private:
    int chosenCategory; // represents the numerical value of the chosen category

public:
    CategoryPicker(); // default constructor for the CategoryPicker class

    void categoryChoice(); // allows the user to choose which category they would like their questions from
    int get_Category(); // returns the numerical value of the chosen category
    void set_Category(int category); // sets the numerical value of the chosen category
} ;

#endif