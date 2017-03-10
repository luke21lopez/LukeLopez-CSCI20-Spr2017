//Created By: April Browne
 //Created On: 8/22/2016
 
#include <iostream> //*
#include <cmath> 
#include <string>
using namespace std; //*
 
class Salary
{
    private: 
        double annual;
    public:
        void SetAnnualSalary(double salary)
        {
            annual = salary;
        }
        double GetAnnualSalary()
        {
            return annual;
        }
        void Print()
        {
             cout<<"$"<<annual<<endl;
        }
        Salary();
};
Salary::Salary(){
  annual = 0;
  return;
}

int main() {
  
Salary mySalary;
mySalary.GetAnnualSalary();
  
cout << mySalary.GetAnnualSalary();  
  
  
  
  
  return 0;
 }
    /*
   cout << "Title of  book: " << endl;
   cin >> title;
   cout << "Author: " << endl;
   cin >> author;
   cout << "Copyright: "<< endl;
   cin >> copyright;
   cout << "year: " << endl;
   cin >> year;
   bookOne.setTitle(title);
   bookOne.setAuthor(author);
   bookOne.setCopyright(copyright);
   bookOne.setYear(year);
   cout << "Title of second book: "<< endl;
   cin >> title;
   cout << "Author: " << endl;
   cin >> author;
   cout << "Copyright: "<< endl;
   cin >> copyright;
   cout << "year: " << endl;
   cin >> year;
   bookTwo.setTitle(title);
   bookTwo.setAuthor(author);
   bookTwo.setCopyright(copyright);
   bookTwo.setYear(year);
   cout << "Title of second book: "<< endl;
   cin >> title;
   cout << "Author: " << endl;
   cin >> author;
   cout << "Copyright: "<< endl;
   cin >> copyright;
   cout << "year: " << endl;
   cin >> year;
   bookThree.setTitle(title);
   bookThree.setAuthor(author);
   bookThree.setCopyright(copyright);
   bookThree.setYear(year);
   cout << "Title of second book: "<< endl;
   cin >> title;
   cout << "Author: " << endl;
   cin >> author;
   cout << "Copyright: "<< endl;
   cin >> copyright;
   cout << "year: " << endl;
   cin >> year;
   bookFour.setTitle(title);
   bookFour.setAuthor(author);
   bookFour.setCopyright(copyright);
   bookFour.setYear(year);
   cout << "Title of second book: "<< endl;
   cin >> title;
   cout << "Author: " << endl;
   cin >> author;
   cout << "Copyright: "<< endl;
   cin >> copyright;
   cout << "year: " << endl;
   cin >> year;
   bookFive.setTitle(title);
   bookFive.setAuthor(author);
   bookFive.setCopyright(copyright);
   bookFive.setYear(year);
   
   cout <<"Title One: " << bookOne.getTitle() << endl;
   cout <<"Author One: "<< bookOne.getAuthor() << endl;
   cout <<"Copyright One: " << bookOne.getTitle() << endl;
   cout <<"Year: " << bookOne.getYear() << endl;
   cout <<"Title Two: "<< bookTwo.getTitle() << endl;
   */
   