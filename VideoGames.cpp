#include "VideoGames.h"
using namespace std;

VideoGames::VideoGames() {
    // creates an array to store all the questions
    questions = new string[5]{};
    max_questions = 5;

    // these are the questions that will be accessed by the player for the history category
    questions[0] = "What is the name of the most frequent main protagonist in the Metal Gear series?";
    questions[1] = "What is the best-selling video game of all time?";
    questions[2] = "When was Fortnite: Battle Royal released?";
    questions[3] = "What is the name of the first video game ever created?";
    questions[4] = "Which popular mobile game's concept was conceived due to an April Fool's Day prank?";
}

void VideoGames::questionDisplay() {

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

void VideoGames::questionDelete() {
    // this determines what question will not be copied over, and be deleted
    int paste_index = 0;

    // checks to see if there is still at least 1 question left in the category
    if (max_questions != 0) {
        string* tempArray = new string[max_questions]{};

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
        set_videoGameLength(get_videoGameLength() - 1);
        max_questions--;
        questions = tempArray;
    }
}

string* VideoGames::get_Questions() {
    return questions; // returns the array of questions in the category
}

int VideoGames::get_maxQuestions() {
    return max_questions; // returns the max_number of questions in the category
}

void VideoGames::set_Questions(string* questions) {
    VideoGames::questions = questions; // sets the given array of questions to be the contained array of questions
}

void VideoGames::set_maxQuestions(int max_questions) {
    VideoGames::max_questions = max_questions; // sets the max number of questions to be the given int
}

VideoGames::~VideoGames() {
    delete[] questions; // deallocates the space used for the questions array
}