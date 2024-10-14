#include "QuestionDisplay.h"
#include "CategoryPicker.h"
#include <iostream>
using namespace std;

class questionUnitTests {
public:
    void runQuestionDisplayTests() {
        initializeTests();
        questionSettingTest();
    }

private:
    void initializeTests() {
        QuestionDisplay* q = new CategoryPicker;
        if (q->get_Answer() != "NULL") {
            cout << "Initialize Test Failed!" << endl;
        } else {
            cout << "Initialize test passed." << endl;
        }
    }

    void questionSettingTest() {
        QuestionDisplay* q = new CategoryPicker;
        q->set_Answer("ABCD");
        if (q->get_Answer() != "ABCD") {
            cout << "Question setting test 1 failed!" << endl;
        } else {
            cout << "Question setting test 1 passed." << endl;
        }

        q->set_Answer("-1783901290312o93");
        if (q->get_Answer() != "-1783901290312o93") {
            cout << "Question setting test 2 failed!" << endl;
        } else {
            cout << "Question setting test 2 passed." << endl;
        }
        
        q->set_Answer("supercalifragilisticexpealadotious");
        if (q->get_Answer() != "supercalifragilisticexpealadotious") {
            cout << "Question setting test 3 failed!" << endl;
        } else {
            cout << "Question setting test 3 passed." << endl;
        }

        q->set_Answer(" ");
        if (q->get_Answer() != " ") {
            cout << "Question setting test 4 failed!" << endl;
        } else {
            cout << "Question setting test 4 passed." << endl;
        }
    }
} ;