#ifndef LEADERSCORES_H
#define LEADERSCORES_H

#include <iostream>

class LeaderScores {
protected:
    std::string name;
    int score;

public:
    LeaderScores();
    LeaderScores(std::string name, int score);

    std::string getLeaderName();
    void setLeaderName(std::string name);
    void setLeaderScore(int score);
    int getLeaderScore();
} ;

#endif