#include <iostream>
#include <string>
using namespace std;
class Human{
    public:

    string name;
    protected:
    int age;
    
    int weight;
    string gender;
    public:
    Human(){
        cout<<"Human Constructor Called!"<<endl;
    }

    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Weight: "<<weight<<endl;
        cout<<"Gender: "<<gender<<endl;
    }

    ~Human(){
        cout<<"Human Destructor Called!"<<endl;
    }

    
};

class Student: public Human{

    public:
    int rollNo;

    Student(string name,int age,int weight,string gender,int rollNo){
        this->name = name;

        this-> age = age;
        this->weight = weight;
        this -> gender = gender;
        this ->rollNo = rollNo;
        cout<<"Student Parameterized constructor Called!"<<endl;
    }

    void play(){
        cout<<"RollNo: "<<rollNo<<endl;
    }

    void study(){
        cout<<"Students study!!!";
    }

    ~Student(){
        cout<<"Student Destructor Called!"<<endl;
    }
};

int main(){
    Student s1("Ramesh",23,68,"Male",41);
     //protected members can be accessed in derived class
    s1.display();
    
    s1.play();
}