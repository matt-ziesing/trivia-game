// creating a header guard for the CategoryPicker class
#ifndef CATEGORYPICKER_H
#define CATEGORYPICKER_H

// including the QuestionDisplay class for the CategoryPicker class to inherit from
#include "QuestionDisplay.h"

// creating the CategoryPicker class that inherits from QuestionDisplay class
class CategoryPicker : public QuestionDisplay {
private:
    std::string chosenCategory; // represents the numerical value of the chosen category
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
    void questionDisplay();
    bool inputValidityCheck(); 
    // checks whether what the user enters is strictly a number, and doesn't contain letters
    
    std::string get_chosenCategory(); // returns the numerical value of the chosen category
    void set_chosenCategory(std::string category); // sets the numerical value of the chosen category
    int get_chosenQuestion(); // returns the numerical value of the chosen question
    void set_chosenQuestion(int question); // sets the numerical value of the chosen question

    void set_historyLength(int historyLength); // sets the int representing the history length to the given int
    void set_videoGameLength(int videoGameLength); 
    // sets the int representing the video game length to the given int
    void set_generalKnowledgeLength(int generalKnowledgeLength);
    // sets the int representing the general knowledge length to the given int
    void set_sportsLength(int sportsLength); // sets the int representing the sports length to the given int
    void set_musicLength(int musicLength); // sets the int representing the music length to the given int
    void set_scienceLength(int scienceLength); // sets the int representing the science length to the given int
    int get_historyLength(); // gets the int representing the history length
    int get_videoGameLength(); // gets the int representing the video game length
    int get_generalKnowledgeLength(); // gets the int representing the general knowledge length
    int get_sportsLength(); // gets the int representing the sports length
    int get_musicLength(); // gets the int representing the music length
    int get_scienceLength(); // gets the int representing the science length
} ;

#endif