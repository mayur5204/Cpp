#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(NULL)); // seed the random number generator with the current time
    int computer_choice = rand() % 3; // generate a random number between 0 and 2
    int user_choice;
    
    cout << "Welcome to Rock-Paper-Scissors!\n";
    cout << "Enter 0 for Rock, 1 for Paper, or 2 for Scissors: ";
    cin >> user_choice;
    
    if (user_choice < 0 || user_choice > 2) {
        cout << "Invalid choice. Please enter 0, 1, or 2.\n";
        return 0;
    }
    
    cout << "You chose ";
    switch (user_choice) {
        case 0:
            cout << "Rock.\n";
            break;
        case 1:
            cout << "Paper.\n";
            break;
        case 2:
            cout << "Scissors.\n";
            break;
    }
    
    cout << "The computer chose ";
    switch (computer_choice) {
        case 0:
            cout << "Rock.\n";
            break;
        case 1:
            cout << "Paper.\n";
            break;
        case 2:
            cout << "Scissors.\n";
            break;
    }
    
    if (user_choice == computer_choice) {
        cout << "It's a tie!\n";
    } else if ((user_choice == 0 && computer_choice == 2) ||
               (user_choice == 1 && computer_choice == 0) ||
               (user_choice == 2 && computer_choice == 1)) {
        cout << "You win!\n";
    } else {
        cout << "The computer wins!\n";
    }
    
    return 0;
}
