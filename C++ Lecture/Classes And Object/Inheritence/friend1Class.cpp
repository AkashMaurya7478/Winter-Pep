#include <iostream>
#include <string>
using namespace std;

class Student{
    int marks;
    string Name;

    public:
    Student(int marks,string Name){
        this -> Name = Name;
        this -> marks = marks;
    }
    friend class teacher;
};

class teacher{
    public:
    void display(Student s){
        cout<<"Marks: "<<s.marks<<endl;
        cout<<"Grade: "<<s.Name<<endl;
    }


};

int main(){
    Student s(96,"O");
    teacher t;
    t.display(s);
}