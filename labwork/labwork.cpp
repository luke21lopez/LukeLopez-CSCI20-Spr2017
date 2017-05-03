
/*
Write code that uses the input string stream inSS to read input data from string 
userInput, and updates variables userMonth, userDate, and userYear. Sample output if userinput
is "Jan 12 1992": Month: Jan
Date: 12
Year: 1992
*/







#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main(){


int size = 3;
    double *array;
    array = new double[size];
    for (int i=0; i<size; i++){
        array[i] = i;
    }
    
    for (int j=0; j<size; j++){
        cout<<j<<": "<<array[j]<<endl;
    }
    
    delete array;
    
    return 0;
}
