#include "History.h"
#include "AnswerCheck.h"
#include "LeaderBoard.h"

#include <iostream>
using namespace std;

int main() {
    QuestionDisplay* q;
    History history;
    CategoryPicker userPicker;
    CorrectTotal userTotal;
    AnswerCheck ans;
    LeaderBoard leaderboard;
    
    leaderboard.establishLeaders();
    bool userCorrect = true;

    while (userCorrect == true) {
        //userPicker.set_historyLength(0);
        userPicker.categoryChoice();
            if (userPicker.get_historyLength() > 0) {

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

    return 0;
}