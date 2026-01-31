#include <iostream>
using namespace std;

class Animal{
    public:
    virtual void sound(){
        cout<<"Animal makes a sound"<<endl;
    }
};

class Dog : public Animal{
    public:
    void sound(){
        cout<<"Dog barks"<<endl;
    }
};

int main(){
    Animal *a; // Base class pointer
    Dog d;

    a = &d; //store address of derived class object in base class pointer
    a ->sound();

    return 0;
}