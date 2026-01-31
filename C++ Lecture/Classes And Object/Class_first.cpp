#include <iostream>
#include <string>
using namespace std;

struct StudentData{
    string name;
    int marks;
    int rollNo;
    bool isPresent;

};

class Student {
    public:
    string name;
    int marks;
    int rollNo;
    bool isPresent;

    Student(string name,int marks,int rollNo,bool isPresent){
        this -> name = name;
        this -> marks = marks;
        this -> rollNo = rollNo;
        this -> isPresent = isPresent;
    }


    //Copy Constructor
    S
    StudentData getData(){
   return {name,marks,rollNo,isPresent};
}

void setStudentData(Student data){
    name = data.name;
    marks = data.marks;
    rollNo = data.rollNo;
    isPresent = data.isPresent;
}
};




int main(){
    Student s1;
    cout<<"Name of student is: "<<s1.getData().name<<endl;
    StudentData data;

    
}