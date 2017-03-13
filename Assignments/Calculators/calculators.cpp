/* Name : Luke Lopez
 * Class: CSCI 20
 * Prof : A.Browne
 * Assignment: 1.0 Calculators
*/
    // This program will calculate a person's check after deductions. The user will be prompted to input
    // A person's first and last name, there rate of pay, and the amount of hours worked. 
    // The program will then deduct health deduction predeterimined and taxes that is set at 17%.
    // It till then print out there gross,deductions, and net pay. 
    
#include <iostream>
#include <cmath>
#include <string>
using namespace std;
    
struct employee
{
    string firstName;
    string lastName;
    double _wage;
    int _hrswrkd;
};
    
    
int main() {
    
    employee _user; // Use of struct for employee input
    double gross_pay; // pay total before deductions
    double net_pay; // pay after deductions
    int _health = 130; // health insurance
    
    // This will prompt user for there information
    cout << "Thank you for using, How Much is My Check!\n";
    cout << "\nPlease provide us your first and last name: ";
    cin >> _user.firstName >> _user.lastName;
    cout << "\nWhat is your rate of pay? : ";
    cin >> _user._wage;
    cout << "\nHow many hours did you work this week? :";
    cin >> _user._hrswrkd;
    
    
    // determines Gross pay for employee
    gross_pay = _user._wage * _user._hrswrkd; 
    
    // This will determine taxes on there income
    double _taxes = (gross_pay / 100) * 17; 
    
    // This will determine if employee is full time and pays insurance
    if ( _user._hrswrkd <= 39 ) 
    {
    _health = 0;
    net_pay = gross_pay - _taxes;
    }
    else
    {
    // This equation determines the employee's take home pay
    net_pay = (gross_pay - _health) - _taxes;
    }
    // Will provide user results of there check from info provided
    cout << "\nEmployee:    "<< _user.firstName << " "<< _user.lastName << ".\n";
    cout << "--------------------------- "<< endl;
    cout << "Rate of Pay: $"<< _user._wage <<".\n";
    cout << "Hours Worked: "<< _user._hrswrkd << endl;
    
    cout << "\nDeductions:\n";
    cout << "----------------------------" << endl;
    cout << "Medical Insurance: $" << _health << endl;
    cout << "Taxes: $"<< _taxes << endl;
    
    cout << "\n----------------------------" << endl;
    cout << "Gross Pay: $" << gross_pay << endl;
    cout << "Net pay:   $" << net_pay << endl;
    
         

     return 0;
}