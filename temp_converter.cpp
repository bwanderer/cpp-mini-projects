/******************************************************************************

C++
Date: 5/21/2024
This program will convert temperatures. (Celsius, Fahrenheit, Kelvin)

*******************************************************************************/
#include <iostream>
using namespace std;

int main()
{
    int choice;
    double celsius, fahrenheit, kelvin;
    
    cout << "Let's convert temperatures! What do you want to convert?\n";
    cout << "1. Celsius to Fahrenheit and Kelvin\n" << "2. Fahrenheit to Celsius and Kelvin\n" <<                          
    "3. Kelvin to Fahrenheit and Celsius\n";
    cout << "Enter your choice: ";
    cin >> choice;
    
    
    switch (choice)
    {
        case 1: 
            cout << "Enter your temperature in Celsius: ";
            cin >> celsius;
            
            fahrenheit = (9.0/5.0) * celsius + 32;
            kelvin = celsius + 273.15;
            
            cout << "Your temperature in Fahrenheit is " << fahrenheit << "\n";
            cout << "Your temperature in Kelvin is " << kelvin << "\n";
                
            break;
        case 2:  
            cout << "Enter your temperature in Fahrenheit: ";
            cin >> fahrenheit;
            
            celsius = (5.0/9.0) * (fahrenheit - 32);
            kelvin = celsius + 273.15;
            
            cout << "Your temperature in Celsius is " << celsius << "\n";
            cout << "Your temperature in Kelvin is " << kelvin << "\n";
                
            break;
        case 3:
            cout << "Enter your temperature in Kelvin: ";
            cin >> kelvin;
            
            celsius = kelvin - 273.15;
            fahrenheit = (9.0/5.0) * celsius + 32;
            
            cout << "Your temperature in Fahrenheit is " << fahrenheit << "\n";
            cout << "Your temperature in Celsius is " << celsius << "\n";
                
            break;
        default:
            cout << "Invalid choice!\n";
            break;
                    
    return 0;
    }
}
