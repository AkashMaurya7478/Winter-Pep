#include <iostream>
#include <string>
using namespace std;

class Engineer
{

public:
    string specialization;
    int DomainID;

public:
    Engineer(string specialization, int DomainID)
    {
        this->specialization = specialization;
        this->DomainID = DomainID;
        cout << "Engineer Parameterized Constructor Called!" << endl;
    }

    void showData()
    {
        cout << "Specialization: " << specialization << endl;
        cout << "Domain ID: " << DomainID << endl;
    }
    ~Engineer(){
        cout <<"Engineer Destructor Called!"<<endl;
    }
};

class Youtuber
{

protected:
    string channelName;
    int subscribers;

public:
    Youtuber(string channelName, int subscribers)
    {
        this->channelName = channelName;
        this->subscribers = subscribers;
        cout << "Youtuber Parameterized Constructor Called!" << endl;
    }
    void showDetails()
    {
        cout << "Channel name: " << channelName << endl;
        cout << "Subscribers: " << subscribers << endl;
    }
    ~Youtuber()
    {
        cout << "Youtuber Destructor Called!" << endl;
    }
};

class Teacher{
    protected:
    string subject;
    int experience;

    public:
    Teacher(string subject, int experience){
        this->subject = subject;
        this->experience = experience;
        cout<<"Teacher Parameterized Constructor Called!"<<endl;
    }

    void showInfo(){
        cout<<"Subject: "<<subject<<endl;
        cout<<"Experience: "<<experience<<" years"<<endl;
    }

    ~Teacher(){
        cout<<"Teacher Destructor Called!"<<endl;
    }
};

class Person : public Engineer, public Youtuber, public Teacher
{

public:
    string name;

    Person(string name, string specialization, int DomainID, string channelName, int subscribers,string subject,int experience): Engineer(specialization, DomainID), Youtuber(channelName, subscribers),Teacher(subject, experience)
    {
        
        this->name = name;
        cout << "Person Parameterized Constructor Called!" << endl;
    }

    void display()
    {
        cout << "My name is: " << name << endl;
        showData();
        showDetails();  
        showInfo();
    }
    ~Person()
    {
        cout << "Person Destructor Called!" << endl;
    }
};

int main()
{

    Person p1("Pranay", "Software Devloper", 145, "TechWithPranay", 150000,"Data Structures",5);
    p1.display();
}