#include "Science.h"
using namespace std;

Science::Science() {
    // creates an array to store all the questions
    questions = new string[5]{};
    max_questions = 5;

    // these are the questions that will be accessed by the player for the history category
    questions[0] = "What is the process by which plants convert sunlight into energy?";
    questions[1] = "What is the part of the Earth that humans live in?";
    questions[2] = "What is known as the \"Powerhouse of the cell\"?";
    questions[3] = "What is the biggest muscle in the ENTIRE human body?";
    questions[4] = "What is the largest desert in Earth?";
}

void Science::questionDisplay() {

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

void Science::questionDelete() {
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
        set_scienceLength(get_scienceLength() - 1);
        questions = tempArray;
    }
}

string* Science::get_Questions() {
    return questions; // returns the array of questions in the category
}

int Science::get_maxQuestions() {
    return max_questions; // returns the max_number of questions in the category
}

void Science::set_Questions(string* questions) {
    Science::questions = questions; // sets the given array of questions to be the contained array of questions
}

void Science::set_maxQuestions(int max_questions) {
    Science::max_questions = max_questions; // sets the max number of questions to be the given int
}

Science::~Science() {
    delete[] questions; // deallocates the space used for the questions array
}