/* 

This program is intended to help the user visualize and manage the packing process. 
Item weight will be displayed as 1's, filling as many boxes as needed without exceeding 
capacity of 10 lbs per box. 0's represent pounds that didn't take up space in the box.
Date: August 2025

*/

#include <iostream>
using namespace std; 

int main()
{
    int amount_items, item_weight;
    int capacity = 10;
    
    // prompting user to input item amount
    cout << "How many items do you have? ";
    cin >> amount_items;
    
    // if else loop to catch input error of negative numbers
    if (amount_items > 0){
        // initializing boxes array with amount_items as rows and capacity as column, and zeroing it
        int boxes[amount_items][capacity] = {};
        
            // for loop to prompt user to input weight of each item
            for (int i = 0; i < amount_items; i++){
                cout << "For item number " << i + 1 << ", how many lbs does it weigh? ";
                cin >> item_weight;
                
                // if else loop to catch input error of numbers outside of desired range, allowing user to retry
                if (item_weight > 0 && item_weight <= 10){
                    
                    // for loop to flip 0's into 1's depending on item_weight in each loop
                    for (int j = 0; j < item_weight; j++){
                        boxes[i][j] = 1;
                    }
                }
                else{
                    cout << "Input error. Please try again and enter a positive integer that does not exceed 10.\n";
                    i -= 1;
                }
            }
            
            // for loop to display a visual representation of boxes used
            for (int i = 0; i < amount_items; i++){
	    cout << showpos;
                cout << "Box " << i + 1 << ": [ ";
                for (int j = 0; j < capacity; j++){
                    cout << boxes[i][j] << " ";
                }
                cout << "]\n";
            }
    }
    else{
        cout << "Input error. Please try again and enter a positive integer.";
    }
    
    return 0;
}
