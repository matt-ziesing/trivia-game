#include "AnswerCheck.h"
#include <string>
#include <cctype>

AnswerCheck::AnswerCheck() {
    correctAnswers = new std::string[30]{};

    correctAnswers[0] = "photosynthesis";
    correctAnswers[1] = "thecrust";
    correctAnswers[2] = "mitochondria";
    correctAnswers[3] = "gluteusmaximus";
    correctAnswers[4] = "antartica";
    correctAnswers[5] = "queen";
    correctAnswers[6] = "beethoven";
    correctAnswers[7] = "videokilledtheradiostar";
    correctAnswers[8] = "jimihendrix";
    correctAnswers[9] = "stayingalive";
    correctAnswers[10] = "fifa";
    correctAnswers[11] = "brisbanelions";
    correctAnswers[12] = "20";
    correctAnswers[13] = "45";
    correctAnswers[14] = "300";
    correctAnswers[15] = "1901";
    correctAnswers[16] = "1945";
    correctAnswers[17] = "germany";
    correctAnswers[18] = "augustus";
    correctAnswers[19] = "4";
    correctAnswers[20] = "redrippers";
    correctAnswers[21] = "mounteverest";
    correctAnswers[22] = "avatar";
    correctAnswers[23] = "thebible";
    correctAnswers[24] = "murder";
    correctAnswers[25] = "snake";
    correctAnswers[26] = "minecraft";
    correctAnswers[27] = "2017";
    correctAnswers[28] = "tennisfortwo";
    correctAnswers[29] = "pokemongo";
}

// changes the user's given answer to include no spaces or capitalisation
bool AnswerCheck::correctCheck(QuestionDisplay* question) {
    // sets a string to be what the user given answer actually is
    std::string changedAnswer = question->get_Answer();
    for(long unsigned int j = 0; j < changedAnswer.size(); j++) {
        if (changedAnswer[j] == ' ') {
            changedAnswer.erase(j,1);
            j--;

        } else {
            changedAnswer[j] = tolower(changedAnswer[j]);
            std::cout << changedAnswer << std::endl;
            j++;
        }
    }
    question->set_Answer(changedAnswer);

    for (int i = 0; i < 30; i++) {
        // checks if the users given answer is correct
        if (question->get_Answer() == correctAnswers[i]) {
            set_Count(get_Count() + 1);
            // removes the previous answer from the possible answers index so player's cannot use the 
            // same answer twice
            std::string* tempArray = new std::string[30 - get_Count()]{};
            int pasteIndex = 0;
            for (int copyIndex = 0; copyIndex < 30 - get_Count(); copyIndex++) {
                if (copyIndex != i) {
                    tempArray[pasteIndex] = correctAnswers[copyIndex];
                    pasteIndex++;
                } else {
                    pasteIndex++;
                }
            }
            correctAnswers = tempArray;
            return true;
        }
    }
    return false;
}

std::string* AnswerCheck::get_correctAnswers() {
    return correctAnswers; // returns the string containing the correct answers
}

void AnswerCheck::set_correctAnswers(std::string* correctAnswers) {
    AnswerCheck::correctAnswers = correctAnswers;
    // sets the correctAnswers string to be the given string
}

AnswerCheck::~AnswerCheck() {
    delete[] correctAnswers;
}