/* Name:    Luke Lopez
 * Class:   CSCI 20
 * Time:    Tues & Thurs 2pm - 4:15pm
 *
 * This program will prompt the user to guess the number that the computer has already
 * randomly selected (1-50). It will compare those to number and if it does not match. It will
 * inform the user whether it is too high or too low. Once the user has chosen the random
 * number the program will complete and inform the user they have accomplished the end of 
 * program.
 */

#include <iostream>
#include <cstdlib> // hold random number generator
#include <ctime> // ability to use current time for seeding random numbers

using namespace std;



int main(){
    
    srand(time(0)); // seeds the random number generator
    
    int randNumber = rand() % 50 + 1; // This will generate random number and store 1-50
    
    int userNumber; // this is the user's number
    
    // this will prompt the user to attempt and match the number that was
    // randomly generated by the computer.
    cout << "Try and guess the number the computer has generated!" << endl;
    cout << "Please enter a number from 1 - 50:  ";
    cin >> userNumber;
    
    
    //This is a while loop that will keep the inputs requested until
    // the number the user picks matches what is picked by the computer.
    
    
    while (userNumber != randNumber){ // loop continues when variabls are not the same
        if (userNumber < randNumber) { // this is if statement that states too low
            cout << "Too Low!"<< endl; // if the number they chose is lower than randNumber
            cin >> userNumber;
        } else if (userNumber > randNumber) { // same concept than above but with too high
            cout << "Too High!" << endl;
            cin >> userNumber;
            }
        }
        // this out put is after the loop has ended meaning the user has chosen the 
        // correct number breaks him out of the loop
    cout << "Just Right!" << endl;
    
    
    
    
    
    return 0;
}