#include "History.h"
#include "AnswerCheck.h"
#include <iostream>
using namespace std;

int main() {
    QuestionDisplay* q;
    History history;
    CategoryPicker userPicker;
    AnswerCheck ans;
    CorrectTotal userTotal;

    bool userCorrect = true;

    while (userCorrect == true) {
        //userPicker.set_historyLength(0);
        userPicker.categoryChoice();

        userPicker.questionSelect();
        history.set_chosenQuestion(userPicker.get_chosenQuestion());
        q = &history;
        q->questionDisplay();
    
        string userAnswer;
        cin >> userAnswer;
        q->set_Answer(userAnswer);

        if (ans.correctCheck(q) == true) {
            cout << "You have answered correctly! Good job" << endl;
            history.questionDelete();
            userPicker.set_historyLength(history.get_historyLength());
            cout << userPicker.get_historyLength() << endl;

        } else if (ans.correctCheck(q) == false) {
            cout << "You have answered incorrectly. So sorry about that." << endl;
            userCorrect = false;
        }
    }

    return 0;
}