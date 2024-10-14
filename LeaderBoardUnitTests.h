#include "LeaderBoard.h"
#include "LeaderScores.h"
#include <iostream>
using namespace std;

class LeaderboardUnitTest {
public:
    void runLeaderboardTests() {
        initialiseLeaderScores();
        leaderscoresSettersTest();

        leaderboardEstablishTest();
        updateLeaderBoardTest();
        saveLeadersTest();
    }
 
private:
    void initialiseLeaderScores() {
        LeaderScores leaderscore;
        if (leaderscore.getLeaderName() != "NULL") {
            cout << "leaderscores name initialise test failed!" << endl;
        } else {
            cout << "leaderscores name initialise test passed." << endl;
        }

        if (leaderscore.getLeaderScore() != 0) {
            cout << "leaderscores score initialise test failed!" << endl;
        } else {
            cout << "leaderscores score initialise test passed." << endl;
        }
    }

    void leaderscoresSettersTest() {
        LeaderScores leaderscores;
        leaderscores.setLeaderName("ABCDEFG");
        if (leaderscores.getLeaderName() != "ABCDEFG") {
            cout << "leaderscores name setters test 1 failed!" << endl;
        } else {
            cout << "leaderscores name setters test 1 passed." << endl;
        }

        leaderscores.setLeaderName("supercalifragilisticexpealadosious");
        if (leaderscores.getLeaderName() != "supercalifragilisticexpealadosious") {
            cout << "leaderscores name setters test 2 failed!" << endl;
        } else {
            cout << "leaderscores name setters test 2 passed." << endl;
        }

        leaderscores.setLeaderName(" ");
        if (leaderscores.getLeaderName() != " ") {
            cout << "leaderscores name setters test 3 failed!" << endl;
        } else {
            cout << "leaderscores name setters test 3 passed." << endl;
        }

        leaderscores.setLeaderScore(109);
        if (leaderscores.getLeaderScore() != 109) {
            cout << "leaderscores score setters test 1 failed!" << endl;
        } else {
            cout << "leaderscores score setter test 1 passed." << endl;
        }

        leaderscores.setLeaderScore(0);
        if (leaderscores.getLeaderScore() != 0) {
            cout << "leaderscores score setters test 2 failed!" << endl;
        } else {
            cout << "leaderscores score setter test 2 passed." << endl;
        }

        leaderscores.setLeaderScore(1234567890);
        if (leaderscores.getLeaderScore() != 1234567890) {
            cout << "leaderscores score setters test 3 failed!" << endl;
        } else {
            cout << "leaderscores score setter test 3 passed." << endl;
        }

        leaderscores.setLeaderScore(-1234567890);
        if (leaderscores.getLeaderScore() != -1234567890) {
            cout << "leaderscores score setters test 4 failed!" << endl;
        } else {
            cout << "leaderscores score setter test 4 passed." << endl;
        }
    }

    void leaderboardEstablishTest() {
        LeaderBoard leaderboard;
        leaderboard.establishLeaders();
        LeaderScores* leaderArray = leaderboard.getLeaderArray();
        for (int i = 0 ; i < 3; i++) {
            if (leaderArray[i].getLeaderName() != "NULL" && leaderArray[i].getLeaderScore() != 0) {
                cout << "establish leaders test failed in leader position " << i+1 << endl;
            } else {
                cout << "establish leaders test passed in leader position " << i+1 << endl;
            }
        }
    }

    void updateLeaderBoardTest() {
        LeaderBoard leaderboard;
        LeaderScores player1("test", 10);
        leaderboard.updateLeaderBoard(player1);
        // when prompted in the update leaderboard menu, the user entry is test
        LeaderScores first = leaderboard.getFirstPlace();
        if (first.getLeaderName() != "test" && first.getLeaderScore() != 10) {
            cout << "Leaderboard position 1 update test failed!" << endl;
        } else {
            cout << "Leaderboard position 1 update test passed." << endl;
        }
        leaderboard.saveLeaders();

        LeaderScores player2("dhjadkjsajkdakdnkjsan", 9);
        leaderboard.updateLeaderBoard(player2);
        // when prompted in the update leaderboard menu, the user entry is dhjadkjsajkdakdnkjsan
        LeaderScores second = leaderboard.getSecondPlace();
        if (second.getLeaderName() != "dhjadkjsajkdakdnkjsan" && second.getLeaderScore() != 10) {
            cout << "Leaderboard position 2 update test failed!" << endl;
        } else {
            cout << "Leaderboard position 2 update test passed." << endl;
        }
        leaderboard.saveLeaders();

        LeaderScores player3("28391820380", 8);
        leaderboard.updateLeaderBoard(player3);
        // when prompted in the update leaderboard menu, the user entry is 28391820380
        LeaderScores third = leaderboard.getThirdPlace();
        if (third.getLeaderName() != "28391820380" && third.getLeaderScore() != 8) {
            cout << "Leaderboard position 3 update test failed!" << endl;
        } else {
            cout << "Leaderboard position 3 update test passed." << endl;
        }
        leaderboard.saveLeaders();
    }

    void saveLeadersTest() {
        FILE* LeaderValues;
        char first[99];
        char second[99];
        char third[99];
        int first_val;
        int second_val;
        int third_val;

        LeaderValues = fopen("LeaderValues.txt", "r");
        fscanf(LeaderValues, "%s %d", first, &first_val);
        fscanf(LeaderValues, "\n%s %d", second, &second_val);
        fscanf(LeaderValues, "\n\n%s %d", third, &third_val);

        fclose(LeaderValues);

        string first_string(first);
        string second_string(second);
        string third_string(third);

        if (first_string != "test" && first_val != 10) {
            cout << "save leaders test 1 failed!" << endl;
        } else {
            cout << "save leaders test 1 passed." << endl;
        }

        if (second_string != "dhjadkjsajkdakdnkjsan" && second_val != 9) {
            cout << "save leaders test 2 failed!" << endl;
        } else {
            cout << "save leaders test 2 passed." << endl;
        }

        if (third_string != "28391820380" && third_val != 8) {
            cout << "save leaders test 3 failed!" << endl;
        } else {
            cout << "save leaders test 3 passed." << endl;
        }     
    }
} ;