#include "AnswerCheck.h"
#include <iostream>
using namespace std;

class AnswerCheckUnitTest {
public:
    void runAnswerCheckTests() {
        initialiseAnswersTest();
        initialiseLengthTest();
        correctCheckTest();
    }

private:
    void initialiseAnswersTest() {
        AnswerCheck ans;

        string* historyAnswers = ans.get_correctHistoryAnswers();
        string* correctHistoryAnswers = new std::string[5]{};
        correctHistoryAnswers[0] = "1901";
        correctHistoryAnswers[1] = "1945";
        correctHistoryAnswers[2] = "germany";
        correctHistoryAnswers[3] = "augustus";
        correctHistoryAnswers[4] = "4";
        bool historyCorrect = false;
        for (int i = 0; i < 5; i++) {
            if (historyAnswers[i] != correctHistoryAnswers[i]) {
                cout << "History Answers initialisation failed!" << endl;
                break;
            } else {
                historyCorrect = true;
            }
        }
        if (historyCorrect == true) {
            cout << "History Answers initialisation passed." << endl;
        }

        string* videoGameAnswers = ans.get_correctVideoGameAnswers();
        string* correctVideoGameAnswers = new std::string[5]{};
        correctVideoGameAnswers[0] = "snake";
        correctVideoGameAnswers[1] = "minecraft";
        correctVideoGameAnswers[2] = "2017";
        correctVideoGameAnswers[3] = "tennisfortwo";
        correctVideoGameAnswers[4] = "pokemongo";
        bool videoGamesCorrect = false;
        for (int i = 0; i < 5; i++) {
            if (videoGameAnswers[i] != correctVideoGameAnswers[i]) {
                cout << "Video game answers initialisation failed!" << endl;
                break;
            } else {
                videoGamesCorrect = true;
            }
        }
        if (videoGamesCorrect == true) {
            cout << "Video games answers initialisation passed." << endl;
        }

        string* generalKnowledgeAnswers = ans.get_correctGeneralKnowledgeAnswers();
        string* correctGeneralKnowledgeAnswers = new std::string[5]{};
        correctGeneralKnowledgeAnswers[0] = "redrippers";
        correctGeneralKnowledgeAnswers[1] = "mounteverest";
        correctGeneralKnowledgeAnswers[2] = "avatar";
        correctGeneralKnowledgeAnswers[3] = "thebible";
        correctGeneralKnowledgeAnswers[4] = "murder";
        bool generalKnowledgeCorrect = false;
        for (int i = 0; i < 5; i++) {
            if (generalKnowledgeAnswers[i] != correctGeneralKnowledgeAnswers[i]) {
                cout << "General Knowledge answers initialisation failed!" << endl;
                break;
            } else {
                generalKnowledgeCorrect = true;
            }
        }
        if (generalKnowledgeCorrect == true) {
            cout << "General knowledge answers initialisation passed." << endl;
        }

        string* sportAnswers = ans.get_correctSportsAnswers();
        string* correctSportsAnswers = new std::string[5]{};
        correctSportsAnswers[0] = "fifa";
        correctSportsAnswers[1] = "brisbanelions";
        correctSportsAnswers[2] = "20";
        correctSportsAnswers[3] = "45";
        correctSportsAnswers[4] = "300";
        bool sportCorrect = false;
        for (int i = 0; i < 5; i++) {
            if (sportAnswers[i] != correctSportsAnswers[i]) {
                cout << "Sports answers initialisation failed!" << endl;
                break;
            } else {
                sportCorrect = true;
            }
        }
        if (sportCorrect == true) {
            cout << "Sport answers initialisation passed." << endl;
        }

        string* musicAnswers = ans.get_correctMusicAnswers();
        string* correctMusicAnswers = new std::string[5]{};
        correctMusicAnswers[0] = "queen";
        correctMusicAnswers[1] = "beethoven";
        correctMusicAnswers[2] = "videokilledtheradiostar";
        correctMusicAnswers[3] = "jimihendrix";
        correctMusicAnswers[4] = "stayingalive";
        bool musicCorrect = false;
        for (int i = 0; i < 5; i++) {
            if (musicAnswers[i] != correctMusicAnswers[i]) {
                cout << "Music answers initialisation failed!" << endl;
                break;
            } else {
                musicCorrect = true;
            }
        }
        if (musicCorrect == true) {
            cout << "Music answers initialisation passed." << endl;
        }

        string* scienceAnswers = ans.get_correctScienceAnswers();
        string* correctScienceAnswers = new std::string[5]{};
        correctScienceAnswers[0] = "photosynthesis";
        correctScienceAnswers[1] = "thecrust";
        correctScienceAnswers[2] = "mitochondria";
        correctScienceAnswers[3] = "gluteusmaximus";
        correctScienceAnswers[4] = "antartica";
        bool scienceCorrect = false;
        for (int i = 0; i < 5; i++) {
            if (scienceAnswers[i] != correctScienceAnswers[i]) {
                cout << "Science answers initialisation failed!" << endl;
                break;
            } else {
                scienceCorrect = true;
            }
        }
        if (scienceCorrect == true) {
            cout << "Science answers initialisation passed." << endl;
        }
    }

    void initialiseLengthTest() {
        AnswerCheck ans;

        if (ans.get_historyAnswerLength() != 5) {
            cout << "History length initialisation failed!" << endl;
        } else {
            cout << "History length initialisation passed." << endl;
        }

        if (ans.get_videoGameAnswerLength() != 5) {
            cout << "Video game length initialisation failed!" << endl;
        } else {
            cout << "Video game length initialisation passed." << endl;
        }

        if (ans.get_generalKnowledgeAnswerLength() != 5) {
            cout << "General knowledge length initialisation failed!" << endl;
        } else {
            cout << "General knowledge length initialisation passed." << endl;
        }

        if (ans.get_sportsAnswerLength() != 5) {
            cout << "Sports length initialisation failed!" << endl;
        } else {
            cout << "Sports length initialisation passed." << endl;
        }

        if (ans.get_musicAnswerLength() != 5) {
            cout << "Music length initialisation failed!" << endl;
        } else {
            cout << "Music length initialisation passed." << endl;
        }

        if (ans.get_scienceAnswerLength() != 5) {
            cout << "Science length initialisation failed!" << endl;
        } else {
            cout << "Science length initialisation passed." << endl;
        }
    }

    void correctCheckTest() {
        QuestionDisplay* q;
        CategoryPicker userPicker;      
        AnswerCheck ans;
        q = &userPicker;

        q->set_Answer("ABCD");
        userPicker.set_chosenCategory(string(1,'1'));
        userPicker.questionSelect();
        if (ans.correctCheck(q, userPicker) != false) {
            cout << "Correct check test 1 failed!" << endl;
        } else {
            cout << "Correct check test 1 passed. " << endl;
        }

        q->set_Answer("AUGUSTUS");
        userPicker.set_chosenCategory(string(1,'1'));
        userPicker.set_chosenQuestion(4);
        if (ans.correctCheck(q, userPicker) != true) {
            cout << "Correct check test 2 failed!" << endl;
        } else {
            cout << "Correct check test 2 passed." << endl;
        }

        q->set_Answer("83901809");
        userPicker.set_chosenCategory(string(1,'1'));
        userPicker.questionSelect();
        ans.correctCheck(q, userPicker);
        if (q->get_Answer() != "83901809") {
            cout << "Correct check test 3 failed!" << endl;
        } else {
            cout << "Correct check test 3 passed." << endl;
        }

        q->set_Answer("testingCAPITALS");
        userPicker.set_chosenCategory(string(1,'1'));
        userPicker.questionSelect();
        ans.correctCheck(q, userPicker);
        if (q->get_Answer() != "testingcapitals") {
            cout << "Correct check test 4 failed!" << endl;
        } else {
            cout << "Correct check test 4 passed." << endl;
        }

        q->set_Answer("test ing ran dom  spac   es");
        userPicker.set_chosenCategory(string(1,'1'));
        userPicker.questionSelect();
        ans.correctCheck(q, userPicker);
        if (q->get_Answer() != "testingrandomspaces") {
            cout << "Correct check test 5 failed!" << endl;
        } else {
            cout << "Correct check test 5 passed." << endl;
        }
    }

} ;