#include "UserChoicesUnitTests.h"
#include "QuestionDisplayUnitTests.h"
#include "CorrectTotalUnitTests.h"
#include "LeaderBoardUnitTests.h"
#include "GameResetUnitTests.h"
#include "AnswerCheckUnitTests.h"
#include "TriviaCategoryUnitTests.h"

int main() {
    LeaderBoard leaderboard;
    leaderboard.establishLeaders();
    LeaderScores* leaderArray = leaderboard.getLeaderArray();

    LeaderBoard alternateLeaderboard;
    alternateLeaderboard.saveLeaders();

    CategoryUnitTests categoryUnitTests;
    questionUnitTests questionUnitTests;
    CorrectTotalUnitTests correctTotalUnitTests;
    LeaderboardUnitTest leaderBoardUnitTests;
    GameResetUnitTest gameResetUnitTest;
    AnswerCheckUnitTest answerCheckUnitTest;
    TriviaCategoryUnitTest triviaTest;

    leaderBoardUnitTests.runLeaderboardTests();
    sleep(4);
    system("clear");
    categoryUnitTests.runCategoryPickerTests();
    questionUnitTests.runQuestionDisplayTests();
    sleep(4);
    system("clear");
    correctTotalUnitTests.runCorrectTotalTests();
    sleep(4);
    system("clear");
    gameResetUnitTest.runGameResetTests();
    sleep(4);
    system("clear");
    answerCheckUnitTest.runAnswerCheckTests();
    sleep(4);
    system("clear");
    triviaTest.runTests();

    leaderboard.setFirstPlace(leaderArray[0].getLeaderName(), leaderArray[0].getLeaderScore());
    leaderboard.setSecondPlace(leaderArray[1].getLeaderName(), leaderArray[1].getLeaderScore());
    leaderboard.setThirdPlace(leaderArray[2].getLeaderName(), leaderArray[2].getLeaderScore());
    leaderboard.saveLeaders();

    return 0;
}