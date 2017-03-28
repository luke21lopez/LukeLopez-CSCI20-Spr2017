#include <iostream>
#include <cmath>
#include <string>
#include <cstdlib>


using namespace std;

/* This program will calculate an income tax for information provided by the user
 * It will calculate the income tax for a single person or a married person
 * The program will accept figures for ; Name, Filing Status, gross wages 
 * and the amount of tax already witheld.
 * it will then calulate the tax
 
 
 */

// This function takes in wages earned, marital status, and taxes witheld. it then 
// calculates what the person's actual taxable income is. 

double taxableIncome(int grossWages,char maritalStatus,double taxesHeld);
// This function will calculate the amount of money that needed to be paid to uncle sam
// if they did not pay enough throughout the year. it will output what is owed, or 
// if they have paid too much it will let the user know what there refund is.
void yourTaxesOwed(int,char,double);




int main() {
    int grossWages = 0; // wages earned
    double taxesHeld = 0; // taxes already taken
    char maritalStatus;  // married or single?
    string firstName;  // you know
    string lastName;  // you know
    
    
    // This will prompt user to input the necessary information.
    cout << "What is your first name: ";
    cin >> firstName;
    
    cout << "What is your last name: ";
    cin >> lastName;
    
    cout << "What was your gross income for last year? ";
    cin >> grossWages;
    
    cout << "How much taxes were with held: ";
    cin >> taxesHeld;
    
    cout << "Marital Status 's' for single and 'm' for married: ";
    cin >> maritalStatus;
    cout << "\n\n\n\n\n\n\n" << endl;// this is to put some space between the info inputted from info outputted.
    
    
    // This is the output of the results given. Uses the functions that are declared up top and defined below.
    cout << "Name: " << firstName << " " << lastName << endl;
    cout << "Total Adjusted Gross Income: " << taxableIncome(grossWages, maritalStatus, taxesHeld) << endl;
    cout << "Taxes Paid: " << taxesHeld << endl;
    yourTaxesOwed(grossWages,maritalStatus,taxesHeld);
    
    return 0;
}

// This will take in three variable. a int , char , and a double.
// It will determine whether the person is single or married 
// it will then give us taxable income.
double taxableIncome(int grossWages,char maritalStatus,double taxesHeld){
    
    int filingStatus;
    double taxableWages;
    // This will give marital status a number
    // It was changed to a number so I can easier put into a boolean condition
    switch(maritalStatus){
            case 's':
            case 'S':
            filingStatus = 1;
            break;
            case 'm':
            case 'M':
            filingStatus = 2;
            break;
        default:
            cout << "error" << endl;
    }
    
    
    // This will deduct the proper amount from the gross income to determine the taxable income
    if (filingStatus == 1) {
        taxableWages = grossWages - 3900;
    } else {
        taxableWages = grossWages - 7800;
    }
    
    
    
    return taxableWages;
    
}

// This function now calculates how much taxes are owed depending on the taxable income above
void yourTaxesOwed(int grossWagesT,char maritalStatusT,double taxesHeldT){
    double taxableWages = taxableIncome(grossWagesT,maritalStatusT,taxesHeldT); // I have called the taxableIncome Function which gives us the wages we work with
    double taxesOwed; // this is where we store how much taxes are owed
    double finalTaxes; // this is used one time to store original taxes owed
    
    if ((maritalStatusT == 's') || (maritalStatusT == 'S')){ // this condition is seperating the single from the married. 
      if (taxableWages <= 0) { // this condition states wether or not taxable income is enough to be taxed
          taxesOwed = 0;
      } else if (taxableWages <= 8925) { // this will continue to go down the bracket and determine the amount taxed
          taxesOwed = taxableWages * .10;  // taxes 10% for amount between 0-8925
    
      } else if ((taxableWages > 8925) && (taxableWages <= 36250)) { // condition to set amount parameters
          taxesOwed = 892.50 + ((taxableWages - 8925) * .15);  // this will tax 15% to amount between 8925 - 36250
      } else if ((taxableWages > 36250) && (taxableWages <= 87850)) {  // etc. etc.
          taxesOwed = 4991.25 + ((taxableWages - 36250)* .25);
      } else {
          taxesOwed = 17891.25 + ((taxableWages - 87850)* .28);
      }
    
    } else { // this condition was created to get a bracket for the married folks
        if (taxableWages <= 0) {
            taxesOwed = 0;
        } else if (taxableWages <= 17850) {  // condition for 10% between 0-17850
            taxesOwed = taxableWages * .10;
            
        } else if ((taxableWages > 17850) && (taxableWages <= 72500)) { // condition set for 15% 17850-72500
            taxesOwed = 1785 + ((taxableWages - 17850) * .15);
        } else {
            taxesOwed = 9982.50 + ((taxableWages - 72500)* .28);   // 72500 and up is taxed 28%
        }
    }
    
    // this provides us how much someone needs to pay in taxes
    finalTaxes = taxesOwed;
    cout << "Taxes owed: " << finalTaxes << endl;
    
    // this will provide us amount owed or refunded depending on the condition
    taxesOwed = taxesOwed - taxesHeldT;
    if(taxesOwed > 0){ // this condition will determine if they owe any taxes and tell the user one or the other
    cout << "Your final taxes owed: " << taxesOwed << endl;
    } else {
        taxesOwed = abs(taxesOwed); // abs is used to take a negative out of the figure when person get a refund.
        cout << "You get a refund of: " << taxesOwed << endl;
    }
    return;
}