/* Name: Luke Lopez
 * Prof: April Brown
 * Assingment: lab45
 This program is responsible for creating user names for a new website you have created.  The program accepts a first name of up to 10 characters 
 and a last name of up to 20 characters. It will tell the user if the name is larger than the max size.  It will also determine if 
 the names are the same and output a warning. then the username will be suggested at the end.
*/




#include <iostream>
#include <string>// library that will be most used


using namespace std;



int main(){
    const int MAX_FIRST = 10; // max characters in first name
    const int MAX_LAST = 20; // max characters in last name
    const int USER_NAME = 20; // max characters in username
    
    bool nameGood = false; // boolean needed in name checks
    bool notMatching = true; // this boolean will be used to make sure names do not match
    int length; // variable to count the length of a string
    
    
    string userFirst; // string for first name
    string userLast; // string for last name
    
    string userNameOne; // user name number 1
    string userNameTwo; // user name number 2
    string userNameThree; // user name number 3
    
    // this loop is to make sure the names do not match.
    while(notMatching == true){ // this is a loop that will go until the condition is changed. 
    
    while (nameGood == false){ // this loop is made to make sure the name is not too long. 
    cout << "What is your first name? Must be 10 or less characters. " << endl;
    cin >> userFirst;
    length = userFirst.length(); // this string function counts the length of the input
    
    if (length < MAX_FIRST){ // this is an if statement that will change the boolean if criteria is met
        nameGood = true;
      } else { // if it is too long. this will be printed and the loop will restart
          cout << "Must be less than 10 characters. " << endl;
      }
    }
    nameGood = false; // the boolean is set back to its previous setting so it may be reused for the last name
    
    while (nameGood == false){ // this is a loop that will run until last name criteria is met. 
    cout << "What is your last name? Must be 20 or less characters. " << endl; 
    cin >> userLast;
    length = userLast.length(); // this counts the characters in the last name
    
    if (length < MAX_LAST){ // this condition is to make sure that the name is not too long
        nameGood = true; // boolean will change and allow this to pass.
      } else { // will print the needed parameters
          cout << "Must be less than 20 characters. " << endl;
      }
    }    
    
    if (userFirst == userLast){// this will make sure that the names will not match
        cout << "Your first name can not match your last! " << endl;
        nameGood = false;
      } else {
          notMatching = false;
      }
        
    }
    
    cout << "Your name is " << userFirst << " " << userLast << endl;
    
    for(int i = 0; i < ; i++) { // loop to go through name and lower case all capital letters
        userFirst[i] = tolower(userFirst[i]); // lowercases first name
        userLast[i] = tolower(userLast[i]); // lowercases last name.
    }
    
    userNameOne = userFirst.append(userLast); // this will set up the first username
    userNameTwo = userFirst.replace(2, MAX_FIRST,userLast); // the second username will replace the first name after the first two characters
    userNameThree = userFirst.replace(1,MAX_FIRST,userLast); // this will replace the first name with the last name keeping the first character
    
    
    // prints out suggeested user names
    cout << "Here are your usernames: " << endl;
    cout << userNameOne << endl;
    cout << userNameTwo << endl;
    cout << userNameThree << endl;
    
    
    return 0;
}