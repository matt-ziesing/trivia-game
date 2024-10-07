#include "History.h"
#include "VideoGames.h"
#include "GeneralKnowledge.h"
#include "Sports.h"
#include <iostream>
using namespace std;

int main() {
    QuestionDisplay* q;
    History history;
    VideoGames video;
    GeneralKnowledge general;
    Sports sport;
    CategoryPicker userPicker;

    userPicker.categoryChoice();

    if (userPicker.get_chosenCategory() == string(1,'1')) {
        userPicker.questionSelect();
        history.set_chosenQuestion(userPicker.get_chosenQuestion());
        q = &history;
        q->questionDisplay();

    } else if (userPicker.get_chosenCategory() == string(1,'2')) {
        userPicker.questionSelect();
        video.set_chosenQuestion(userPicker.get_chosenQuestion());
        q = &video;
        q->questionDisplay();

    } else if (userPicker.get_chosenCategory() == string(1,'3')) {
        userPicker.questionSelect();
        general.set_chosenQuestion(userPicker.get_chosenQuestion());
        q= &general;
        q->questionDisplay();

    } else if (userPicker.get_chosenCategory() == string(1,'4')) {
        userPicker.questionSelect();
        sport.set_chosenQuestion(userPicker.get_chosenQuestion());
        q = &sport;
        q->questionDisplay();
        
    }

    return 0;
}