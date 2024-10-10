#include "GeneralKnowledge.h"
using namespace std;

GeneralKnowledge::GeneralKnowledge() {
    // creates an array to store all the questions
    questions = new string[5]{};
    max_questions = 5;

    // these are the questions that will be accessed by the player for the history category
    questions[0] = "What did the iconic 'Red Skin' lolly change their name to in 2020?";
    questions[1] = "What is tallest mountain on Earth?";
    questions[2] = "What is the name of the all-time highest grossing film?";
    questions[3] = "According to the Guiness World Records, what is the best-selling book of all time?";
    questions[4] = "What is the collective noun for a group of crows?";
}

void GeneralKnowledge::questionDisplay() {

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

void GeneralKnowledge::questionDelete() {
    // this determines what question will not be copied over, and be deleted
    int paste_index = 0;

    // checks to see if there is still at least 1 question left in the category
    if ((max_questions - 1) != 0) {
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
        set_generalKnowledgeLength(get_generalKnowledgeLength() - 1);
        max_questions--;
        questions = tempArray;
    }
}

string* GeneralKnowledge::get_Questions() {
    return questions; // returns the array of questions in the category
}

int GeneralKnowledge::get_maxQuestions() {
    return max_questions; // returns the max_number of questions in the category
}

void GeneralKnowledge::set_Questions(string* questions) {
    GeneralKnowledge::questions = questions; // sets the given array of questions to be the contained array of questions
}

void GeneralKnowledge::set_maxQuestions(int max_questions) {
    GeneralKnowledge::max_questions = max_questions; // sets the max number of questions to be the given int
}

GeneralKnowledge::~GeneralKnowledge() {
    delete[] questions; // deallocates the space used for the questions array
}