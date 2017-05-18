#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>


using namespace std;


class Student{
    public:
    Student();
    Student(string firstName,string lastName,char studentAnswers[],int num_of_students, int number_of_answers);
    void setStudent(string firstName_,string lastName_,char studentAnswers_[],int num_of_students);
    string getfirstName(){
        return firstName_;
    }
    string getlastName(){
        return lastName_;
    }
    char getstudentAnswers();
        
       
    
    
    
    private:
    int num_of_students_;
    string firstName_;
    string lastName_;
    int number_of_answers_;
    char studentAnswers_[];
};




int main() {
    const int NUMBER_OF_STUDENTS = 6;
    const int NUM_OF_ANSWERS = 21;
    string studentdata[NUMBER_OF_STUDENTS];
    string lastName = " ";
    string firstName = " "; 
    char answers[NUM_OF_ANSWERS];
    int i = 0;

    int n;
    
    
    Student s[NUMBER_OF_STUDENTS];
    
    ifstream fin;
    fin.open("studentanswers.txt");
    fin >> n;
    if(!fin.is_open()) {
        cout << "Could not open file studentanswers.txt " << endl;
        return 1;
    }

    while (!fin.eof()){ 
        fin >> s[i].firstName();
        fin >> s[i].lastName();
        i++;
   
  

    return 0;
}


Student::Student(){
    firstName_ = " "; 
    lastName_ = " "; 
    num_of_students_ = 0;
    number_of_answers_ = 21;
    for(int i = 0; i < 6; i++){
    studentAnswers_[i] = '*';
    }
}

Student::Student(string firstName,string lastName,char studentAnswers[],int num_of_students,int number_of_answers){
    firstName_ = firstName;
    lastName_ = lastName;
    num_of_students_ = num_of_students;
    number_of_answers_ = number_of_answers;
    for (int i = 0; i < num_of_students_; i++){
        studentAnswers[i] = studentAnswers[i];
    }
}