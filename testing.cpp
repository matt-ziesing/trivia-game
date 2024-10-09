#include "History.h"
#include "AnswerCheck.h"
#include "LeaderBoard.h"
#include "GameReset.h"

#include <iostream>
using namespace std;

int main() {
    QuestionDisplay* q;
    History history;
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
        //userPicker.set_historyLength(0);
        userPicker.categoryChoice();
        //cout << history.get_historyLength() << endl;
            if (userPicker.get_historyLength() > 0) {
                //cout << userPicker.get_historyLength() << endl;
                userPicker.questionSelect();
                history.set_chosenQuestion(userPicker.get_chosenQuestion());
                q = &history;
                q->questionDisplay();
    
                string userAnswer;
                cin >> userAnswer;
                q->set_Answer(userAnswer);

                if (ans.correctCheck(q) == true) {
                    cout << "You have answered correctly! Good job" << endl;
                    history.questionDelete();
                    userPicker.set_historyLength(history.get_historyLength());

                } else if (ans.correctCheck(q) == false) {
                    cout << "You have answered incorrectly. So sorry about that." << endl;
                    userTotal.set_Count(ans.get_Count());
                    userCorrect = false;
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
            reset.resetQuestions(&history, &userPicker);

        string* questions1 = history.get_Questions();
        for (int i = 0; i < userPicker.get_historyLength(); i++) {
            cout << questions1[i] << endl;
        }

        } else if (userDecision == string(1,'n')) {
            replay = false;
        }
    }
    return 0;
}