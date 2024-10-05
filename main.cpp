#include "History.h"
#include <iostream>
using namespace std;

int main() {
    History history;
    CategoryPicker userPicker;

    //userPicker.set_historyLength(0);
    cout << stoi(history.get_chosenCategory()) << endl;
    userPicker.categoryChoice();
    cout << stoi(history.get_chosenCategory()) << endl;
    cout << history.get_maxQuestions() << endl;
    cout << history.get_historyLength() << endl;

    return 0;
}