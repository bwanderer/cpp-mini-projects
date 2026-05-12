/******************************************************************************

C++
The program will allow the user to play a guessing game.
Date: 3/10/2024

*******************************************************************************/
#include <iostream>
#include <cstdlib>
#include <ctime> 
using namespace std;

int main()
{
    srand(time(0));
    
    int upperGuessingLimit,
        userGuess,
        numberOfTries = 0;
    bool playAgain = true,
        validResponse = true;
    char userResponse;
        
        
    cout << "Welcome to the guessing game! I'll choose a random number between 1 and a limit of your choice, and you guess what it is.\n";
    cout << "How high would you like the guessing range to be? ";
    cin >> upperGuessingLimit;
        
    int randomNumber = rand() % upperGuessingLimit + 1;
    
    cout << "I'm thinking of a number! What is it? ";
    
    while (playAgain)
    {
        numberOfTries += 1;
        cin >> userGuess;
        if (userGuess == randomNumber)
        {
            if (numberOfTries == 1)
                cout << "You guessed it! It took " << numberOfTries << " try. Thanks for playing!\n";
            else 
                cout << "You guessed it! It took " << numberOfTries << " tries. Thanks for playing!\n";
            cout << "Would you like to play again? Y/N: ";
            cin >> userResponse;
            if (userResponse == 'y' || userResponse == 'Y')
            {
                playAgain = true;
                numberOfTries = 0;
                cout << "I'm thinking of a number! What is it? ";
            }
            else if (userResponse == 'n' || userResponse =='N')
                playAgain = false;
        }   
        else if (userGuess > randomNumber)
            cout << "Too high. Try again: ";
        else 
            cout << "Too low. Try again: ";
    }
    

    return 0;
}
