#include "UserChoices.h"
#include <cstring>
#include <cctype>
#include <ctime>
#include <unistd.h>

UserChoices::UserChoices() {
    chosenCategory = '0'; // setting the default chosen category to be 0, which is not a choosable category
    chosenQuestion = -1; // sets the default chosen question to be -1, which is not a valid question
    
    historyLength = 5; // sets the correct initial amount of history questions
    videoGamesLength = 5; // sets the correct initial amount of video games questions
    generalKnowledgeLength = 5; // sets the correct initial amount of general knowledge questions
    sportsLength = 5; // sets the correct initial amount of sports questions
    musicLength = 5; // sets the correct initial amount of music questions
    scienceLength = 5; // sets the correct initial amount of science questions
}

void UserChoices::categoryChoice() {
    int loop_break = 0;

    // the below code is how the command window will prompt the user for their choice of category
    std::cout << "Which oh the quiz categories would you like" << std::endl
              << "(Please enter the number value given for the category)" << std::endl << std::endl
              << "1. History" << std::endl
              << "2. Video Games" << std::endl
              << "3. General Knowledge" << std::endl
              << "4. Sports" << std::endl
              << "5. Music" << std::endl
              << "6. Science" << std::endl;

    std::cin >> chosenCategory; // this allows the user to enter their category choice
    if (inputValidityCheck() == true) { // this checks to see if the user entered input contains only numbers
    // creating a loop as to stop all non-valid inputs from being entered

        while (loop_break == 0) { 
            // checks to see if input is between 1-6
            switch (stoi(chosenCategory)) {

                // to select the "History" category
                case 1:
                    // checks if there are still available questions in the category
                    if (historyLength > 0) {
                        std::cout << "You have chosen history." << std::endl;

                    } else {
                        // if there are no more available questions in the category
                        std::cout << "There are no more questions available in this category." << std::endl
                                  << "Please pick a different category." << std::endl;
                        sleep(2);
                    }
                    loop_break = 1;
                    break;

                // to select the "Video Games" category
                case 2:
                    // checks if there are still available questions in the class
                    if (videoGamesLength > 0) {
                        std::cout << "You have chosen Video Games." << std::endl;

                    } else {
                        // if no available questions left
                        std::cout << "There are no more questions available in this category." << std::endl
                                  << "Please pick a different category." << std::endl;
                        sleep(2);
                    }
                    loop_break = 1;
                    break;

                // to select the "General Knowledge" category
                case 3:
                    // checks to see if there are still available questions
                    if (generalKnowledgeLength > 0) {
                        std::cout << "You have chosen General Knowledge." << std::endl;

                    } else {
                        // if there are no available questions
                        std::cout << "There are no more questions available in this category." << std::endl
                                  << "Please pick a different category." << std::endl;
                        sleep(2);
                    }
                    loop_break = 1;
                    break;

                // to select the "Sports" category
                case 4:
                    // checks to see if there are still available questions
                    if (sportsLength > 0) {
                        std::cout << "You have chosen Sports." << std::endl;

                    } else {
                        // if there are no available questions left
                        std::cout << "There are no more questions available in this category." << std::endl
                                  << "Please pick a different category." << std::endl;
                        sleep(2);
                    }
                    loop_break = 1;
                    break;

                // to select the "Music" category
                case 5:
                    // checks whether there are still any available questions
                    if (musicLength > 0) {
                        std::cout << "You have chosen Music." << std::endl;

                    } else {
                        // if there are no available questions left
                        std::cout << "There are no more questions available in this category." << std::endl
                                  << "Please pick a different category." << std::endl;
                        sleep(2);
                    }
                    loop_break = 1;
                    break;

                // to select the "Science" category
                case 6:
                    // checks to see if there are still available questions
                    if (scienceLength > 0) {
                        std::cout << "You have chosen Science." << std::endl;

                    } else {
                        // if there are no available questions left
                        sleep(2);
                        std::cout << "There are no more questions available in this category." << std::endl
                                  << "Please pick a different category." << std::endl;
                        sleep(2);
                    }
                    loop_break = 1;
                    break;
        
                // if a non-valid input is detected
                default:
                    std::cout << "You have not entered a number between 1-6. Please enter a different input." 
                              << std::endl;

                    // rechecks the new user input to determine if it a valid user input
                    std::cin >> chosenCategory;
                    if (inputValidityCheck() == true) {
                        break;
                    }
            }
        }
    }
}

void UserChoices::questionSelect() {
    srand(time(0));
    if (chosenCategory == std::string(1,'1')) {
        chosenQuestion = 1 + (rand() % historyLength); 
    // sets the chosen question to be an available number in the vector containing all remaining history questions

    } else if (chosenCategory == std::string(1,'2')) {
        chosenQuestion = 1 + (rand() % videoGamesLength);
    /* sets the chosen question to be an available number in the vector containing all remaining 
    video game questions */

    } else if (chosenCategory == std::string(1,'3')) {
        chosenQuestion = 1 + (rand() % generalKnowledgeLength);
    // sets the chosen question to be an available number in the vector containing all remaining 
    // general knowledge questions

    } else if (chosenCategory == std::string(1,'4')) {
        chosenQuestion = 1 + (rand() % sportsLength);
    // sets the chosen question to be an available number in the vector containing all remaining sports questions
    

    } else if (chosenCategory == std::string(1,'5')) {
        chosenQuestion = 1 + (rand() % musicLength);
    // sets the chosen question to be an available number in the vector containing all remaining music questions

    } else if (chosenCategory == std::string(1,'6')) {
        chosenQuestion = 1 + (rand() % scienceLength);
    // sets the chosen question to be an available number in the vector containing all remaining science questions

    }
}

bool UserChoices::inputValidityCheck() {
    bool validInput;
    // while loop to create an infinite prompting loop until the user enters a valid input
    while (validInput == false) {
        // checks every entry by the player to determine if there are any non-digit inputs
        for (long unsigned int i = 0; i < chosenCategory.size(); i++) {
                // if a non-digit input is found
                if (isdigit(chosenCategory[i]) == 0) {
                    validInput = false;
                    std::cout << "You have not entered a valid input. Please try again" << std::endl;
                    std::cin >> chosenCategory;
                    break;
                
                // if no non-digit inputs are found
                } else {
                    validInput = true;
                }
        }
    }
    return validInput;
}

std::string UserChoices::get_chosenCategory() {
    return chosenCategory; // returns the numerical value associated with the category choice
}

void UserChoices::set_chosenCategory(std::string category) {
    UserChoices::chosenCategory = category; 
    // sets the number representing the category choice to be what was entered into the function
}

int UserChoices::get_chosenQuestion() {
    return chosenQuestion; // returns the chosen question by the player
}

void UserChoices::set_chosenQuestion(int question) {
    UserChoices::chosenQuestion = question; // sets the chosen question by the player to the given int
}

void UserChoices::questionDisplay() {
    std::cout << "NULL" << std::endl; // default questionDisplay to be overloaded by its child classes
}

void UserChoices::set_historyLength(int historyLength) {
    UserChoices::historyLength = historyLength; // sets the length of the history questions to the given int
}

void UserChoices::set_videoGameLength(int videoGameLength) {
    UserChoices::videoGamesLength = videoGameLength; 
    // sets the length of the video games length to the given int
}

void UserChoices::set_generalKnowledgeLength(int generalKnowledgeLength) {
    UserChoices::generalKnowledgeLength = generalKnowledgeLength;
    // sets the length of the general knowledge length to the given int
}

void UserChoices::set_sportsLength(int sportsLength) {
    UserChoices::sportsLength = sportsLength; // sets the sports length to the given int
}

void UserChoices::set_musicLength(int musicLength) {
    UserChoices::musicLength = musicLength; // sets the music length to the given int
}

void UserChoices::set_scienceLength(int scienceLength) {
    UserChoices::scienceLength = scienceLength; // sets the science length to the given int
}

int UserChoices::get_historyLength() {
    return historyLength; // returns the int representing the length of the history questions
}

int UserChoices::get_videoGameLength() {
    return videoGamesLength; // returns the int representing the video games length
}

int UserChoices::get_generalKnowledgeLength() {
    return generalKnowledgeLength;
    // returns the int representing the general knowledge length
}

int UserChoices::get_sportsLength() {
    return sportsLength; // returns the int representing the sports length
}

int UserChoices::get_musicLength() {
    return musicLength; // returns the int representing the music length
}

int UserChoices::get_scienceLength() {
    return scienceLength; // returns the int representing the science length
}