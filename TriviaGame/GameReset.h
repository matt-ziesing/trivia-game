#ifndef GAMERESET_H
#define GAMERESET_H

#include "History.h"
#include "UserChoices.h"
#include "VideoGames.h"
#include "GeneralKnowledge.h"
#include "Sports.h"
#include "Science.h"
#include "Music.h"
#include "AnswerCheck.h"

class GameReset {
public:
    // resets the user's score when called to be 0 for all objects that are used to contain the user's score,
    // and also resets the answers, so the player can enter them again and be correct
    void resetScore(CorrectTotal* playerTotal, AnswerCheck* ans);

    // resets the questions and length of the questions in every object that is used in the program
    void resetQuestions(History* history, VideoGames* video, GeneralKnowledge* general, 
                        Sports* sport, Music* music, Science* science, UserChoices* user);

} ;

#endif