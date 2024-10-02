// creating a header protection for the class
#ifndef QUESTIONDISPLAY_H
#define QUESTIONDISPLAY_H

#include <iostream>

// constructing the QuestionDisplay class
class QuestionDisplay {
private:
    std::string userAnswer; // represents the user's given answer

public:
    QuestionDisplay(); // default constructor for the QuestionDisplay class

    virtual void questionDisplay(int category, int question) = 0; 
    // abstract class to create an interface to display the different questions
    
    std::string get_Answer(); // returns the user's given answer
    void set_Answer(std::string answer); // sets the inputted answer as the user's given answer
} ;

#endif