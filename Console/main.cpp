#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void play_game()
{
    int random = (rand() % 10) + 1;
    cout << " Guess a number between 1 to 10: ";
    int guess;

    while (true) {
        cin >> guess;

        if (guess == random) {
           cout << "You win\n";
           break;
        }
        else if (guess < random) {
            cout << "You are too low\n";
        }
        else {
            cout << "Your are too high\n";
        }
    }

}

int main()
{
    srand(time(NULL));

    int choice;
    cout << "1. Play Game " << "2. Quit \n";

    cin >> choice;
    switch(choice)
    {
        case 1:
            play_game();
            break;
        case 2:
            cout << "quiting........ \n";
            break;
    }
}
