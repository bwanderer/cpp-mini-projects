/******************************************************************************

C++
Date: 6/24/2024
This program will take users’ weight on Earth and convert it to what they would weigh on different planets.

*******************************************************************************/
#include <iostream>
using namespace std;

int main() {

    double earthWeight, planetWeight;
    int planet;

    cout << "What is your weight on Earth?\n";
    cin >> earthWeight;

    cout << endl << "Select a number according to what planet you want to convert your weight to.\n" << "1. Mercury\n" << "2. Venus\n" 
    << "3. Mars\n" << "4. Jupiter\n" << "5. Saturn\n" << "6. Uranus\n" << "7. Neptune\n";
    cin >> planet;

    switch (planet)
    {
        case 1:
            planetWeight = earthWeight * 0.38;
            cout << "Your weight on Mercury is " << planetWeight << ".\n";
            break;
        case 2:
            planetWeight = earthWeight * 0.91;
            cout << "Your weight on Venus is " << planetWeight << ".\n";
            break;
        case 3:
            planetWeight = earthWeight * 0.38;
            cout << "Your weight on Mars is " << planetWeight << ".\n";
            break;
        case 4:
            planetWeight = earthWeight * 2.34;
            cout << "Your weight on Jupiter is " << planetWeight << ".\n";
            break;
        case 5:
            planetWeight = earthWeight * 1.06;
            cout << "Your weight on Saturn is " << planetWeight << ".\n";
            break;
        case 6:
            planetWeight = earthWeight * 0.92;
            cout << "Your weight on Uranus is " << planetWeight << ".\n";
            break;
        case 7:
            planetWeight = earthWeight * 1.19;
            cout << "Your weight on Neptune is " << planetWeight << ".\n";
            break;
        default:
            cout << "You did not select a valid planet.";
            break;
    }

    return 0;
}
