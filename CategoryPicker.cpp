#include "CategoryPicker.h"

CategoryPicker::CategoryPicker() {
    chosenCategory = 0; // setting the default chosen category to be 0, which is not a choosable category
}

void CategoryPicker::categoryChoice() {
    int loop_break = -1; // this variable is used to break out of the infinite while loop

    // the below code is how the command window will prompt the user for their choice of category
    std::cout << "Which oh the quiz categories would you like" << std::endl
              << "(Please enter the number value given for the category)" << std::endl << std::endl
              << "1. History" << std::endl
              << "2. Video Games" << std::endl
              << "3. General Knowledge" << std::endl
              << "4. Sports" << std::endl
              << "5. Music" << std::endl
              << "6. Science" << std::endl;

    std::cin >> CategoryPicker::chosenCategory; // this allows the user to enter their category choice

    while (loop_break < 0) { // creating a loop as to stop all non-valid inputs from being entered
        switch (chosenCategory) {

        // to select the "History" category
        case 1:
            std::cout << "You have chosen history." << std::endl;
            loop_break = 0;
            break;

        // to select the "Video Games" category
        case 2:
            std::cout << "You have chosen Video Games." << std::endl;
            loop_break = 0;
            break;

        // to select the "General Knowledge" category
        case 3:
            std::cout << "You have chosen General Knowledge." << std::endl;
            loop_break = 0;
            break;

        // to select the "Sports" category
        case 4:
            std::cout << "You have chosen Sports." << std::endl;
            loop_break = 0;
            break;

        // to select the "Music" category
        case 5:
            std::cout << "You have chosen Music." << std::endl;
            loop_break = 0;
            break;

        // to select the "Science" category
        case 6:
            std::cout << "You have chosen Science." << std::endl;
            loop_break = 0;
            break;
        
        // if a non-valid input is detected
        default:
            std::cout << "You have not entered a number between 1-6. Please enter a different input." << std::endl;
            std::cin >> CategoryPicker::chosenCategory; // allows the user to re-enter their category choice
            break;
        }
    }
}

int CategoryPicker::get_Category() {
    return chosenCategory; // returns the numerical value associated with the category choice
}

void CategoryPicker::set_Category(int category) {
    CategoryPicker::chosenCategory = category; 
    // sets the number representing the category choice to be what was entered into the function
}