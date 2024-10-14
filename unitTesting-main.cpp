#include "categoryPickerUnitTests.h"
#include "questionDisplayUnitTests.h"
#include "correctTotalUnitTests.h"
#include "LeaderBoardUnitTests.h"
#include "GameResetUnitTests.h"

int main() {
    //CategoryUnitTests categoryUnitTests;
    //questionUnitTests questionUnitTests;
    //CorrectTotalUnitTests correctTotalUnitTests;
    //LeaderboardUnitTest leaderBoardUnitTests;
    GameResetUnitTest gameResetUnitTest;

    //categoryUnitTests.runCategoryPickerTests();
    //questionUnitTests.runQuestionDisplayTests();
    //correctTotalUnitTests.runCorrectTotalTests();
    //leaderBoardUnitTests.runLeaderboardTests();
    gameResetUnitTest.runGameResetTests();

    return 0;
}