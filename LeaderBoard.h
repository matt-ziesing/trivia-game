#ifndef LEADERBOARD_H
#define LEADERBOARD_H

#include "LeaderScores.h"

class LeaderBoard : public LeaderScores{
private:
    // these are objects that contain the best three scores of all time, and their assigned names
    LeaderScores firstPlace;
    LeaderScores secondPlace;
    LeaderScores thirdPlace;

    // contains a file that states what the best scores of all time are locally
    FILE* LeaderValues;

    // array that contains the best three scores of all time
    LeaderScores* leaderArray;

public:
    LeaderBoard(); // default constructor for the class

    // checks to see if player score should be put on leaderboard and updates it
    void updateLeaderBoard(LeaderScores personScore);

    // establishes the best three scores of all time locally from the file "LeaderValues.txt"
    void establishLeaders();

    // saves the current best three scores of all time into the file called "LeaderValues.txt"
    void saveLeaders();

    // getters and setters for the relevant data encapsulated by the class that are needed for the system
    LeaderScores getFirstPlace();
    LeaderScores getSecondPlace();
    LeaderScores getThirdPlace();
    void setFirstPlace(std::string name, int score);
    void setSecondPlace(std::string name, int score);
    void setThirdPlace(std::string name, int score);
    LeaderScores* getLeaderArray();

    // default destructor to deallocate the memory used in the class
    ~LeaderBoard();
} ;

#endif