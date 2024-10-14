#include <iostream>
#include <cstring>
#include <cctype>
#include <unistd.h>
using namespace std;

/*int main() {
    string test;
    getline(cin, test);

    for (size_t j = 0; j < test.size(); j++) { // Note: size_t is preferred over long unsigned int
        if (test[j] == ' ') {
            test.erase(j, 1); 
            j--;// Erase the space
            // No increment of j here, so we check the new character at index j
        }
        test[j] = tolower(test[j]);
    }

    cout << test << endl;

    return 0;
}*/

int main() {
    system("clear");
    cout << "You have answered " << endl;
    sleep(1);
    system("clear");
    cout << "You have answered ." << endl;
    sleep(1);
    system("clear");
    cout << "You have answered .." << endl;
    sleep(1);
    system("clear");
    cout << "You have answered ..." << endl;
    sleep(1);
    system("clear");
    return 0;
}