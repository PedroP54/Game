#include <iostream>
#include <fstream>
#include <ostream>
#include <cstdlib>


using namespace std;

int main() { // Beginning Main

    int attempts, random_number, user_number, wins_message, losses_message, q_message, wins, losses, game;
    string answer = "Y";


    wins = 0;
    losses = 0;
    attempts = 0;

    cout << endl;
    cout << "WELCOME TO GUESS THE NUMBER" << endl;
    cout << endl;
    cout << "*DIRECTIONS*: TRY TO GUESS THE MAXIMUM AMOUNT OF NUMBERS (from 1-100), YOU HAVE 20 ROUNDS." << endl;
    cout << endl;
    cout << "LETS BEGIN";
    cout << endl;
    cout << endl;

    game = 0;
    do { // Do while answer still Yes    
        game = game + 1;
        wins = 0;
        losses = 0;
        cout << endl;
        cout << "================= GAME " << game << " =================" << endl;
        cout << endl;
        do { // Do while attempts still under 20

            user_number = 0;
            attempts = attempts + 1;

            srand(time(0));
            random_number = rand() % 100 + 1;

            cout << "***Round No. " << 21 - attempts << "***" << endl;
            cout << "The random number is: " << random_number << endl;

            cout << "Guess the number: ";
            cin >> user_number;
            cout << endl;
            cout << "RESULT: ";

            if (user_number == random_number) { // If W

                wins = wins + 1;
                wins_message = rand() % 10 + 1;

                switch (wins_message) { // Switch wins
                case 1:
                    cout << "Correct!";
                    break;
                case 2:
                    cout << "Correct! Nice Job";
                    break;
                case 3:
                    cout << "Correct! Can you do it again?";
                    break;
                case 4:
                    cout << "Correct. Keep it up!";
                    break;
                case 5:
                    cout << "Correct. No way you can guess it again.";
                    break;
                case 6:
                    cout << "Correct. Ok Ok, I Bet you $20 that you can´t do it again";
                    break;
                case 7:
                    cout << "Correct -_- ,  You won´t win next time";
                    break;
                case 8:
                    cout << "Correct, Congrats!";
                    break;
                case 9:
                    cout << "Correct, There´s no way this is happening, it will be harder to guess next time.";
                    break;
                case 10:
                    cout << "Correct!  ";
                    break;
                } // End Switch W
                cout << endl;
            }  // End If W



            if (user_number != random_number) { // If L

                losses = losses + 1;
                losses_message = rand() % 10 + 1;
                q_message = rand() % 10 + 1;

                switch (losses_message) { // Switch Loses
                case 1:
                    cout << "Incorrect.";
                    break;
                case 2:
                    cout << "Incorrect. Maybe next time.";
                    break;
                case 3:
                    cout << "No, Wrong Number";
                    break;
                case 4:
                    cout << "Nope, incorrect";
                    break;
                case 5:
                    cout << "Correct!!! Naah hahahaha jk. Incorrect";
                    break;
                case 6:
                    cout << "Failed, incorrect";
                    break;
                case 7:
                    cout << "Incorrect, come on try harder.";
                    break;
                case 8:
                    cout << "Incorrect, HAHAHAHAHA Not even close";
                    break;
                case 9:
                    cout << "NOOOO! --> Incorrect";
                    break;
                case 10:
                    cout << "I n C o R r e C t";
                    break;
                } // End Switch L
                cout << endl;
            }  // End If L
            cout << endl;
            cout << endl;
        } while (attempts < 20);

        attempts = 0;
        cout << "==== GAME RESULTS ===" << endl;
        cout << endl;
        cout << "Rounds Won (W): " << wins << endl;
        cout << "Rounds Lost (L): " << losses << endl;
        cout << endl;
        q_message = rand() % 10 + 1;

        switch (q_message) { // Switch Question
        case 1:
            cout << "Wanto to try to guess Again? (Y/N): ";
            cin >> answer;
            break;
        case 2:
            cout << "Do you want to play again? (Y/N): ";
            cin >> answer;
            break;
        case 3:
            cout << "Play Again? (Y/N): ";
            cin >> answer;
            break;
        case 4:
            cout << "Do you have more free time to play again? (Y/N): ";
            cin >> answer;
            break;
        case 5:
            cout << "I know you want to play again. Play Again? (Y/N): ";
            cin >> answer;
            break;
        case 6:
            cout << "One more round? Play Again? (Y/N): ";
            cin >> answer;
            break;
        case 7:
            cout << "Let´s play again? (Y/N): ";
            cin >> answer;
            break;
        case 8:
            cout << "Insert Coin hahahaha. Play Again? (Y/N): ";
            cin >> answer;
            break;
        case 9:
            cout << "One more game? (Y/N): ";
            cin >> answer;
            break;
        case 10:
            cout << "Last Game? Play Again? (Y/N): ";
            break;
            cin >> answer;
        } // End Switch Question
        cout << endl;
    } while (answer == "Y" || answer == "y");


} //End Main