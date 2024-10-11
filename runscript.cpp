#include "History.h"
#include "VideoGames.h"
#include "GeneralKnowledge.h"
#include "Sports.h"
#include "Music.h"
#include "Science.h"
#include "AnswerCheck.h"
#include "LeaderBoard.h"
#include "GameReset.h"

#include <iostream>
#include <string>
using namespace std;

int main() {
    QuestionDisplay* q;
    History history;
    VideoGames video;
    GeneralKnowledge general;
    Sports sport;
    Music music;
    Science science;
    CategoryPicker userPicker;
    CorrectTotal userTotal;
    AnswerCheck ans;
    LeaderBoard leaderboard;
    GameReset reset;
    
    bool replay = true;

    while (replay == true) {
        leaderboard.establishLeaders();
        bool userCorrect = true;

        while (userCorrect == true) {
            userPicker.categoryChoice();

            if (userPicker.get_chosenCategory() == string(1,'1')) {
                if (userPicker.get_historyLength() > 0) {
                    userPicker.questionSelect();
                    history.set_chosenQuestion(userPicker.get_chosenQuestion());
                    q = &history;
                    q->questionDisplay();

                    string userAnswer;
                    cin.ignore();
                    getline(cin, userAnswer);
                    q->set_Answer(userAnswer);

                    if (ans.correctCheck(q, userPicker) == true) {
                        cout << "You have answered correctly! Good job" << endl;
                        history.questionDelete();
                        userPicker.set_historyLength(history.get_historyLength());

                    } else if (ans.correctCheck(q, userPicker) == false) {
                        cout << "You have answered incorrectly. So sorry about that." << endl;
                        userTotal.set_Count(ans.get_Count());
                        userCorrect = false;
                    }
                }

            } else if (userPicker.get_chosenCategory() == string(1,'2')) {
                    if (userPicker.get_videoGameLength() > 0) {
                        userPicker.questionSelect();
                        video.set_chosenQuestion(userPicker.get_chosenQuestion());
                        q = &video;
                        q->questionDisplay();

                        string userAnswer;
                        cin.ignore();
                        getline(cin, userAnswer);
                        q->set_Answer(userAnswer);

                        if (ans.correctCheck(q, userPicker) == true) {
                            cout << "You have answered correctly! Good job" << endl;
                            video.questionDelete();
                            userPicker.set_videoGameLength(video.get_videoGameLength());

                        } else if (ans.correctCheck(q, userPicker) == false) {
                            cout << "You have answered incorrectly. So sorry about that." << endl;
                            userTotal.set_Count(ans.get_Count());
                            userCorrect = false;
                        }
                    }

            } else if (userPicker.get_chosenCategory() == string(1,'3')) {
                    if (userPicker.get_generalKnowledgeLength() > 0) {
                        userPicker.questionSelect();
                        general.set_chosenQuestion(userPicker.get_chosenQuestion());
                        q = &general;
                        q->questionDisplay();

                        string userAnswer;
                        cin.ignore();
                        getline(cin, userAnswer);
                        q->set_Answer(userAnswer);

                        if (ans.correctCheck(q, userPicker) == true) {
                            cout << "You have answered correctly! Good job" << endl;
                            general.questionDelete();
                            userPicker.set_generalKnowledgeLength(general.get_generalKnowledgeLength());

                        } else if (ans.correctCheck(q, userPicker) == false) {
                            cout << "You have answered incorrectly. So sorry about that." << endl;
                            userTotal.set_Count(ans.get_Count());
                            userCorrect = false;
                        }
                    }

            } else if (userPicker.get_chosenCategory() == string(1,'4')) {
                    if (userPicker.get_sportsLength() > 0) {
                        userPicker.questionSelect();
                        sport.set_chosenQuestion(userPicker.get_chosenQuestion());
                        q = &sport;
                        q->questionDisplay();

                        string userAnswer;
                        cin.ignore();
                        getline(cin, userAnswer);
                        q->set_Answer(userAnswer);

                        if (ans.correctCheck(q, userPicker) == true) {
                            cout << "You have answered correctly! Good job" << endl;
                            sport.questionDelete();
                            userPicker.set_sportsLength(sport.get_sportsLength());

                        } else if (ans.correctCheck(q, userPicker) == false) {
                            cout << "You have answered incorrectly. So sorry about that." << endl;
                            userTotal.set_Count(ans.get_Count());
                            userCorrect = false;
                        }
                    }

            } else if (userPicker.get_chosenCategory() == string(1,'5')) {
                    if (userPicker.get_musicLength() > 0) {
                        userPicker.questionSelect();
                        music.set_chosenQuestion(userPicker.get_chosenQuestion());
                        q = &music;
                        q->questionDisplay();

                        string userAnswer;
                        cin.ignore();
                        getline(cin, userAnswer);
                        q->set_Answer(userAnswer);

                        if (ans.correctCheck(q, userPicker) == true) {
                            cout << "You have answered correctly! Good job" << endl;
                            music.questionDelete();
                            userPicker.set_musicLength(music.get_musicLength());

                        } else if (ans.correctCheck(q, userPicker) == false) {
                            cout << "You have answered incorrectly. So sorry about that." << endl;
                            userTotal.set_Count(ans.get_Count());
                            userCorrect = false;
                        }
                    }

            } else if (userPicker.get_chosenCategory() == string(1,'6')) {
                    if (userPicker.get_scienceLength() > 0) {
                        userPicker.questionSelect();
                        science.set_chosenQuestion(userPicker.get_chosenQuestion());
                        q = &science;
                        q->questionDisplay();

                        string userAnswer;
                        cin.ignore();
                        getline(cin, userAnswer);
                        q->set_Answer(userAnswer);

                        if (ans.correctCheck(q, userPicker) == true) {
                            std::cout << "You have answered correctly! Good job" << endl;
                            science.questionDelete();
                            userPicker.set_scienceLength(science.get_scienceLength());

                        } else if (ans.correctCheck(q, userPicker) == false) {
                            cout << "You have answered incorrectly. So sorry about that." << endl;
                            userTotal.set_Count(ans.get_Count());
                            userCorrect = false;
                        }
                    }
            }
        }
        LeaderScores player("NULL", userTotal.get_Count());
        leaderboard.updateLeaderBoard(player);

        cout << "The current leaderboard is:" << endl;
        LeaderScores* leaders = leaderboard.getLeaderArray();
        for (int i = 0; i < 3; i++) {
            cout << leaders[i].getLeaderName() << " " << leaders[i].getLeaderScore() << endl;
        }

        leaderboard.saveLeaders();

        cout << "Would you like to play again?" << endl
             << "(Please enter y for yes, or n for no)" << endl;
            string userDecision;
            cin >> userDecision;
            if (userDecision == string(1,'y')) {
                reset.resetScore(&userTotal);
                reset.resetQuestions(&history, &video, &general, &sport, &music, &science, &userPicker);

            } else if (userDecision == string(1,'n')) {
                replay = false;

            }
        }  
    return 0;
}