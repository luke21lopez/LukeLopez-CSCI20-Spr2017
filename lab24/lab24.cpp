/* 
 * Name: Luke Lopez
 * Prof: April Brown
 * Lab 24
 */

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


// This lab will take in two integers inputted by the user.
// Then it will find a random number between those numbers.
// it will use that random numbers as pounds and convert it into kilograms
// then it will covert the kilograms back into pounds



int randomNumber(int, int); // Declaring randomNumber

void swapNumber(int&,int&); // Declaring swapNumber

double PoundsToKilograms(double); // Declaring pounds to kilograms

double KilosToPounds(double); // Declaring kilos to pounds function

int main() {
    
    double userPounds = 0.0; // only in main
    double userKilos = 0.0; // only in main
    double lowNumber = 0.0; // only in main
    double highNumber = 0.0; // only in main
    double ranNumber = 0.0; // only in main
    
    // Prompting user to provide us two integers
    cout << "Please provide two numbers lowest being the first.\n"
         << "What is your low number? ";
    cin >> lowNumber;
    cout << "What is your high number? ";
    cin >> highNumber;
    
    // this is calling random number generator and storing it in to varialb ranNumber
    ranNumber = randomNumber(lowNumber,highNumber);
    // display result
    cout << "Your random number is: " << ranNumber;
    userPounds = ranNumber;
    
    cout << "\nYou have " << userPounds << " lbs." << endl;
    
    ranNumber = PoundsToKilograms(ranNumber);
    userKilos = ranNumber;
    cout << "That is equal to " << userKilos << " kilos!"<< endl;
    
    userPounds = KilosToPounds(userKilos);
    cout << "That coverts back to " << userPounds << " lbs.\n";
    
    
    
    return 0;
}

int randomNumber(int a, int b){    
    srand(time(0)); // global found in library
    swapNumber(a,b);
    double ranNumber; // scope is this fuction
    // this will make it so where the we pick a random number between the lowest and highest number
    if (a > b){
        ranNumber = (rand() % a) + b;
    }
    else {
        ranNumber = (rand() % b) + a;
        
    }
    
    
   return ranNumber; 
}

// this function will swap the number provided by the user
void swapNumber(int& a, int& b){ // int a and int b are in this function and random number function
    
    int t = a; // here and randomnumber function
    a = b;
    b = t;
    return;
}

double PoundsToKilograms(double pounds) { // pounds is in this function and main scope
    double totalKilos = 0; // only in this function
    
    totalKilos = pounds * (1/2.2);
    
    return totalKilos; // this will return the value to where it is called
}

// this function definition will calculate the number of pounds to kilos

double KilosToPounds(double kiloGrams) { // kilograms is in this functionand main scope function
    double totalPounds = 0; // only in this function
    
    totalPounds = kiloGrams * 2.2;
    
    return totalPounds;
    
}