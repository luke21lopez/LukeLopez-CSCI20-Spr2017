#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>


using namespace std;


class Student{
    public:
    Student();
    Student(string firstName,string lastName,char answers[]);
    void setStudent(string firstname,string lastname,char answers[])
        
       
    
    
    
    private:
    int num_of_students_;
    string firstName_;
    string lastName_;
    int number_of_answers_ = 21;
    char studentAnswers_[99];
};




int main() {
    const int NUMBER_OF_STUDENTS = 6;
    const int NUM_OF_ANSWERS = 21;
    string studentdata_;
    string lastName = " ";
    string firstName = " "; 
    char answers[NUM_OF_ANSWERS];
    

    int n;
    
    
    Student s[NUMBER_OF_STUDENTS];
    
    ifstream fin;
    fin.open("studentanswers.txt");
    fin >> n;
    if(!fin.is_open()) {
        cout << "Could not open file studentanswers.txt " << endl;
        return 1;
    }
    
    for (int i = 0; i < NUMBER_OF_STUDENTS; i++){
        s[i].getData();
    }
   
  

    return 0;
}


