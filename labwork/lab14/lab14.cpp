// Name: Luke Lopez
// Prof: April Browne
// Class: CSCI 20
// Project: lab14

// This program will calculate the number of coins provided by user

#include <iostream>
using namespace std;


int main() {
    
    // Variables needed for assignment
    int quarters = 25;
    int dimes = 10;
    int nickels = 5;
    int pennies = 1;
    int number_of_cents;
    int num_of_quart;
    int num_of_dimes;
    int num_of_nickels;
    int num_of_pennies;
    double total_money;
    double fees = 10.9/100;
    double fees_paid;
    double after_fees;
    // This will prompt user to input the amount of cents they have
    cout << "Please input the number of cents you have: ";
    cin >> number_of_cents;
    
    // This will confirm the amount of cents the user has entered
    cout << "You have entered " << number_of_cents << " cents." << endl;
    
    // This will break down the number of cents into quarters
    
    num_of_quart = number_of_cents / quarters;
    
    number_of_cents = number_of_cents % quarters;
    
    
    // Now this will break down the number of coins left with dimes
    
    num_of_dimes = number_of_cents / dimes;
    
    number_of_cents = number_of_cents % dimes;
    
    
    // This will break down the number of nickels
    
    num_of_nickels = number_of_cents / nickels;
    
    num_of_pennies = number_of_cents % nickels;
    
    // Pennies are now what is left of and is held by the variable number_of_cents
    

    // This will output how many of each coin the user has
    cout << "You have " << num_of_quart << " quarters.\n"
         << "You have " << num_of_dimes << " dimes.\n"
         << "You have " << num_of_nickels << " nickels.\n"
         << "And " << num_of_pennies << " pennies." << endl;
         
    // This will add up all of your coins and provide a dollar value     
    total_money = static_cast<double>(num_of_quart * quarters) + static_cast<double>(num_of_dimes * dimes) + static_cast<double>(num_of_nickels * nickels) + static_cast<double>(num_of_pennies *pennies);
    
    // This will set the correct dollar value to the total coins
    total_money = total_money / 100;
    
    // This will display total dollar amount of coins
    cout << "Putting your total at $" << total_money << " dollars.\n";
    
    // This calculates the fees incurred
    fees_paid = total_money * fees;
    
    // This outputs the fees
    cout << "Fees paid: $" << fees_paid << endl;
    
    // This calculates money made after fees
    after_fees = total_money - fees_paid;
    
    // This outputs your total take home money
    cout << "Your total after fees are : $"<< after_fees << "." << endl;
    
    
    
    
    return 0;
}