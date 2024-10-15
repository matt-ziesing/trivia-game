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
    QuestionDisplay* question;
    History history;
    VideoGames video;
    GeneralKnowledge general;
    Sports sport;
    Music music;
    Science science;
    UserChoices userPicker;
    CorrectTotal userTotal;
    AnswerCheck ans;
    LeaderBoard leaderboard;
    GameReset reset;
    
    system("clear");

    bool replay = true;
    while (replay == true) {
        // reads the locally saved best scores from a text file, ans sets them as the current leaderboard
        leaderboard.establishLeaders();
        bool userCorrect = true;

        while (userCorrect == true) {
            if (ans.get_Count() < 30) {
                userPicker.categoryChoice();

                if (userPicker.get_chosenCategory() == string(1,'1')) {

                    // only runs this code if there are questions remaining in the category to avoid any 
                    // unexpected bugs
                    if (userPicker.get_historyLength() > 0) {
                        // clears console before giving the question so the display output is more refined
                        system("clear");

                        userPicker.questionSelect();
                        history.set_chosenQuestion(userPicker.get_chosenQuestion());

                        // displays question using an abstract class in questionDisplay class
                        question = &history;
                        question->questionDisplay();

                        string userAnswer;
                        // uses a cin.ignore() and getline() function to allow for user input with a space in the
                        // answer
                        cin.ignore();
                        getline(cin, userAnswer);
                        question->set_Answer(userAnswer);

                        if (ans.correctCheck(question, userPicker) == true) {
                            // if true the question and answer are deleted
                            system("clear");
                            cout << "You have answered correctly! Good job" << endl;
                            history.questionDelete();
                            userPicker.set_historyLength(history.get_historyLength());

                        } else {
                            // if incorrect, breaks the while loop allowing for more questions to be answered
                            cout << "You have answered incorrectly. So sorry about that." << endl;
                            userTotal.set_Count(ans.get_Count());
                            userCorrect = false;
                        }
                    }

                } else if (userPicker.get_chosenCategory() == string(1,'2')) {
                    // only runs following code if there is still a question left in category
                    if (userPicker.get_videoGameLength() > 0) {
                        // clears console to make the display in the command window more refined
                        system("clear");
                        userPicker.questionSelect();
                        video.set_chosenQuestion(userPicker.get_chosenQuestion());

                        // uses abstract class to display question
                        question = &video;
                        question->questionDisplay();

                        string userAnswer;
                        // uses cin.ignore() and getline() to allow user to enter spaces in their user answer
                        cin.ignore();
                        getline(cin, userAnswer);
                        question->set_Answer(userAnswer);

                        if (ans.correctCheck(question, userPicker) == true) {
                            // deletes the answer and question if correct
                            system("clear");
                            cout << "You have answered correctly! Good job" << endl;
                            video.questionDelete();
                            userPicker.set_videoGameLength(video.get_videoGameLength());

                        } else {
                            // breaks the while loop allowing for more questions and answers if incorrect
                            cout << "You have answered incorrectly. So sorry about that." << endl;
                            userTotal.set_Count(ans.get_Count());
                            userCorrect = false;
                        }
                    }

                } else if (userPicker.get_chosenCategory() == string(1,'3')) {
                    // only runs following code if a question is remaining in the category
                    if (userPicker.get_generalKnowledgeLength() > 0) {

                        // clears console so the command window display is more refined for user experience
                        system("clear");
                        userPicker.questionSelect();
                        general.set_chosenQuestion(userPicker.get_chosenQuestion());

                        // abstract class used to display question
                        question = &general;
                        question->questionDisplay();

                        string userAnswer;
                        // uses cin.ignore() and getline() to allow user to enter space characters in their response
                        cin.ignore();
                        getline(cin, userAnswer);
                        question->set_Answer(userAnswer);

                        if (ans.correctCheck(question, userPicker) == true) {
                            // deletes question and answer if correct
                            system("clear");
                            cout << "You have answered correctly! Good job" << endl;
                            general.questionDelete();
                            userPicker.set_generalKnowledgeLength(general.get_generalKnowledgeLength());

                        } else {
                            // breaks while loop allowing for more questions if incorrect
                            cout << "You have answered incorrectly. So sorry about that." << endl;
                            userTotal.set_Count(ans.get_Count());
                            userCorrect = false;
                        }
                    }

                } else if (userPicker.get_chosenCategory() == string(1,'4')) {
                    // only runs code if there is a question remaining in the category
                    if (userPicker.get_sportsLength() > 0) {

                        // clears the console so that the command window display is more refined
                        system("clear");
                        userPicker.questionSelect();
                        sport.set_chosenQuestion(userPicker.get_chosenQuestion());

                        // astract class used to display question
                        question = &sport;
                        question->questionDisplay();

                        string userAnswer;
                        // uses cin.ignore() and getline() to allow users to answer a space in their response
                        cin.ignore();
                        getline(cin, userAnswer);
                        question->set_Answer(userAnswer);

                        if (ans.correctCheck(question, userPicker) == true) {
                            // deletes question and answer if correct
                            system("clear");
                            cout << "You have answered correctly! Good job" << endl;
                            sport.questionDelete();
                            userPicker.set_sportsLength(sport.get_sportsLength());

                        } else {
                            // breaks while loop allowing for more questions if incorrect
                            cout << "You have answered incorrectly. So sorry about that." << endl;
                            userTotal.set_Count(ans.get_Count());
                            userCorrect = false;
                        }
                    }

                } else if (userPicker.get_chosenCategory() == string(1,'5')) {
                    // only runs if there is at least one question left in category
                    if (userPicker.get_musicLength() > 0) {
                        
                        // clears console so that the command window display is more refined for better user
                        // experience
                        system("clear");
                        userPicker.questionSelect();
                        music.set_chosenQuestion(userPicker.get_chosenQuestion());
                        
                        // abstract class used to display question
                        question = &music;
                        question->questionDisplay();

                        string userAnswer;
                        // uses cin.ignore() and getline() to allow for users to include spaces in their response
                        cin.ignore();
                        getline(cin, userAnswer);
                        question->set_Answer(userAnswer);

                        if (ans.correctCheck(question, userPicker) == true) {
                            // deletes question and answer if correct
                            system("clear");
                            cout << "You have answered correctly! Good job" << endl;
                            music.questionDelete();
                            userPicker.set_musicLength(music.get_musicLength());

                        } else {
                            // breaks while loop allowing for more questions if incorrect
                            cout << "You have answered incorrectly. So sorry about that." << endl;
                            userTotal.set_Count(ans.get_Count());
                            userCorrect = false;
                        }
                    }

                } else if (userPicker.get_chosenCategory() == string(1,'6')) {
                    // only runs if there is at least one question left in category
                    if (userPicker.get_scienceLength() > 0) {
                        
                        // clears console so that the command window display is more refined for better user
                        // experience
                        system("clear");
                        userPicker.questionSelect();
                        science.set_chosenQuestion(userPicker.get_chosenQuestion());

                        // abstract class used for question display
                        question = &science;
                        question->questionDisplay();

                        string userAnswer;
                        // cin.ignore() and getline() used to allow users to enter spaces into their response
                        cin.ignore();
                        getline(cin, userAnswer);
                        question->set_Answer(userAnswer);

                        if (ans.correctCheck(question, userPicker) == true) {
                            // deletes question and answer if correct
                            system("clear");
                            std::cout << "You have answered correctly! Good job" << endl;
                            science.questionDelete();
                            userPicker.set_scienceLength(science.get_scienceLength());

                        } else {
                            // breaks while loop allowing for more questions if incorrect
                            cout << "You have answered incorrectly. So sorry about that." << endl;
                            userTotal.set_Count(ans.get_Count());
                            userCorrect = false;
                        }
                    }
                }    
            } else if (ans.get_Count() == 30) { 
                // displays different text if all questions have been answered and effectively ends the game
                system("clear");
                cout << "You have successfully answered every question in every category. Good job!" << endl << endl;
                userTotal.set_Count(ans.get_Count());
                userCorrect = false;
            }
        }
        // default player name set as NULL as the name will get updated if it is a highscore.
        LeaderScores player("NULL", userTotal.get_Count());
        leaderboard.updateLeaderBoard(player);

        // displays the all time leaders in the local version of the game
        cout << endl << "The current leaderboard is:" << endl;
        LeaderScores* leaders = leaderboard.getLeaderArray();
        for (int i = 0; i < 3; i++) {
            cout << leaders[i].getLeaderName() << ": " << leaders[i].getLeaderScore() << endl;
        }

        // saves the current leaders to a local file for the next runtime use
        leaderboard.saveLeaders();
        
        bool validInput = false;
        cout << endl << "Would you like to play again?" << endl
             << "(Please enter y for yes, or n for no)" << endl;

        // this while loop is a defensive technique used to ascertain only valid inputs and not allow any
        // non-valid inputs
        while (validInput == false) {
                string userDecision;
                cin >> userDecision;
                if (userDecision == string(1,'y')) {
                    // resets all questions, answers and the user score
                    reset.resetScore(&userTotal, &ans);
                    reset.resetQuestions(&history, &video, &general, &sport, &music, &science, &userPicker);
                    validInput = true;

                } else if (userDecision == string(1,'n')) {
                    // ends the game and thanks the player for playing it
                    replay = false;
                    validInput = true;
                    system("clear");
                    cout << "Thank you for playing the trivia game :)" << endl;

                } else {
                    cout << "You have not entered a valid input. Please try again." << endl
                         << "(Only enter y for yes, and n for no)" << endl;
                    
                }
            }
        }  
    return 0;
}