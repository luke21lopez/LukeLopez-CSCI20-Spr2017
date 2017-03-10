// Luke Lopez
// Prof. Brown
// 1.3 Lab - Integers 02/02/2017

// This program will calculate the population in the world given the 
// number of years provided by the user

#include <iostream>
using namespace std;


int main () {
    
    // Needed Variables
    int User_input; // the number of years
    int Current_Pop = 324472916; // Our current population
    int yearly_growth = 2102400; // Number of people growing per day
    int New_pop;
    int Our_year = 2017;
    // Ask the user to provide us the number of years.
    cout << "Please enter a number of years: ";
    // This is when the user inputs the number of years
    cin >> User_input;
    

    // multiplying the number of years by yearly growth, while adding to current population
    New_pop = Current_Pop + (User_input * yearly_growth);
    
    cout << "In " << Our_year + User_input << " years, the population will be " << New_pop << " people\n" << endl;
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    return 0;
}