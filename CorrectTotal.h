#ifndef CORRECTTOTAL_H
#define CORRECTTOTAL_H

#include "QuestionDisplay.h"

class CorrectTotal {
private:
    int totalCorrectCount; // represents the player's total correct answer count

public:
    CorrectTotal(); // default constructor for the class

    virtual void correctCheck(QuestionDisplay* question); 
    // virtual function that checks whether the player's answer is correct

    int get_Count(); // returns the players total correct count
    void set_Count(int totalCorrectCount); // sets the player's total correct count to the given int
} ;

#endif