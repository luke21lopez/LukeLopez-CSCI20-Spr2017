/* Name: Luke Lopez
 * Prof: April Brown
 * Assignment: Lab 4.1
 * This lab is to create an int array called arrayTools which will store a single 
 integer array and each of the following functions. Use April's Main function to run 
 your class. 
 Print -  print the array values on the screen in order
 Find_min - search the array between two sizes to return the location of the minimum value
 in that part of the array 
 Find_Max - 
 Find_Sum - return the sum of all values in the array
 Num_even/odd - count the number of even and odd numbers in the array
 Search - search the array for a specific value and return the location if the value is found and -1otherwise
 Is_sorted - check to see if array is sorted in ascending order
 
 */






#include <iostream>

using namespace std;


class ArrayTools {
  public:  
  void a(int array[]);
  void Print();
  int Find_min(int, int);
  int Find_max(int, int);
  int Find_sum();
  int Search(int);
  int Is_sorted();
  
};



int main(){
    

    
    
    const int SIZE = 10;
    int myArray[SIZE];
    
    for(int i = 0; i<SIZE;i++){
        cin >> myArray[i];
    }
    ArrayTools a(myArray);
    
    a.Print();
    cout<<"Min: "<<a.Find_min(0, 4)<<endl;
    cout<<"Max: "<<a.Find_max(5, 10)<<endl;
    cout<<"Sum = "<<a.Find_sum()<<endl;
    cout<<"Search 10"<<a.Search(10)<<endl;
    cout<<"Sorted? "<<a.Is_sorted()<<endl;
    
    
    
    return 0;
    
}


 
 
 void ArrayTool::Print(){
     
  for(int i = 0; i < 10; i++) {
      cout << myarray[i] << " " << endl;
      
  }
 

  return;    
  }
  int ArrayTools::Find_min(int low_number, int high_number){
      
      return 0;
  }
  int ArrayTools::Find_max(int, int){
      
      return 0;
  }
  int ArrayTools::Find_sum(){
      
      return 0;
  }
  int ArrayTools::Search(int){
      
      return 0;
  }
  int ArrayTools::Is_sorted(){
      
      return 0;
  }