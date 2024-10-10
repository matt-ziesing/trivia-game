#include "GameReset.h"

#include <iostream>

void GameReset::resetScore(CorrectTotal* playerTotal) {
    playerTotal->set_Count(0);
}

void GameReset::resetQuestions(History* history, VideoGames* video, GeneralKnowledge* general, 
                               Sports* sport, Music* music, Science* science, CategoryPicker* user) {

    std::string* historyQuestions = new std::string[5]{};
    historyQuestions[0] = "When did Australia achieve Federation?";
    historyQuestions[1] = "In what year did WWII end?";
    historyQuestions[2] = "In which country was Albert Einstein Born In?";
    historyQuestions[3] = "Who was the first Emperor of Rome?";
    historyQuestions[4] = "How many United States presidents have been assassinated?";
    history->set_Questions(historyQuestions);
    history->set_maxQuestions(5);
    user->set_historyLength(5);

    std::string* videoQuestions = new std::string[5]{};
    videoQuestions[0] = "What is the name of the most frequent main protagonist in the Metal Gear series?";
    videoQuestions[1] = "What is the best-selling video game of all time?";
    videoQuestions[2] = "When was Fortnite: Battle Royal released?";
    videoQuestions[3] = "What is the name of the first video game ever created?";
    videoQuestions[4] = "Which popular mobile game's concept was conceived due to an April Fool's Day prank?";
    video->set_Questions(videoQuestions);
    video->set_maxQuestions(5);
    user->set_videoGameLength(5);

    std::string* generalQuestions = new std::string[5]{};
    generalQuestions[0] = "What did the iconic 'Red Skin' lolly change their name to in 2020?";
    generalQuestions[1] = "What is tallest mountain on Earth?";
    generalQuestions[2] = "What is the name of the all-time highest grossing film?";
    generalQuestions[3] = "According to the Guiness World Records, what is the best-selling book of all time?";
    generalQuestions[4] = "What is the collective noun for a group of crows?";
    general->set_Questions(generalQuestions);
    general->set_maxQuestions(5);
    user->set_generalKnowledgeLength(5);

    std::string* sportQuestions = new std::string[5]{};
    sportQuestions[0] = "What is the acronym name for the international governing body of soccer?";
    sportQuestions[1] = "Who won the 2024 AFL Grand Final?";
    sportQuestions[2] = "How many numbers are on a dartboard?";
    sportQuestions[3] = "What jersey number did Michael Jordan wear for a brief period after returning from his" 
                        " 1995 retirement?";
    sportQuestions[4] = "What is the maximum number of points a person can score in a single game of bowling?";
    sport->set_Questions(sportQuestions);
    sport->set_maxQuestions(5);
    user->set_sportsLength(5);

    std::string* musicQuestions = new std::string[5]{};
    musicQuestions[0] = "What band was Freddie Mercury part of?";
    musicQuestions[1] = "What is the last name of a classical composer that was deaf?";
    musicQuestions[2] = "What is the name of the first music video to ever air on MTV?";
    musicQuestions[3] = "What famous guitarist is known for playing with his teeth?";
    musicQuestions[4] = "What classical song can be used to perform CPR?";
    music->set_Questions(musicQuestions);
    music->set_maxQuestions(5);
    user->set_musicLength(5);

    std::string* scienceQuestions = new std::string[5]{};
    scienceQuestions[0] = "What is the process by which plants convert sunlight into energy?";
    scienceQuestions[1] = "Which is the part of the Earth that humans live in?";
    scienceQuestions[2] = "What is known as \"The powerhouse of the cell\"?";
    scienceQuestions[3] = "What is the name of the biggest muscle in the entire human body?";
    scienceQuestions[4] = "What is the largest desert on Earth?";
    science->set_Questions(scienceQuestions);
    science->set_maxQuestions(5);
    user->set_scienceLength(5);
}