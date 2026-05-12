/******************************************************************************

C++
This program plays Rock, Paper, Scissors with the user.

*******************************************************************************/
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

int getComputerChoice();
void printMenu();
int chooseWinner(int, int);
string displayWordChoice(int);

int main()
{

    int computerChoice, playerChoice, winningPlayer;
    char playAgain;

    do
    {
        computerChoice = getComputerChoice();
        printMenu();
        cout << "What do you choose? ";
        cin >> playerChoice;
        while (playerChoice < 1 || playerChoice > 3)
        {
            cout << "That was not a valid choice. Try again." << endl;
            printMenu();
            cout << "What do you choose? ";
            cin >> playerChoice;
        }
        cout << endl << "You chose: " << displayWordChoice(playerChoice) <<
        endl;
        cout << "Computer chose: " << displayWordChoice(computerChoice) <<
        endl;
        winningPlayer = chooseWinner(playerChoice, computerChoice);
        if (winningPlayer == 1)
            cout << "*** You win! ***" << endl;
        else if (winningPlayer == 2)
            cout << "*** Computer Wins! ***" << endl;
        else
            cout << "*** It's a tie! ***" << endl;
            cout << endl << "Want to play again? (y/n): ";
            cin.ignore();
            cin.get(playAgain);
    } while (playAgain == 'Y' || playAgain == 'y');

    return 0;
}

int getComputerChoice()
{
    srand(time(0));
    int num = rand() % 3 + 1;
    
    return num;
}

void printMenu()
{
    cout << "Let's play Rock, Paper, Scissors!\n";
    cout << endl;
    cout << "1. Rock\n" << "2. Paper\n" << "3. Scissors\n";
}

int chooseWinner(int playerChoice, int computerChoice)
{
   int winnerNum;
   
    if (playerChoice == 1 && computerChoice == 3)
        winnerNum = 1;
    else if (playerChoice == 2 && computerChoice == 1)
        winnerNum = 1;
    else if (playerChoice == 3 && computerChoice == 2)
        winnerNum = 1;
    else if (playerChoice == computerChoice)
        winnerNum = 3;
    else 
        winnerNum = 2;
        
    return winnerNum;
}

string displayWordChoice(int choice)
{
   string wordChoice;
   
    if (choice == 1)
        wordChoice = "Rock";
    else if (choice == 2)
        wordChoice = "Paper";
    else if (choice == 3)
        wordChoice = "Scissors";
    else
        wordChoice = "Invalid choice";
        
    return wordChoice;
        
}
