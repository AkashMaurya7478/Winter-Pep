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
    // Changed from shared_ptr<Teacher> to weak_ptr<Teacher> to break the circular reference
    // weak_ptr does not increase the reference count, preventing memory leaks in cycles
    weak_ptr<Teacher> cher;
    ~Student(){
        cout<<"Student destroyed"<<endl;
    }
};

int main(){
    shared_ptr<Student> s1(new Student());
    shared_ptr<Teacher> t1(new Teacher());

    t1->dent = s1;
    // Assignment to weak_ptr is fine, it can be assigned from shared_ptr
    s1->cher = t1;
    //.lock() can be used to get a shared_ptr from weak_ptr when needed.

    return 0;
}
