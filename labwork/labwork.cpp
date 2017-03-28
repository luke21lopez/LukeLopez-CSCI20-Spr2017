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
       if (bracketChoice == 1)
    {
        agi = agi - 3900;
    } else (bracketChoice == 2); {
        agi = agi - 7800;
    }
    
    cout << "Your adjusted gross income is: " << agi << endl;
    
    if (bracketChoice == 1){
        if ((agi > 0) && (agi <= 8925))
        {
            taxes = agi * bracketOne;
        } 
        else if ((agi > 8925) && (agi <= 36250))
        {
            taxes = 892.50 + ((agi - 8925) * bracketTwo);
        } 
        
        else if ((agi > 36250) && (agi <= 87850)) 
        
        {
            taxes = 4991.25 + ((agi - 36250) * bracketThree);
        } 
        
        else  (agi > 87850) ;
        {
                taxes = 17891.25 +((agi - 87850) * bracketFour);
        }
        
    } 
    else if (bracketChoice == 2) {
        
        if ((agi > 0) && (agi <= 17850))
        {
            taxes = agi * bracketOne;
        } 
        
        else if ((agi > 17850) && (agi <= 72500 ))
        {
            taxes = 1785 + ((agi - 17850) * bracketTwo);
        } 
        else  (agi > 87850) ;
        {
            taxes = 9982.50 +((agi - 87850) * bracketFour);
        }
     
      }
     else { 
         cout << "incorrect character" << endl;
        
     }

    cout << taxes << endl;
    cout << withHeld << endl;

return taxes;
}

    double bracketOne = 0.10;
    double bracketTwo = 0.15;
    double bracketThree = 0.25;
    double bracketFour = 0.28;
    double taxes = 0;