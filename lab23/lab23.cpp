/*
 * Name: Luke
 * Prof: April Brown
 * Prjct: Lab 2.3
 */
#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;
 // This program will take two inputs from the user and will provide a random number
 // between the two number chose

 // declaring my random number function
void randomNumber(int, int);
 // declaring my swap number functions
void swapNumber(int&, int&);




int main() {
    
    // creating variables for user input
    int smallNumber;
    int bigNumber;
    // This will ask the user to input the two numbers and input them
    cout << "Thank you for using Random Number Generator.\n\nPlease enter two numbers.\n";
    cout << "What is the small number?: ";
    cin >> smallNumber;
    cout << "What is the big number?: ";
    cin >> bigNumber;
   
    // this will give the result after using the funcions.
    cout << "Your Random Number between " << smallNumber << " and " << bigNumber << " is "; 
    
    
    // this will call the random number function 
    randomNumber(smallNumber,bigNumber);
    
    
    

    
    
    return 0;
}

// This function will provide us a random number while using swap number function
void randomNumber(int a, int b){    
    srand(time(0));
    swapNumber(a,b);
    // this will make it so where the we pick a random number between the lowest and highest number
    if (a > b){
        cout << (rand() % a) + b;
    }
    else if( b > a) {
        cout << (rand() % b) + a;
        
    }
    else if (a = b) {
        cout <<"\n Your numbers cant be equal" << endl;
    }
        
    
   return; 
}

// this function will swap the number provided by the user
void swapNumber(int& a, int& b){
    
    int t = a;
    a = b;
    b = t;
    return;
}

