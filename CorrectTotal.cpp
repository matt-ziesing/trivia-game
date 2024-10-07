#include "CorrectTotal.h"

CorrectTotal::CorrectTotal() {
    totalCorrectCount = 0; 
}

void CorrectTotal::correctCheck(QuestionDisplay* question) {
    set_Count(get_Count()); // default state of the function just the correct count ot be what it was before
}

int CorrectTotal::get_Count() {
    return totalCorrectCount; // gets the total correct count
}

void CorrectTotal::set_Count(int totalCorrectCount) {
    CorrectTotal::totalCorrectCount = totalCorrectCount; // sets the total correct count to the given int
}