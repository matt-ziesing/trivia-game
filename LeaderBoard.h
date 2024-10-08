#ifndef LEADERBOARD_H
#define LEADERBOARD_H

#include "LeaderScores.h"

class LeaderBoard : public LeaderScores{
private:
    LeaderScores firstPlace;
    LeaderScores secondPlace;
    LeaderScores thirdPlace;

    FILE* LeaderValues;
    LeaderScores* leaderArray;

public:
    LeaderBoard();

    void updateLeaderBoard(LeaderScores personScore);
    void establishLeaders();
    void saveLeaders();

    LeaderScores getFirstPlace();
    LeaderScores getSecondPlace();
    LeaderScores getThirdPlace();
    void setFirstPlace(std::string name, int score);
    void setSecondPlace(std::string name, int score);
    void setThirdPlace(std::string name, int score);
    LeaderScores* getLeaderArray();

    ~LeaderBoard();
} ;

#endif