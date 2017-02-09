/* Name:        Luke Lopez
 * Prof:        April Browne
 * Assignment:  Mad Libs / lab15
 */
 
#include <iostream>
#include <string>
using namespace std;

int main() {
    
    // This is setting the variables neccessary for the program
    string plural_noun1;
    string plural_noun2;
    string plural_noun3;
    string your_name;
    string other_name;
    
    // This will ask user for all neccessary information.
    cout << "Please type your first name: ";
    cin >> your_name;
    
    cout << "Please enter the first name of someone you know: ";
    cin >> other_name;
    
    cout << "Pleae type in a plural noun: ";
    cin >> plural_noun1;
    
    cout << "Please type in another plural noun: ";
    cin >> plural_noun2;
    
    cout << "Just one more plural noun and we are done: ";
    cin >> plural_noun3;
    
    cout << "\nDear " << other_name << ",\n"
         << plural_noun1 << " are red,\n"
         << plural_noun2 << " are blue,\n"
         << "you love me and \n"
         << "I love " << plural_noun3 << "!\n"
         << "From " << your_name;
         
    
    
    
    
    
    
    
    
    
    
    return 0;
}