#include <iostream>
#include <string>
using namespace std;

class Student{

    public:
    string name;
    int marks;
    
    Student(string name,int marks){
        this -> name = name;
        this -> marks = marks;
    }

    //Getter function
    void getData(){
        cout<< "Name: " << name << endl;
        cout<<" Marks: " << marks << endl;
    }

    void setData(string name, int marks){
        this -> name = name;
        this -> marks = marks;
    }
};

int main(){
    Student s1("Rahul", 0);

    //Copy Constructor called
    //Copying the data of s1 into s2
    Student s2 = s1; 

    cout<<"Print Data Using s1 object"<<endl;
    s1.getData();

    s2.setData("Sohan", 100);
    cout<<"Print Data Using s2 object"<<endl;
    s2.getData();
}