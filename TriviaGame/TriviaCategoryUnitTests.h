#include "History.h"
#include <iostream>
using namespace std;

class TriviaCategoryUnitTest {
public:
    void runTests() {
        initialiseTests();
        questionDeleteTests();
        setQuestionTest();
    }

private:
    void initialiseTests() {
        History history;
        if (history.get_maxQuestions() != 5) {
            cout << "Category max question size initialise test failed!" << endl;
        } else {
            cout << "Category max question size initialise test passed." << endl;
        }

        string* questions = new string[5]{};
        questions[0] = "When did Australia achieve Federation?";
        questions[1] = "In what year did WWII end?";
        questions[2] = "In which country was Albert Einstein Born In?";
        questions[3] = "Who was the first Emperor of Rome?";
        questions[4] = "How many United States presidents have been assassinated?";
        bool comparisonCheck = false;
        for (int i = 0; i < 5; i++) {
            if (history.get_Questions()[i] != questions[i]) {
                cout << "Category questions initialise check failed!" << endl;
                break;
            }
            comparisonCheck = true;
        }
        if (comparisonCheck == true) {
            cout << "Category questions initialise check passed." << endl;
        }
    }

    void questionDeleteTests() {
        History history;

        history.set_chosenQuestion(2);
        history.questionDelete();
        if (history.get_maxQuestions() != 4) {
            cout << "Category max size reduction test failed!" << endl;
        } else {
            cout << "Category max size reduction test passed." << endl;
        }
        if (history.get_historyLength() != 4) {
            cout << "Inherited category size reduction test failed!" << endl;
        } else {
            cout << "Inherited category size reduction test passed." << endl;
        }
        string* questions = new string[4]{};
        questions[0] = "When did Australia achieve Federation?";
        questions[1] = "In which country was Albert Einstein Born In?";
        questions[2] = "Who was the first Emperor of Rome?";
        questions[3] = "How many United States presidents have been assassinated?";
        bool comparionCheck = false;
        for (int i = 0; i < 4; i++) {
            if (history.get_Questions()[i] != questions[i]) {
                cout << "Category question deletion test failed!" << endl;
                break;
            }
            comparionCheck = true;
        }
        if (comparionCheck == true) {
            cout << "Category question deletion test passed." << endl;
        }

        history.set_maxQuestions(0);
        history.questionDelete();
        if (history.get_maxQuestions() != 0) {
            cout << "Category minimum reduction test failed!" << endl;
        } else {
            cout << "Category minimum reduction test passed." << endl;
        }
        if (history.get_historyLength() != 0) {
            cout << "Inherited category length setter test failed!" << endl;
        } else {
            cout << "Inherited category length setter test passed." << endl;
        }
    }

    void setQuestionTest() {
        History history;
        string* questions = new string[5]{};
        questions[0] = "test";
        questions[1] = "test";
        questions[2] = "test";
        questions[3] = "test";
        questions[4] = "test";
        history.set_Questions(questions);
        bool comparrisonCheck = false;
        for (int i = 0; i < 5; i++) {
            if (history.get_Questions()[i] != questions[i]) {
                cout << "Category question setter test failed!" << endl;
                break;
            }
            comparrisonCheck = true;
        }
        if (comparrisonCheck == true) {
            cout << "Category question setter test passed." << endl;
        }
    }

} ;