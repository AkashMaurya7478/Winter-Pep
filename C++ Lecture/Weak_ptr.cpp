#include <iostream>
#include <bits/stdc++.h>
using namespace std;

 class Student;
class Teacher{
    public:
    shared_ptr<Student> dent;

    ~Teacher(){
        cout<<"Teacher destroyed"<<endl;
    }
};
class Student{
    public:
    shared_ptr<Teacher> cher;
    ~Student(){
        cout<<"Student destroyed"<<endl;
    }
};

int main(){
    shared_ptr<Student> s1(new Student());
    shared_ptr<Teacher> t1(new Teacher());

    t1->dent = s1;
    s1->cher = t1;
    //cyclic dependency

    return 0;
}