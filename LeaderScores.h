#ifndef LEADERSCORES_H
#define LEADERSCORES_H

#include <iostream>

class LeaderScores {
protected:
    // encapsulated data to contain the name and score of the player on the leaderboard
    std::string name;
    int score;

public:
    LeaderScores();
    LeaderScores(std::string name, int score); // sets the encapsulated data to be the function inputs

    // necessary setters and getters for the encapsulated data contained within the class
    std::string getLeaderName();
    void setLeaderName(std::string name);
    void setLeaderScore(int score);
    int getLeaderScore();
} ;

#endif