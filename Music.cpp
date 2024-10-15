#include "Music.h"
using namespace std;

Music::Music() {
    // creates an array to store all the questions
    questions = new string[5]{};
    max_questions = 5;

    // these are the questions that will be accessed by the player for the history category
    questions[0] = "What band was Freddie Mercury part of?";
    questions[1] = "What is the last name of a classical composer that was deaf?";
    questions[2] = "What is the name of the first music video to ever air on MTV?";
    questions[3] = "What famous guitarist is known for playing with his teeth?";
    questions[4] = "What classical song can be used to perform CPR?";
}

void Music::questionDisplay() {

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
    // guiding prompt to help the user enter the best possible answer to the question given
    cout << "(Please enter any number answer as a number, and any worded answer as a word." << endl
         << " Spacing and capitalisation do not matter.)" << endl << endl;
}

void Music::questionDelete() {
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
        set_musicLength(get_musicLength() - 1);
        max_questions--;
        questions = tempArray;
    }
}

string* Music::get_Questions() {
    return questions; // returns the array of questions in the category
}

int Music::get_maxQuestions() {
    return max_questions; // returns the max_number of questions in the category
}

void Music::set_Questions(string* questions) {
    Music::questions = questions; // sets the given array of questions to be the contained array of questions
}

void Music::set_maxQuestions(int max_questions) {
    Music::max_questions = max_questions; // sets the max number of questions to be the given int
}

Music::~Music() {
    delete[] questions; // deallocates the space used for the questions array
}