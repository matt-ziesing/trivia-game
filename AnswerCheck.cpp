#include "AnswerCheck.h"
#include <string>
#include <cctype>
#include <unistd.h>

AnswerCheck::AnswerCheck() {
    correctHistoryAnswers = new std::string[5]{};
    correctHistoryAnswers[0] = "1901";
    correctHistoryAnswers[1] = "1945";
    correctHistoryAnswers[2] = "germany";
    correctHistoryAnswers[3] = "augustus";
    correctHistoryAnswers[4] = "4";

    correctVideoGameAnswers = new std::string[5]{};
    correctVideoGameAnswers[0] = "snake";
    correctVideoGameAnswers[1] = "minecraft";
    correctVideoGameAnswers[2] = "2017";
    correctVideoGameAnswers[3] = "tennisfortwo";
    correctVideoGameAnswers[4] = "pokemongo";

    correctGeneralKnowledgeAnswers = new std::string[5]{};
    correctGeneralKnowledgeAnswers[0] = "redrippers";
    correctGeneralKnowledgeAnswers[1] = "mounteverest";
    correctGeneralKnowledgeAnswers[2] = "avatar";
    correctGeneralKnowledgeAnswers[3] = "thebible";
    correctGeneralKnowledgeAnswers[4] = "murder";

    correctSportsAnswers = new std::string[5]{};
    correctSportsAnswers[0] = "fifa";
    correctSportsAnswers[1] = "brisbanelions";
    correctSportsAnswers[2] = "20";
    correctSportsAnswers[3] = "45";
    correctSportsAnswers[4] = "300";

    correctMusicAnswers = new std::string[5]{};
    correctMusicAnswers[0] = "queen";
    correctMusicAnswers[1] = "beethoven";
    correctMusicAnswers[2] = "videokilledtheradiostar";
    correctMusicAnswers[3] = "jimihendrix";
    correctMusicAnswers[4] = "stayingalive";

    correctScienceAnswers = new std::string[5]{};
    correctScienceAnswers[0] = "photosynthesis";
    correctScienceAnswers[1] = "thecrust";
    correctScienceAnswers[2] = "mitochondria";
    correctScienceAnswers[3] = "gluteusmaximus";
    correctScienceAnswers[4] = "antartica";

    historyAnswerLength = 5;
    videoGameAnswerLength = 5;
    generalKnowledgeAnswerLength = 5;
    sportAnswerLength = 5;
    musicAnswerLength = 5;
    scienceAnswerLength = 5;
}

// changes the user's given answer to include no spaces or capitalisation
bool AnswerCheck::correctCheck(QuestionDisplay* question, UserChoices user) {
    // sets a string to be what the user given answer actually is
    std::string changedAnswer = question->get_Answer();
    for(long unsigned int j = 0; j < changedAnswer.size(); j++) {
        if (changedAnswer[j] == ' ') {
            changedAnswer.erase(j,1);
            j--;

        } else {
            changedAnswer[j] = tolower(changedAnswer[j]);
        }
    }
    question->set_Answer(changedAnswer);

    /*system("clear");
    std::cout << "You have answered " << std::endl;
    sleep(1);
    system("clear");
    std::cout << "You have answered ." << std::endl;
    sleep(1);
    system("clear");
    std::cout << "You have answered .." << std::endl;
    sleep(1);
    system("clear");
    std::cout << "You have answered ..." << std::endl;
    sleep(1);
    system("clear");*/

    // checks if the users given answer is correct
    if (user.get_chosenCategory() == std::string(1,'1')) {
        if (question->get_Answer() == correctHistoryAnswers[user.get_chosenQuestion() - 1]) {
            // updates the player's correct total count
            set_Count(get_Count() + 1);
            if (historyAnswerLength > 0) {
                std::string* tempArray = new std::string[historyAnswerLength - 1]{};
                int pasteIndex = 0;
                for (int i = 0; i < historyAnswerLength; i++) {
                    int questionDeleteIndex = user.get_chosenQuestion() - 1;
                    int copy_index = i;
                    if (correctHistoryAnswers[i] != correctHistoryAnswers[questionDeleteIndex]) {
                        tempArray[pasteIndex] = correctHistoryAnswers[copy_index];
                        pasteIndex++;
                    } else {
                        copy_index--;
                    }
                }
                historyAnswerLength--;
                correctHistoryAnswers = tempArray;
                return true;
            }
        }
    } else if (user.get_chosenCategory() == std::string(1,'2')) {
        if (question->get_Answer() == correctVideoGameAnswers[user.get_chosenQuestion() - 1]) {
            set_Count(get_Count() + 1);
            if (videoGameAnswerLength > 0) {
                std::string* tempArray = new std::string[videoGameAnswerLength - 1]{};
                int pasteIndex = 0;
                for (int i = 0; i < videoGameAnswerLength; i++) {
                    int questionDeleteIndex = user.get_chosenQuestion() - 1;
                    int copy_index = i;
                    if (correctVideoGameAnswers[i] != correctVideoGameAnswers[questionDeleteIndex]) {
                        tempArray[pasteIndex] = correctVideoGameAnswers[copy_index];
                        pasteIndex++;
                    } else {
                        copy_index--;
                    }
                }
                videoGameAnswerLength--;
                correctVideoGameAnswers = tempArray;
                return true;
            }
        }
    } else if (user.get_chosenCategory() == std::string(1,'3')) {
        if (question->get_Answer() == correctGeneralKnowledgeAnswers[user.get_chosenQuestion() - 1]) {
            set_Count(get_Count() + 1);
            if (generalKnowledgeAnswerLength > 0) {
                std::string* tempArray = new std::string[generalKnowledgeAnswerLength - 1]{};
                int pasteIndex = 0;
                for (int i = 0; i < generalKnowledgeAnswerLength; i++) {
                    int questionDeleteIndex = user.get_chosenQuestion() - 1;
                    int copy_index = i;
                    if (correctGeneralKnowledgeAnswers[i] != correctGeneralKnowledgeAnswers[questionDeleteIndex]) {
                        tempArray[pasteIndex] = correctGeneralKnowledgeAnswers[copy_index];
                        pasteIndex++;
                    } else {
                        copy_index--;
                    }
                }
                generalKnowledgeAnswerLength--;
                correctGeneralKnowledgeAnswers = tempArray;
                return true;
            }
        }
    } else if (user.get_chosenCategory() == std::string(1,'4')) {
        if (question->get_Answer() == correctSportsAnswers[user.get_chosenQuestion() - 1]) {
            set_Count(get_Count() + 1);
            if (sportAnswerLength > 0) {
                std::string* tempArray = new std::string[sportAnswerLength - 1]{};
                int pasteIndex = 0;
                for (int i = 0; i < sportAnswerLength; i++) {
                    int questionDeleteIndex = user.get_chosenQuestion() - 1;
                    int copy_index = i;
                    if (correctSportsAnswers[i] != correctSportsAnswers[questionDeleteIndex]) {
                        tempArray[pasteIndex] = correctSportsAnswers[copy_index];
                        pasteIndex++;
                    } else {
                        copy_index--;
                    }
                }
                sportAnswerLength--;
                correctSportsAnswers = tempArray;
                return true;
            }
        }

    } else if (user.get_chosenCategory() == std::string(1,'5')) {
        if (question->get_Answer() == correctMusicAnswers[user.get_chosenQuestion() - 1]) {
            set_Count(get_Count() + 1);
            if (musicAnswerLength > 0) {
                std::string* tempArray = new std::string[musicAnswerLength - 1]{};
                int pasteIndex = 0;
                for (int i = 0; i < musicAnswerLength; i++) {
                    int questionDeleteIndex = user.get_chosenQuestion() - 1;
                    int copy_index = i;
                    if (correctMusicAnswers[i] != correctMusicAnswers[questionDeleteIndex]) {
                        tempArray[pasteIndex] = correctMusicAnswers[copy_index];
                        pasteIndex++;
                    } else {
                        copy_index--;
                    }
                }
                musicAnswerLength--;
                correctMusicAnswers = tempArray;
                return true;
            }
        }

    } else if (user.get_chosenCategory() == std::string(1,'6')) {
        if (question->get_Answer() == correctScienceAnswers[user.get_chosenQuestion() - 1]) {
            set_Count(get_Count() + 1);
            if (scienceAnswerLength > 0) {
                std::string* tempArray = new std::string[scienceAnswerLength - 1]{};
                int pasteIndex = 0;
                for (int i = 0; i < scienceAnswerLength; i++) {
                    int questionDeleteIndex = user.get_chosenQuestion() - 1;
                    int copy_index = i;
                    if (correctScienceAnswers[i] != correctScienceAnswers[questionDeleteIndex]) {
                        tempArray[pasteIndex] = correctScienceAnswers[copy_index];
                        pasteIndex++;

                    } else {
                        copy_index--;
                    }
                }
                scienceAnswerLength--;
                correctScienceAnswers = tempArray;
                return true;
            }
        }
    }
    return false;
}

void AnswerCheck::set_correctHistoryAnswers(std::string* answers) {
    AnswerCheck::correctHistoryAnswers = answers;
}

void AnswerCheck::set_correctVideoGameAnswers(std::string* answers) {
    AnswerCheck::correctVideoGameAnswers = answers;
}

void AnswerCheck::set_correctGeneralKnowledgeAnswers(std::string* answers) {
    AnswerCheck::correctGeneralKnowledgeAnswers = answers;
}

void AnswerCheck::set_correctSportsAnswers(std::string* answers) {
    AnswerCheck::correctSportsAnswers = answers;
}

void AnswerCheck::set_correctMusicAnswers(std::string* answers) {
    AnswerCheck::correctMusicAnswers = answers;
}

void AnswerCheck::set_correctScienceAnswers(std::string* answers) {
    AnswerCheck::correctScienceAnswers = answers;
}

void AnswerCheck::set_historyAnswerLength(int historyLength) {
    AnswerCheck::historyAnswerLength = historyLength;
}

void AnswerCheck::set_videoGameAnswerLength(int videoGameLength) {
    AnswerCheck::videoGameAnswerLength = videoGameLength;
}

void AnswerCheck::set_generalKnowledgeAnswerLength(int generalKnowledgeLength) {
    AnswerCheck::generalKnowledgeAnswerLength = generalKnowledgeLength;
}

void AnswerCheck::set_sportsAnswerLength(int sportsLength) {
    AnswerCheck::sportAnswerLength = sportsLength;
}

void AnswerCheck::set_musicAnswerLength(int musicLength) {
    AnswerCheck::musicAnswerLength = musicLength;
}

void AnswerCheck::set_scienceAnswerLength(int scienceLength) {
    AnswerCheck::scienceAnswerLength = scienceLength;
}

std::string* AnswerCheck::get_correctHistoryAnswers() {
    return correctHistoryAnswers;
}

std::string* AnswerCheck::get_correctVideoGameAnswers() {
    return correctVideoGameAnswers;
}

std::string* AnswerCheck::get_correctGeneralKnowledgeAnswers() {
    return correctGeneralKnowledgeAnswers;
}

std::string* AnswerCheck::get_correctSportsAnswers() {
    return correctSportsAnswers;
}

std::string* AnswerCheck::get_correctMusicAnswers() {
    return correctMusicAnswers;
}

std::string* AnswerCheck::get_correctScienceAnswers() {
    return correctScienceAnswers;
}

int AnswerCheck::get_historyAnswerLength() {
    return historyAnswerLength;
}

int AnswerCheck::get_videoGameAnswerLength() {
    return videoGameAnswerLength;
}

int AnswerCheck::get_generalKnowledgeAnswerLength() {
    return generalKnowledgeAnswerLength;
}

int AnswerCheck::get_sportsAnswerLength() {
    return sportAnswerLength;
}

int AnswerCheck::get_musicAnswerLength() {
    return musicAnswerLength;
}

int AnswerCheck::get_scienceAnswerLength() {
    return scienceAnswerLength;
}

AnswerCheck::~AnswerCheck() {
    delete[] correctHistoryAnswers;
    delete[] correctVideoGameAnswers;
    delete[] correctGeneralKnowledgeAnswers;
    delete[] correctSportsAnswers;
    delete[] correctMusicAnswers;
    delete[] correctScienceAnswers;
}