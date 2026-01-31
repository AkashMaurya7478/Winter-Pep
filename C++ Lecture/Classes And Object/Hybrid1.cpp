#include <iostream>
#include <string>
using namespace std;

class Person{
    public:
    string Name;
    string gender;
    int age;

    public:

    Person(string Name, string gender, int age){
        this -> Name = Name;
        this ->gender = gender;
        this ->age = age;
    }

    void displayPerson(){
        cout<<"Name: "<<Name<<endl;
        cout<<"Gender: "<<gender<<endl;
        cout<<"Age: "<<age<<endl;   
    }
};

class Student : virtual public Person{
    protected:
   
    int grade;

    public:

    Student(int g) : Person("", "", 0), grade(g) {}

    // Student(int grade):Person(Name,gender,age){
    //    this ->grade = grade;
    // }
    void displayStudent(){
        displayPerson();
        cout<<"Grade: "<<grade<<endl;
    }
    };

class Teacher : virtual public Person{
    protected:
    string subject;

    public:

    Teacher(string s) : Person("", "", 0), subject(s) {}

    // Teacher(string subject):Person(Name,gender,age){
    //     this -> subject = subject;
    //}
    void displayTeacher(){
        // displayPerson();
        cout<<"Subject: "<<subject<<endl;
    }
};

class Youtuber : virtual public Person{
    protected:
    string channelName;
    int subscribers;

    public:
    Youtuber(string c, int s) : Person("", "", 0), channelName(c), subscribers(s) {}

    // Youtuber(string channelName, int subscribers){
    //     this -> channelName = channelName;
    //     this -> subscribers = subscribers;
    // }
    void displayYoutuber(){
        // displayPerson();
        cout<<"Channel Name: "<<channelName<<endl;
        cout<<"Subscribers: "<<subscribers<<endl;
    }
};

class Engineer: public Student,public Teacher,public Youtuber{
    protected:
    string designation;


    public:

    Engineer(string Name,string gender,int age,int grade,string subject,string channelName,int subscribers,string designation)
    :Person(Name,gender,age),Student(grade),Teacher(subject),Youtuber(channelName,subscribers)
    {
        this->Name = Name;
        this ->gender = gender;
        this ->age = age;
        this ->grade = grade;
        this -> subject = subject;
        this -> channelName = channelName;
        this -> subscribers = subscribers;
        this -> designation = designation;
    }

    void display(){
        displayStudent();
        displayTeacher();
        displayYoutuber();
        cout<<"Designation: "<<designation<<endl;
    }
};

int main(){
    // Person p("Alice","Female",30);
    // p.displayPerson();
    Engineer e("Alice","Female",30,10,"Maths","TechWithTim",100000,"Software Engineer");
    e.display();
}