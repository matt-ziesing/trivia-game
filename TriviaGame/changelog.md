This changelog lists all the implemented changes to the final version of the code from the Project Plan:

1. The QuestionDisplay class's abstract class no longer takes in the integer representing the chosen category or the string containing the chosen question.

2. The proposed classes of CategoryPicker and QuestionSelector have been completely merged with the new UserChoices class containing all the encapsulated data from both of the mergees.

3. A new function called inputValidityCheck() has been added to the UserChoices function as a defensive programming action to not accept any invalid inputs from user's when selecting the desired question trivia category.

4. The UserChoices class now contains extra attributes that represent how many questions are left in every trivia category.

5. The relationship between the History, Video Game, General Knowledge, Sports, Music & Science classes now inherit from the UserChoices class as to allow the question display method to properly work.

6. The AnswerCheck class's attribute now contains pointers to multiple arrays representing every category's answers instead of only containing one pointer to a single array of every answer.

7. The GameReset's function called resetQuestions() now includes pointers to all the previous objects instead of the object itself, and also contains a pointer to a UserChoices object.