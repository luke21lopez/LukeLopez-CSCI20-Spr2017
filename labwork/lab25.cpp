/* Name:  Luke Lopez
 * Prof:  April Brown
 * Class: Csci 20
 * Lab25
 */
 
#include <iostream>
#include <string>

using namespace std;

// this is our class that hold information and functions regarding book info given by user
class Book{
  public:
    void setTitle(string); // declaration of title
    string getTitle(); // declaring get title
    string getAuthor();
    void setAuthor(string);
    string getCopyright();
    void setCopyright(string);
    void setYear(int);
    int getYear();
    void printFunction();
    void askBook(string, string, string, int);
  // this is the private section of the class that cannot be touched
  private:
    string title; // private variable
    string author; // private variable
    string copyright; // private variable
    int year; // private variable
    
};


    
    
    
int main(){
   // these are objects of the book class
   Book bookOne;
   Book bookTwo;
   Book bookThree;
   Book bookFour;
   Book bookFive;
   // these are variables used within main
   string title;
   string author;
   string copyright;
   int year;
   
   // This is the function that asks for the book information
   bookOne.askBook(title,author,copyright,year);
   bookTwo.askBook(title,author,copyright,year);
   bookThree.askBook(title,author,copyright,year);
   bookFour.askBook(title,author,copyright,year);
   bookFive.askBook(title,author,copyright,year);
   
   
   

   // This is the function that will show you all the books you have inputted
   bookOne.printFunction();
   bookTwo.printFunction();
   bookThree.printFunction();
   bookFour.printFunction();
   bookFive.printFunction();
   

   return 0; 
}

// this function will recieve booktitle and set it in the title variable
void Book::setTitle(string bookTitle) {
    title = bookTitle;
    return;
}
// this will return the title
string Book::getTitle(){
    return title;
}
// set author variable
void Book::setAuthor(string bookAuthor) {
    author = bookAuthor;
    return;
}
// return author variable 
string Book::getAuthor(){
    return author;
}
// set copyright variable
void Book::setCopyright(string bookCopyright){
    copyright = bookCopyright;
    return;
}
// return the copyright
string Book::getCopyright(){
    return copyright;
}
// this will set year variable
void Book::setYear(int bookYear){
    year = bookYear;
    return;
}
// this will get the year and return it
int Book::getYear(){
    return year;
}
// this will print out the book information
void Book::printFunction(){
    cout << "Title: " << getTitle() << endl;
    cout << "Author: "<< getAuthor()<< endl;
    cout << "Copyright: "<< getCopyright() << endl;
    cout << "Year: " << getYear() << endl;
    return;
}
// this will ask for book info and set them by calling the functions
void Book::askBook(string title, string author, string copyright, int year){
    
    cout << "Book Title: ";
    getline(cin,title);
    
    cout << "Book Author: ";
    getline(cin,author);
    
    cout << "Book copyright: ";
    getline(cin, copyright);
    cout << "Year: ";
    cin >> year;
    setTitle (title);
    setAuthor (author);
    setCopyright (copyright);
    setYear (year);
    return;
}