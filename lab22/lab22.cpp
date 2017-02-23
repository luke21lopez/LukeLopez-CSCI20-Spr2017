/*
 * Name: Luke Lopez
 * Prof: April Brown
 * Lab 22 
*/


#include <iostream>
#include <cstdlib>// holds random operators
#include <ctime> // holds the time stamps
using namespace std;


// This program will simply generate a random number everytime it is ran.

int randomNumber(){
    srand(time(0)); // this will generate a random seed number provided by current time
    
    // this will print out a random number using the rand function rand() from 1-100
    cout << "Your random number is: " << rand() % (100 - 1) + 1  << endl;
    return 0;
}

int main() {
    
    
    // This will call our function
    randomNumber();
    
    
    
    return 0;
}