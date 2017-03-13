/* Name: Luke Lopez
 * Prof: April Brown
 * Class: CSCI 20
 * Assignment: 2.0
*/

// This program will convert inches , meters, miles, and feet to the requested
// unit of measurement. 

#include <iostream>
#include <cmath>
using namespace std;

// This is the conversion class "Conversion"
class Conversion{
  
  // this is the declaration of our functions
  public:
  void setNumOfMiles(double);
  void setMilesFromFeet(double);
  void setFeetFromYards(double);
  void setMilesFromInches(double);
  void setMilesFromMeters(double);
  
  double getNumOfMiles();
  double getFeetFromMiles();
  double getInchesFromMiles();
  double getMetersFromMiles();
  double getYardsFromMiles();
  
  void printFunction(); // this function will print out the miles of measurement
  
  Conversion(); // this is the default constructor
  Conversion(double miles);// this is the overloaded constructor
  
  private:
  double miles_; // our one variable in private
  

};
  

  
  int main(){
    
    // This is our objects of the conversion class
    Conversion conversion_one;
    Conversion conversion_two;
    Conversion conversion_three;
    Conversion conversion_four;
    Conversion conversion_five;
    
    // This is is an object taking in the predefined amount 
    conversion_one.setNumOfMiles(1);
    conversion_one.printFunction();

    // this is taking in the requested unit of measurement and converting it to 
    // the requested amount
    conversion_two.setMilesFromFeet(16);
    cout <<"16 feet is " << conversion_two.getNumOfMiles() << " miles. " << endl;
    
    
    conversion_three.setFeetFromYards(20);
    cout << "20 yards is "<< conversion_three.getNumOfMiles() << " feet."<< endl;
    
    conversion_four.setMilesFromInches(100);
    cout << "100 inches is " << conversion_four.getNumOfMiles() << " miles." << endl;
    
    conversion_five.setMilesFromMeters(1);
    cout << "1 meter is " << conversion_five.getNumOfMiles() << " miles. "<< endl;
  
    
    
    
    return 0;
  }
  
// these are the function definitions.
// this function prints out conversions of the requested mile
void Conversion::printFunction(){
  cout << "Number of feet from " << getNumOfMiles() << " mile is " << getFeetFromMiles() << endl;
  cout << "Number of inches from " << getNumOfMiles()<< " mile is " <<   getInchesFromMiles() << endl;
  cout << "Number of meters from " << getNumOfMiles()<< " mile is " <<   getMetersFromMiles() << endl;
  cout << "Number of yards from "<< getNumOfMiles()<< " mile is " <<  getYardsFromMiles() << endl;
  return;
}
  
void Conversion::setNumOfMiles(double miles){
  miles_ = miles;
  return;
}
void Conversion::setMilesFromFeet(double feet){
  miles_ = feet / 5280;
  return;
}

void Conversion::setFeetFromYards(double yards){
  miles_ = yards * 3;
  return;
}

void Conversion::setMilesFromInches(double inches){
  miles_ = inches / 63360;
  return;
}

void Conversion::setMilesFromMeters(double meters){
  miles_ = meters / 1608.34;
  return;
}
double Conversion::getNumOfMiles(){
  return miles_;
}

double Conversion::getFeetFromMiles(){
  double feet = getNumOfMiles() * 5280;
  return feet;
}

double Conversion::getInchesFromMiles(){
  double inches = getNumOfMiles() * 63360;
  return inches;
}

double Conversion::getMetersFromMiles(){
  double meters = getNumOfMiles() * 1608.34;
  return meters;
}

double Conversion::getYardsFromMiles(){
  double yards = getNumOfMiles() * 1760;
  return yards;
}
  
   Conversion::Conversion(){
     miles_ = 1;
   }
   Conversion::Conversion(double miles){
    miles_ = miles;
  }