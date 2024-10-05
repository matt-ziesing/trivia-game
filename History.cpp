#include "History.h"
using namespace std;

History::History() {
    // creates an array to store all the questions
    questions = new string[5]{};
    max_questions = 5;

    // these are the questions that will be accessed by the player for the history category
    questions[0] = "When did Australia achieve Federation?";
    questions[1] = "In what year did WWII end?";
    questions[2] = "In which country was Albert Einstein Born In?";
    questions[3] = "Who was the first Emperor of Rome?";
    questions[4] = "How many United States presidents have been assassinated?";
}

void History::questionDisplay() {

    // this is how the questions will be displayed to the user using the abstract class
    if (get_chosenQuestion() == 1) {
        cout << questions[0] << endl;

    } else if (get_chosenQuestion() == 2) {
        cout << questions[1] << endl;

    } else if (get_chosenQuestion() == 3) {
        cout << questions[2] << endl;

    } else if (get_chosenQuestion() == 4) {
        cout << questions[3] << endl;

    } else if (get_chosenQuestion() == 5) {
        cout << questions[4] << endl;
        
    }
}

void History::questionDelete() {
    // this determines what question will not be copied over, and be deleted
    int questionDeleteIndex = get_chosenQuestion();
    int copyIndex = 0;

    // checks to see if there is still at least 1 question left in the category
    if ((max_questions - 1) != 0) {
        string* tempArray = new string[max_questions]{};

        // copies and pastes over only the questions not marked for deletion
        for (int i = 0; i < max_questions; i++) {
            int paste_index = i;
            if (i != questionDeleteIndex) {
                tempArray[paste_index] = questions[copyIndex];
                copyIndex++;
                paste_index++;

            } else {
                copyIndex++;
            }
        }
        // dereferences the temp array to be the questions array, and decrements the number of max questions
        max_questions--;
        set_historyLength(get_historyLength() - 1);
        questions = tempArray;
    }
}

string* History::get_Questions() {
    return questions; // returns the array of questions in the category
}

int History::get_maxQuestions() {
    return max_questions; // returns the max_number of questions in the category
}

void History::set_Questions(string* questions) {
    History::questions = questions; // sets the given array of questions to be the contained array of questions
}

void History::set_maxQuestions(int max_questions) {
    History::max_questions = max_questions; // sets the max number of questions to be the given int
}

History::~History() {
    delete[] questions; // deallocates the space used for the questions array
}