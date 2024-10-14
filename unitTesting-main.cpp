#include "categoryPickerUnitTests.h"
#include "questionDisplayUnitTests.h"
#include "correctTotalUnitTests.h"
#include "LeaderBoardUnitTests.h"
#include "GameResetUnitTests.h"
#include "AnswerCheckUnitTests.h"

int main() {
    //CategoryUnitTests categoryUnitTests;
    //questionUnitTests questionUnitTests;
    //CorrectTotalUnitTests correctTotalUnitTests;
    //LeaderboardUnitTest leaderBoardUnitTests;
    //GameResetUnitTest gameResetUnitTest;
    AnswerCheckUnitTest answerCheckUnitTest;

    //categoryUnitTests.runCategoryPickerTests();
    //questionUnitTests.runQuestionDisplayTests();
    //correctTotalUnitTests.runCorrectTotalTests();
    //leaderBoardUnitTests.runLeaderboardTests();
    //gameResetUnitTest.runGameResetTests();
    answerCheckUnitTest.runAnswerCheckTests();

    return 0;
}