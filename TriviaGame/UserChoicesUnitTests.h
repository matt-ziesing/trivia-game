#include "UserChoices.h"
#include <iostream>
#include <unistd.h>
using namespace std;
#ifndef UNITTESTS_H
#define UNITTESTS_H

class CategoryUnitTests {
public:
    void runCategoryPickerTests() {
        initializeTests();
        sleep(3);
        testUserInput();
        randomGenerationTest();
    }

private:
    void testUserInput() {
        UserChoices userPicker;
        cout << "when prompted, please enter 1" << endl;
        userPicker.categoryChoice();
        if (userPicker.get_chosenCategory() != string(1,'1')) {
            cout << "Test 1 failed!" << endl;
        } else {
            cout << "Test 1 passed." << endl;
        }

        cout << "when prompted, please enter 2" << endl;
        userPicker.categoryChoice();
        if (userPicker.get_chosenCategory() != string(1,'2')) {
            cout << "Test 2 failed!" << endl;
        } else {
            cout << "Test 2 passed" << endl;
        }

        cout << "when prompted, please enter 3" << endl;
        userPicker.categoryChoice();
        if (userPicker.get_chosenCategory() != string(1,'3')) {
            cout << "Test 3 failed!" << endl;
        } else {
            cout << "Test 3 passed." << endl;
        }

        cout << "when prompted, please enter 4" << endl;
        userPicker.categoryChoice();
        if (userPicker.get_chosenCategory() != string(1,'4')) {
            cout << "Test 4 failed!" << endl;
        } else {
            cout << "Test 4 passed." << endl;
        }

        cout << "when prompted, please enter 5" << endl;
        userPicker.categoryChoice();
        if (userPicker.get_chosenCategory() != string(1,'5')) {
            cout << "Test 5 failed!" << endl;
        } else {
            cout << "Test 5 passed." << endl;
        }

        cout << "when prompted, please enter 6" << endl;
        userPicker.categoryChoice();
        if (userPicker.get_chosenCategory() != string(1,'6')) {
            cout << "Test 6 failed!" << endl;
        } else {
            cout << "Test 6 passed." << endl;
        }
    }

    void initializeTests() {
        UserChoices userPicker;
        if (userPicker.get_chosenCategory() != string(1,'0')) {
            cout << "Category Test Failed!" << endl;
        } else {
            cout << "Category Test Passed." << endl;
        }

        if (userPicker.get_chosenQuestion() != -1) {
            cout << "Question Test Failed!" << endl;
        } else {
            cout << "Question Test Passed." << endl;
        }

        if (userPicker.get_historyLength() != 5) {
            cout << "History Length Test Failed!" << endl;
        } else {
            cout << "History Length Test Passed." << endl;
        }

        if (userPicker.get_videoGameLength() != 5) {
            cout << "Video Game Length Test Failed!" << endl;
        } else {
            cout << "Video Game Length Test Passed." << endl;
        }

        if (userPicker.get_generalKnowledgeLength() != 5) {
            cout << "General Knowledge Length Test Failed!" << endl;
        } else {
            cout << "General Knowledge Length Test Passed." << endl;
        }

        if (userPicker.get_sportsLength() != 5) {
            cout << "Sports Length Test Failed!" << endl;
        } else {
            cout << "Sports Length Test Passed." << endl;
        }

        if (userPicker.get_musicLength() != 5) {
            cout << "Music Length Test Failed!" << endl;
        } else {
            cout << "Music Length Test Passed." << endl;
        }

        if (userPicker.get_scienceLength() != 5) {
            cout << "Science Length Test Failed!" << endl;
        } else {
            cout << "Science Length Test Passed." << endl;
        }
    }

    void randomGenerationTest() {
        UserChoices userPicker;
        cout << "please enter 1" << endl;
        userPicker.categoryChoice();
        userPicker.questionSelect();
        if (!(userPicker.get_chosenQuestion() >= 1 && userPicker.get_chosenQuestion() <= 5)) {
            cout << "Random Generation 5 failed!" << endl;
        } else {
            cout << "Random Generation 5 passed." << endl;
        }

        userPicker.set_historyLength(4);
        userPicker.questionSelect();
        if (!(userPicker.get_chosenQuestion() >= 1 && userPicker.get_chosenQuestion() <= 4)) {
            cout << "Random Generation 4 failed!" << endl;
        } else {
            cout << "Random generation 4 passed." << endl;
        }

        userPicker.set_historyLength(3);
        userPicker.questionSelect();
        if (!(userPicker.get_chosenQuestion() >= 1 && userPicker.get_chosenQuestion() <= 3)) {
            cout << "Random Generation 3 failed!" << endl;
        } else {
            cout << "Random generation 3 passed." << endl;
        }

        userPicker.set_historyLength(2);
        userPicker.questionSelect();
        if (!(userPicker.get_chosenQuestion() >= 1 && userPicker.get_chosenQuestion() <= 2)) {
            cout << "Random Generation 2 failed!" << endl;
        } else {
            cout << "Random generation 2 passed." << endl;
        }

        userPicker.set_historyLength(1);
        userPicker.questionSelect();
        if (userPicker.get_chosenQuestion() != 1) {
            cout << "Random Generation 1 failed!" << endl;
        } else {
            cout << "Random generation 1 passed." << endl;
        }
    }
} ;

#endif