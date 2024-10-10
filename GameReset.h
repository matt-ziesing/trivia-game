#ifndef GAMERESET_H
#define GAMERESET_H

#include "History.h"
#include "CategoryPicker.h"
#include "VideoGames.h"
#include "GeneralKnowledge.h"
#include "Sports.h"
#include "Science.h"
#include "Music.h"
#include "CorrectTotal.h"

class GameReset {
public:
    void resetScore(CorrectTotal* playerTotal);
    void resetQuestions(History* history, VideoGames* video, GeneralKnowledge* general, 
                        Sports* sport, Music* music, Science* science, CategoryPicker* user);

} ;

#endif