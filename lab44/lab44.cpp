/* Name: Luke Lopez
 * Prof: April Brown
 * Assingment: lab44
 This program is responsible for creating user names for a new website you have created.  The program accepts a first name of up to 10 characters 
 and a last name of up to 20 characters. It will tell the user if the name is larger than the max size.  It will also determine if 
 the names are the same and output a warning. then the username will be suggested at the end.
*/




#include <iostream>
#include <cstring>// new library that will be most used


using namespace std;






int main(){
    const int MAX_FIRST = 10; // max characters in first name
    const int MAX_LAST = 20; // max characters in last name
    const int USER_NAME = 20; // max characters in username
    
    char userFirst[MAX_FIRST] = " "; // array of characters for first name
    char userLast[MAX_LAST] = " "; // array of charcters in the last name
    
    char userNameOne[USER_NAME] = " "; // username one array
    char userNameTwo[USER_NAME] = " "; // username two array
    char userNameThree[USER_NAME] = " "; // username three array
    
    bool firstnameGood = true; // booleans that will assist in while loops to make sure user inputs correct chars
    bool lastnameGood = true;
    bool name = true;
    int length = 0; // this will be the variable to hold the count of chars. 
    int i = 0;
    int j = 0;
    
    while(name == true){
    // while loop so that first name meets requirements specified. below ten characters
    while (firstnameGood == true) { // boolean condition so the first name portion keeps running till done correctly
    cout << "Please provide your first name , maximum of 10 characters: " << endl;
    cin >> userFirst;
    length = strlen(userFirst); // cstring function that counts the number of char in side of the input
    if (length > MAX_FIRST) { // condition that tells whether the input is too long
        cout << "The first name is too long, 10 max characters. " << endl; 
    } else { // this will change the boolean so the program can continue
        firstnameGood = false;
    }
    }
    // while loop to make sure that the name the user uses is less than 20 characters
    while (lastnameGood == true) { // boolean to identify whether the last name requirements are made
    cout << "Please provid your last name, maximum of 20 characters: " << endl;
    cin >> userLast;
    length = strlen(userLast); // this cstring function will count the number of characters in the input
    if (length > MAX_LAST) { // condition will let us know whether it is bigger than the max characters allowed
        cout << "The last name is too long, 20 max characters. " << endl;
    } else { // if all is good change boolean so loop will end
        lastnameGood = false;
    }
    }
    
    if (strcmp(userFirst,userLast) == 0){ // this cstring function will tell us whether or not the first and last name are the same
        cout << "Your first and last name can not be the same! " << endl; // if it is they will be told to start over
        firstnameGood = true; // this resets the value of the above conditions back if that is the case
        lastnameGood = true;
    } else { // if everything is good it will end the loop so user names are generated.
        name = false;
    }
    }
    cout << "Your name is " << userFirst << " " << userLast << endl << endl;
    
    for (i = 0; i < MAX_FIRST; i++){  // this for loop will run through the characters and put them all to lower cases. 
        userFirst[i] = tolower(userFirst[i]); 
    }
    for (i = 0; i < MAX_LAST; i++){  // same as function right about it
        userLast[i] = tolower(userLast[i]); 
        
    }    
    
    
    // this is setting up the first user name by combining the two.
    strcpy(userNameOne,userFirst); // this cstring function copies the first name to the username we made
    strncat(userNameOne,userLast,MAX_FIRST); // this cstring function adds the last name to the end of the username.
    
    
    strcpy(userNameTwo,userFirst); // this cstring function is copying the first name into the username two variable
    for ( i = 2; i < USER_NAME; i++){ // this for loop is going to run through the characters in the user name. and add/ replace the 
        userNameTwo[i] = userLast[i-2]; // characters after the first two of the first name to be made up with there last name
        
    }
    
    strcpy(userNameThree,userFirst); // this cstring function is copying the first name into the username three variable
    for ( i = 1; i < USER_NAME; i++){ // this for loop is going to run through the characters in the user name. and add/ replace the 
        userNameThree[i] = userLast[i-1]; // characters after the first two of the first name to be made up with there last name
        
    }
    
    
    
    cout << "Which username would you like to use?  " << endl;
    
    cout << userNameTwo << endl;
    cout << userNameOne << endl;
    cout << userNameThree << endl;
    
    
    
    
    
    
    return 0;
}