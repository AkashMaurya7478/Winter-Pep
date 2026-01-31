#include <iostream>
#include <string>
using namespace std;

struct StudentData{

    string name;
    int marks;
};

class Student{

    public:
    string name;
    int marks;


    //Default Constructor
    Student(){
        cout<<"Constructor Called !"<<endl;
    }

    //perameterized Constructor

    Student(string name,int marks){
        this -> name = name;
        this -> marks = marks;
    }

    void getData(){
        cout<< "Name: " << name << ", Marks: " << marks << endl;
    }
    void setData(string name, int marks){
        this -> name = name;
        this -> marks = marks;}


    
};

int main(){
    Student s1;

    StudentData data;
    s1.getData();
    return 0;

}