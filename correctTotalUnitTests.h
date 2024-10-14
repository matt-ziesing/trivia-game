#include "CorrectTotal.h"
#include "QuestionDisplay.h"
#include "CategoryPicker.h"
#include <iostream>
using namespace std;

class CorrectTotalUnitTests {
public:
    void runCorrectTotalTests() {
        initializeTests();
        settersTest();
        correctCheckTests();
    }

private:
    void initializeTests() {
        CorrectTotal userTotal;
        if (userTotal.get_Count() != 0) {
            cout << "userTotal Initialize Test failed!" << endl;
        } else {
            cout << "userTotal Initialize test passed." << endl;
        }
    }

    void settersTest() {
        CorrectTotal userTotal;
        userTotal.set_Count(100100);
        if (userTotal.get_Count() != 100100) {
            cout << "userTotal setter test 1 failed!" << endl;
        } else {
            cout << "userTotal setter test 1 passed." << endl;
        }

        userTotal.set_Count(-190);
        if (userTotal.get_Count() != -190) {
            cout << "userTotal setter test 2 failed!" << endl;
        } else {
            cout << "userTotal setter test 2 passed." << endl;
        }

        userTotal.set_Count(1234567890);
        if (userTotal.get_Count() != 1234567890) {
            cout << "userTotal setter test 3 failed!" << endl;
        } else {
            cout << "userTotal setter test 3 passed." << endl;
        }

        userTotal.set_Count(-1234567890);
        if (userTotal.get_Count() != -1234567890) {
            cout << "userTotal setter test 4 failed!" << endl;
        } else {
            cout << "userTotal setter test 4 passed." << endl;
        }
    }

    void correctCheckTests() {
        CorrectTotal userTotal;
        QuestionDisplay* q = new CategoryPicker;
        if (userTotal.correctCheck(q) != false) {
            cout << "Default virtual function state in userTotal test failed!" << endl;
        } else {
            cout << "Default virtual function state in userTotal test passed." << endl;
        }
    }
} ;