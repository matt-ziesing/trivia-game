#include "categoryPickerUnitTests.h"
#include "questionDisplayUnitTests.h"

int main() {
    CategoryUnitTests categoryUnitTests;
    questionUnitTests questionUnitTests;

    //categoryUnitTests.runCategoryPickerTests();
    questionUnitTests.runQuestionDisplayTests();

    return 0;
}