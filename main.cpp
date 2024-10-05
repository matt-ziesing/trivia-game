#include "History.h"
#include <iostream>
using namespace std;

int main() {\
    QuestionDisplay* q;
    History history;
    CategoryPicker userPicker;

    history.categoryChoice();
    history.questionSelect();

    //userPicker.set_historyLength(0);
    cout << history.get_chosenQuestion() << endl;


    q = &history;
    q->questionDisplay();

    return 0;
}