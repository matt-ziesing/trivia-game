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

    // displays whatever the chosen question is on the command line using the abstract class inherited from
    // UserChoice and set in QuestionDisplay classes
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
    // guiding prompt to help the user's enter the best possible answer to the question they can
    cout << "(Please enter any number answer as a number, and any worded answer as a word." << endl
         << " Spacing and capitalisation do not matter.)" << endl << endl;
}

void History::questionDelete() {
    // this determines what question will not be copied over, and be deleted
    int paste_index = 0;

    // checks to see if there is still at least 1 question left in the category
    if (max_questions != 0) {
        string* tempArray = new string[max_questions-1]{};

        // copies and pastes over only the questions not marked for deletion
        for (int i = 0; i < max_questions; i++) {
            int questionDeleteIndex = get_chosenQuestion() - 1;
            int copy_index = i;
            if (questions[i] != questions[questionDeleteIndex]) {
                tempArray[paste_index] = questions[copy_index];
                paste_index++;

            } else {
                copy_index--;
            }
        }
        // dereferences the temp array to be the questions array, and decrements the number of max questions
        set_historyLength(get_historyLength() - 1);
        max_questions--;
        questions = tempArray;

    } else {
        set_historyLength(0);
        
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