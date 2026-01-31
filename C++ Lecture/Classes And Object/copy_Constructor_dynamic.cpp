#include <iostream>
using namespace std;

//when data members are statically allocated , then there is no shallow copy issues
// but when data members are dynamically allocated , then shallow copy creates issues
//changes in one object won't reflect in another object or vice versa.

class student{
    public:
    string name;
    int *age; //static variable
    int *marks;

    student(string name,int age,int marks){
        this->name = name;
        this->age = new int(age);
        this->marks = new int(marks);
    }

    void getData(){
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<*age<<endl;
        cout<<"Marks: "<<*marks<<endl;
    }
    // Copy Constructor
    student(const student &temp){
        name = temp.name;
        age = temp.age;
        marks = temp.marks;

    }

    void setData(string name, int age, int marks){
        this->name = name;
        *(this->age) = age;
        *(this->marks) = marks;
    }

    ~student(){
        cout<<"Destructor called for "<<name<<endl;
        delete age;
        delete marks;
        marks = nullptr;
        age = nullptr;
    }

};

int main(){
    student s1("Abhi",20,92);
    student s2(s1); // (s1)copy constructor is called here
    s1.getData();
    s2.setData("Rohan",21,95);
    cout<<"After changing data of s2 "<<endl;
    s1.getData();
    s2.getData();
}