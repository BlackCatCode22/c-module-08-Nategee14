#include <iostream>
using namespace std;

int main() {
    cout << "\nWelcome to my Sorting Program!\n" << endl;

    // Create variables 
    int temp = 0;

    // Create an int array of nine elements.
    int arrayOfNine[9];

    // Fill the array using numbers 1-9.
    arrayOfNine[0] = 9;
    arrayOfNine[1] = 8;
    arrayOfNine[2] = 7;
    arrayOfNine[3] = 6;
    arrayOfNine[4] = 5;
    arrayOfNine[5] = 4;
    arrayOfNine[6] = 3;
    arrayOfNine[7] = 2;
    arrayOfNine[8] = 1;

    // Output the array.
    cout << "\nArray before sorting: " << endl;
    for (int i = 0; i < 9; i++) {
        cout << arrayOfNine[i] << " ";
    }

    // Do the bubble sort
    for (int i = 0; i < 9; i++) {
        // I know I must loop through my array n-1 times, and then n-1 times
        // n = 9.
        for (int j = 0; j < 9; j++) {
            if (arrayOfNine[j] > arrayOfNine[j+1]) {
                // Swap the elements.
                temp = arrayOfNine[j];
                arrayOfNine[j] = arrayOfNine[j+1];
                arrayOfNine[j+1] = temp;
            }
        }
        // Output the array after an inner loop
        cout << "\nArray after i is " << i << endl;
        cout << arrayOfNine[i] << endl;
    }
    return 0;
}