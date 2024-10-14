#include "GameReset.h"
#include <iostream>
using namespace std;

class GameResetUnitTest {
public:
    void runGameResetTests() {
        resetScoreTests();
        resetQuestionTests();
    }

private:
    void resetScoreTests() {
        CorrectTotal userTotal;
        AnswerCheck ans;
        userTotal.set_Count(10);
        ans.set_Count(10);

        GameReset reset;
        reset.resetScore(&userTotal, &ans);
        if (userTotal.get_Count() != 0 && ans.get_Count() != 0) {
            cout << "score reset test failed!" << endl;
        } else {
            cout << "score reset test passed." << endl;
        }
    }

    void resetQuestionTests() {
        History history;
        History resetHistory;
        VideoGames video;
        VideoGames resetVideo;
        GeneralKnowledge general;
        GeneralKnowledge resetGeneral;
        Sports sport;
        Sports resetSport;
        Music music;
        Music resetMusic;
        Science science;
        Science resetScience;
        CategoryPicker userPicker;

        GameReset reset;
        reset.resetQuestions(&resetHistory, &resetVideo, &resetGeneral, &resetSport, &resetMusic, &resetScience,
                             &userPicker);
        bool historyPassed = false;
        for (int historyIndex = 0; historyIndex < 5; historyIndex++) {
            if (history.get_Questions()[historyIndex] != resetHistory.get_Questions()[historyIndex]) {
                cout << "History question reset failed at question " << historyIndex+1 << endl;
                break;
            } else {
                historyPassed = true;
            }
        }
        if (historyPassed == true) {
            cout << "History question reset passed." << endl;
        }

        bool videogamesPassed = false;
        for (int videogamesIndex = 0; videogamesIndex < 5; videogamesIndex++) {
            if (video.get_Questions()[videogamesIndex] != resetVideo.get_Questions()[videogamesIndex]) {
                cout << "Video games question reset failed at question " << videogamesIndex+1 << endl;
                break;
            } else {
                videogamesPassed = true;
            }
        }
        if (videogamesPassed == true) {
            cout << "Video games question reset passed." << endl;
        }

        bool generalknowledgePassed = false;
        for (int generalknowledgeIndex = 0; generalknowledgeIndex < 5; generalknowledgeIndex++) {
            if (general.get_Questions()[generalknowledgeIndex] != resetGeneral.get_Questions()[generalknowledgeIndex]) {
                cout << "General knowledge question reset failed at question " << generalknowledgeIndex+1 << endl;
                break;
            } else {
                generalknowledgePassed = true;
            }
        }
        if (generalknowledgePassed == true) {
            cout << "General knowledge question reset passed." << endl;
        }

        bool sportPassed = false;
        for (int sportIndex = 0; sportIndex < 5; sportIndex++) {
            if (sport.get_Questions()[sportIndex] != resetSport.get_Questions()[sportIndex]) {
                cout << "Sport question reset failed at question " << sportIndex+1 << endl;
                break;
            } else {
                sportPassed = true;
            }
        }
        if (sportPassed == true) {
            cout << "Sport question reset passed." << endl;
        }

        bool musicPassed = false;
        for (int musicIndex = 0; musicIndex < 5; musicIndex++) {
            if (music.get_Questions()[musicIndex] != resetMusic.get_Questions()[musicIndex]) {
                cout << "Music question reset failed at question " << musicIndex+1 << endl;
                break;
            } else {
                musicPassed = true;
            }
        }
        if (musicPassed == true) {
            cout << "Music question reset passed." << endl;
        }

        bool sciencePassed = false;
        for (int scienceIndex = 0; scienceIndex < 5; scienceIndex++) {
            if (science.get_Questions()[scienceIndex] != resetScience.get_Questions()[scienceIndex]) {
                cout << "Science question reset failed at question " << scienceIndex+1 << endl;
                break;
            } else {
                sciencePassed = true;
            }
        }
        if (sciencePassed == true) {
            cout << "Science question reset passed." << endl;
        }
    }
} ;