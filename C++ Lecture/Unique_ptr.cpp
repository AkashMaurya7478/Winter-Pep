#include <iostream>
#include<bits/stdc++.h>
using namespace std;

class Student{

    public:
    int rollNo;
    Student(int n){
        this ->rollNo = n;
    }

    void display(){
        cout<<"RollNo: "<<rollNo<<endl;
    }
};

int main(){
    unique_ptr<int> p(new int(25));
    cout<<"Address of p: "<< *p<<endl;

    unique_ptr<int> o = move(p);
    cout<<"Value pointed by p: "<< *o<<endl;
    unique_ptr<char> pc (new char('A'));
    cout<<"Character is: "<<*pc<<endl;

    unique_ptr<Student> ps(new Student(46));
    ps ->display();
}