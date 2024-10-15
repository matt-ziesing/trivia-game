#include "LeaderBoard.h"

#include <iostream>
using namespace std;

// allocates space to contain the leaderboard array
LeaderBoard::LeaderBoard() {
    leaderArray = new LeaderScores[3]{};
}

void LeaderBoard::updateLeaderBoard(LeaderScores personScore) {
        // keeps the old scores for the new score to compare to
        LeaderScores oldFirst = firstPlace;
        LeaderScores oldSecond = secondPlace;
        LeaderScores oldThird = thirdPlace;


    if (personScore.getLeaderScore() > firstPlace.getLeaderScore()) {
        cout << "You have achieved a new high score!" << endl
             << "Please enter your name." << endl;
        string name;
        getline(cin, name);
        personScore.setLeaderName(name);

        // shuffles everything downwards to allow a new first place
        firstPlace = personScore;
        secondPlace = oldFirst;
        thirdPlace = oldSecond;
        leaderArray[0] = personScore;
        leaderArray[1] = oldFirst;
        leaderArray[2] = oldSecond;

    } else if (personScore.getLeaderScore() > secondPlace.getLeaderScore()) {
        cout << "You have achieved a new high score!" << endl
             << "Please enter your name with no spaces." << endl;
        string name;
        getline(cin, name);
        personScore.setLeaderName(name);

        // shuffles everything downwards to allow for a new second place
        secondPlace = personScore;
        thirdPlace = oldSecond;
        leaderArray[1] = personScore;
        leaderArray[2] = oldSecond;

    } else if (personScore.getLeaderScore() > thirdPlace.getLeaderScore()) {
        cout << "You have achieved a new high score!" << endl
             << "Please enter your name." << endl;
        string name;
        getline(cin, name);
        personScore.setLeaderName(name);

        // sets the new score to be third place
        thirdPlace = personScore;
        leaderArray[2] = personScore;
    }
}

void LeaderBoard::establishLeaders() {
    char first[99];
    char second[99];
    char third[99];
    int first_val;
    int second_val;
    int third_val;

    // reads in from the file "LeaderValues.txt" and stores their corresponding name and score
    LeaderValues = fopen("LeaderValues.txt", "r");
    fscanf(LeaderValues, "%s %d", first, &first_val);
    fscanf(LeaderValues, "\n%s %d", second, &second_val);
    fscanf(LeaderValues, "\n\n%s %d", third, &third_val);
    fclose(LeaderValues);

    string first_string(first);
    string second_string(second);
    string third_string(third);

    // sets the leaderboard to be the three best locally stored values
    setFirstPlace(first_string, first_val);
    setSecondPlace(second_string, second_val);
    setThirdPlace(third_string, third_val);
    leaderArray[0] = LeaderScores(first_string, first_val);
    leaderArray[1] = LeaderScores(second_string, second_val);
    leaderArray[2] = LeaderScores(third_string, third_val);
}

void LeaderBoard::saveLeaders() {
    LeaderValues = fopen("LeaderValues.txt", "w");
    string first = leaderArray[0].getLeaderName();
    string second = leaderArray[1].getLeaderName();
    string third = leaderArray[2].getLeaderName();

    const char* firstName = first.c_str();
    const char* secondName = second.c_str();
    const char* thirdName = third.c_str();
    
    // writes the three best scores in the leaderboard into the local file
    fprintf(LeaderValues, "%s %d\n", firstName, leaderArray[0].getLeaderScore());
    fprintf(LeaderValues, "%s %d\n", secondName, leaderArray[1].getLeaderScore());
    fprintf(LeaderValues, "%s %d", thirdName, leaderArray[2].getLeaderScore());
    fclose(LeaderValues);
}

LeaderScores LeaderBoard::getFirstPlace() {
    return firstPlace;
}

LeaderScores LeaderBoard::getSecondPlace() {
    return secondPlace;
}

LeaderScores LeaderBoard::getThirdPlace() {
    return thirdPlace;
}

void LeaderBoard::setFirstPlace(std::string name, int score) {
    firstPlace.setLeaderName(name);
    firstPlace.setLeaderScore(score);
}

void LeaderBoard::setSecondPlace(std::string name, int score) {
    secondPlace.setLeaderName(name);
    secondPlace.setLeaderScore(score);
}

void LeaderBoard::setThirdPlace(std::string name, int score) {
    thirdPlace.setLeaderName(name);
    thirdPlace.setLeaderScore(score);
}

LeaderBoard::~LeaderBoard() {
    delete[] leaderArray;
}

LeaderScores* LeaderBoard::getLeaderArray() {
    return leaderArray;
}