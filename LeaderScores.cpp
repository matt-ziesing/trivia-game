#include "LeaderScores.h"
#include <iostream>

using namespace std;

LeaderScores::LeaderScores() {
    name = "NULL";
    score = 0;
}

LeaderScores::LeaderScores(string name, int score) {
    LeaderScores::name = name;
    LeaderScores::score = score;
}

string LeaderScores::getLeaderName() {
    return name;
}

int LeaderScores::getLeaderScore() {
    return score;
}

void LeaderScores::setLeaderName(string name) {
    LeaderScores::name = name;
}

void LeaderScores::setLeaderScore(int score) {
    LeaderScores::score = score;
}