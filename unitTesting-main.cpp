#include "categoryPickerUnitTests.h"
#include "questionDisplayUnitTests.h"
#include "correctTotalUnitTests.h"
#include "LeaderBoardUnitTests.h"

int main() {
    //CategoryUnitTests categoryUnitTests;
    //questionUnitTests questionUnitTests;
    //CorrectTotalUnitTests correctTotalUnitTests;
    LeaderboardUnitTest leaderBoardUnitTests;

    //categoryUnitTests.runCategoryPickerTests();
    //questionUnitTests.runQuestionDisplayTests();
    //correctTotalUnitTests.runCorrectTotalTests();
    leaderBoardUnitTests.runLeaderboardTests();

    return 0;
}