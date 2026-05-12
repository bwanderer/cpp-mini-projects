/* 

This program is intended to keep count of user inputted value, making sure it doesn't 
exceed user initialized capacity, using if else and while loops.
Date: August 2025

*/

#include <iostream>
#include <iomanip>  // Library needed for output formatting
using namespace std;

// Function for outputting formatted final values to user, using instructions from ICA sheet
int showvalues(int cap, int tot){
    
    cout << showpos;  // show value signs
    cout << "----------------------------------------------------------------------------------------------------------\n";
    cout << "Your capacity:\n";
    cout << setw(4) << setfill('0') << cap;
    cout << "\nYour accepted total:\n";
    cout << setw(4) << setfill('0') << tot;
    cout << "\n----------------------------------------------------------------------------------------------------------\n";

    return 0;
}

int main(){
    
    // Declaring and initializing some variables
    int capacity, slices, total;
    total = 0;
    
    // Communicating with user, giving context and prompting user to initialize needed values
    cout << "It's your lucky day! There's a ginormous cake in your fridge. How many slices can your stomach handle? ";
    cin >> capacity;
    cout << "Awesome, I will check in every five minutes to help control your cake intake.\nHow many will you start with? ";
    cin >> slices;
    
    if ((capacity > 0) && (slices > 0)){
    
        // While loop for continuous loop UNTIL test condition fails i.e. when capacity is reached or surpassed
        while (true){
            
            // Keeping running total 
            total += slices;
            
            // When total matches capacity, output values by calling function and end loop
            if (total == capacity){
                cout << "Go ahead, enjoy!\n";
                showvalues(capacity, total);
                break;
            }
            
            // When total exceeds capacity, subtract last user entry, output values by calling function, end loop
            else if (total > capacity){
                total -= slices;
                showvalues(capacity, total);
                break;
            }
            
            // When capacity hasn’t been reached or exceeded, loop is triggered again
            else if (total < capacity){
                cout << "Go ahead, enjoy!\n [5 mins later...]\nHow many more slices do you want now? ";
                cin >> slices;
            }
            
            // Catching an error that might occur
            else{   
                cout << "Possible input error. Restart program to start again.";
                break;
            }
        } 
    }
    
    // Catching an error that might occur
    else{
         cout << "Possible input error. Restart program to start again.";
    }
    
    return 0;
}
