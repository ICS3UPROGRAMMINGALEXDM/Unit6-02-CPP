// Copyright (c) 2022 Alex De Meo All rights reserved
//
// Created By: Alex De Meo
// Date: 04s//22
// Description: generates 10 random numbers and finds the number with the
// greatest value
#include <time.h>
#include <random>
#include <array>
#include <iostream>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::stof;
using std::array;

// setting the max size
const int MAX_SIZE = 10;

// This function will go through the array and find the number with the
// greatest value
int findMax(array<int, MAX_SIZE>ints) {
    // This is the variable that will hold the highest value
    int largest = -1;

    for (int counter = 0; counter < ints.size(); counter++) {
        // WIll only set "largest" to the number it's comparing it to, if the
        // number is greater than the number it's currently olding
        if (largest < ints[counter]) {
            largest = ints[counter];
        }
    }
    // returning to main
    return largest;
}


int main() {
    // creating the array
    array<int, MAX_SIZE> intArr;
    // setting the seed
    srand(time(NULL));
    // generating random numbers
    for (int counter = 0; counter < intArr.size(); counter++) {
        int randomNumber = (rand() % 99 + 1) + 1;
        // putting the random numbers into the array
        intArr[counter] = randomNumber;
        cout << "Position " << counter << " is " << intArr[counter] << endl;
    }
    // calling the function that will find the max value
    int maxValue = findMax(intArr);
    // displaying results
    cout << endl << "The max value is " << maxValue;
}
