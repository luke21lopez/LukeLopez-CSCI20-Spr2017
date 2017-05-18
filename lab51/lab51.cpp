/* Luke Lopez
 * Prof. April Brown
 * lab 5.1 Lab pointers
 */
 
 // This program is a lab where I need to comment all relating 
 // topics to our subject "pointers" and explain what they do
 
 
#include <iostream> 
#include <iostream> 
#include <cstring> 
using namespace std;   

int main() {
    int nameLength = 0;
    string firststr = " ";// created needed string variable 
    char * name = new char; // this is creating a pointer of an array *name (error- fixed)

    cout << "Please enter a 10 letter word or less" << endl;
    cin >> name; // this is putting in data into the pointer's location

    char * head  = name; // this is now assigning the pointer *head with the value of name which is the input

    char * tail = name; // this is now assigning the pointer *tail with the value in the location of name
    nameLength = strlen(name);// this is finding the length of the string inside name pointer. error

    cout << "Your word is " << firststr << endl; // the variable firststr is not declared. error

    if (nameLength<10) // if namelength is less than 10 it will print out the value of pointer *head
    {
         while (*head != '\0')
         {
                cout << *head;
                head++;
         }
     }
     else
     {
          cout << "WARNING WORD TOO BIG TO DISPLAY!!" << endl; // this will print if the word is bigger than 10
     }

     cout << endl;

     tail = &name[strlen(name) - 1]; // this is assigning the defreverenced variable of name and counting 
     // the amount of letters in the name and and subtracting 1

     if (nameLength < 10) // this is determining the if the namelength is less than 10
     {
          while (tail != name) // while tail is not the name print out the pointer tail. which does not exist . error
          {
                 cout << *tail;
                 tail--;
          }
     }
     cout << endl;

     head = name;
     tail = &name[strlen(name) - 1];// counting length of dereferenced variable name subtracting 1

     head++; // adding 1 value to head variable
     tail--; // subracting 1 value from tail variable

     if (*head == *tail) // if they equal
     {
         cout << "It is an palindrome!" << endl;
     }
     else // if they do not equal
     {
         cout << "It is not an palindrome" << endl;
     }

     return 0; 
}