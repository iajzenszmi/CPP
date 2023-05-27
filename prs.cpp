#include <iostream>
#include <string>

using namespace std;

int main() {
  // Display the game menu
  cout << "Welcome to Rock-Paper-Scissors! Choose your weapon: " << endl;
  cout << "1. Rock" << endl;
  cout << "2. Paper" << endl;
  cout << "3. Scissors" << endl;

  // Get the user's choice
  int user_choice;
  cin >> user_choice;

  // Generate the computer's choice
  int computer_choice = rand() % 3 + 1;

  // Compare the user's choice to the computer's choice
  if (user_choice == computer_choice) {
    cout << "It's a tie!" << endl;
  } else if ((user_choice == 1 && computer_choice == 3) ||
             (user_choice == 2 && computer_choice == 1) ||
             (user_choice == 3 && computer_choice == 2)) {
    cout << "You win!" << endl;
  } else {
    cout << "The computer wins!" << endl;
  }

  // Play again?
  char play_again;
  cout << "Would you like to play again? (y/n) ";
  cin >> play_again;

  if (play_again == 'y') {
    return main();
  } else {
    cout << "Thanks for playing!" << endl;
    return 0;
  }
}

