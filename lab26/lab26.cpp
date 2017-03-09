/* Name : Luke Lopez
 * Prof : April Brown
 * Class: CSCI 20
 * Lab: Lab 26
 */
 
#include <iostream>

using namespace std;

// This program will have predefined inputs for the base temperature. it will then calculate the 

// This is the class that will hold all of the functions and one variable inside of private
class TemperatureConverter{
  public:
  
  // These are our declaration of the functions
  void SetTempFromKelvin(double kelvin);
  double GetTempFromKelvin();
  
  void SetTempFromCelsius(double celcius);
  double GetTempAsCelsius();
  
  void SetTempFromFahrenheit(double fahrenheit);
  double GetTempAsFahrenheit();
  
  void PrintTemperatures(); // This function will provide us a view of converted temps
  
  TemperatureConverter();
  TemperatureConverter(double kelvin);
    
  private:
  double kelvin_; // this variable will hold the one variable of kelvin
    
    
};






int main ()
{
 
 // This is user input by professor.
    TemperatureConverter temp1; //testing default constructor
    TemperatureConverter temp2(274); //testing overloaded constructor
    
    temp1.PrintTemperatures();
    temp2.PrintTemperatures();
    
    temp1.SetTempFromKelvin(400.15); //testing mutator function
    cout << temp1.GetTempFromKelvin()<<endl;//testing accessor function
    temp1.PrintTemperatures();
    
    temp2.SetTempFromCelsius(32); //testing other functions
    cout << temp2.GetTempAsCelsius()<<endl;
    temp2.PrintTemperatures();
    
    temp2.SetTempFromFahrenheit(32);
    cout<<temp2.GetTempAsFahrenheit()<<endl;
    temp2.PrintTemperatures();
    
    return 0;
}
    
  void TemperatureConverter::SetTempFromKelvin(double kelvin){
      kelvin_ = kelvin;
      return;
  }
  double TemperatureConverter::GetTempFromKelvin(){
      return kelvin_;
  }
  // this is setting kelvin by celcius input
  void TemperatureConverter::SetTempFromCelsius(double celcius){
      kelvin_ = celcius + 273.15;
  }
  // this will return celcius from kelvin
  double TemperatureConverter::GetTempAsCelsius(){
      double celcius = kelvin_ - 273.15;
      return celcius;
  }
  // ths will convert fahrenheit into kelvin
  void TemperatureConverter::SetTempFromFahrenheit(double fahrenheit){
      kelvin_ = (5 * (fahrenheit -32)/9) + 273.15;
      return;
  }
  // this will convert celcius into fahrenheit
  double TemperatureConverter::GetTempAsFahrenheit(){
      double fahrenheit = ((GetTempAsCelsius() * 9) / 5 + 32);
      return fahrenheit;
  }
  
      // this function will print out all of our temperatures. 
      
   void TemperatureConverter::PrintTemperatures(){
    
         cout << "Temperature as Kelvin:  "<< GetTempFromKelvin() << endl;
         cout << "Temperature as Farenheit: "<< GetTempAsFahrenheit() << endl;
         cout << "Temperature as Celcius: " << GetTempAsCelsius() << "\n\n" << endl;
         return;
     }

  // this is our default constructors.
  TemperatureConverter::TemperatureConverter(){
      kelvin_ = 0;
  }
  TemperatureConverter::TemperatureConverter(double kelvin) {
      kelvin_ = kelvin;
  }