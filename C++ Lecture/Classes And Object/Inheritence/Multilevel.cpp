#include <iostream>
#include <string>
using namespace std;

class Vehicle{
    public:
    string Brand;
    string Name;
    int model;
    int mfg;

    Vehicle(){
        cout<<"Vehical Constructor Called"<<endl;
    }


    void display(){

        cout<<"Brand Name: "<<Brand<<endl;
        cout<<"Name: "<<Name<<endl;
        cout<<"Model: "<<model<<endl;
        cout<<"MFG: " <<mfg<<endl;

    }

    ~Vehicle(){
        cout<<"Vehical Destructor Called"<<endl;
    }
};
class type1: public Vehicle{

    protected:
    string type;
    public:
    void showDetails(){
        cout<<"Type of the car is:"<<type<<endl;
    }

    ~type1(){
        cout<<"Type1 Destructor Called!"<<endl;
    }

};

class Car: public type1{
    protected:
    int rim;
    int Rating;


    public:

    Car(string Brand,string Name,int model,int mfg,string type,int rim,int Rating ){
        this->Brand = Brand;
        this->Name = Name;
        this->model = model;
        this->mfg = mfg;
        this->type = type;
        this->rim = rim;
        this->Rating = Rating;
    }

    void showdisplay(){
        cout<<"Rim Size: "<<rim<<endl;
        cout<<"Crash Rating: "<<Rating<<endl;
    }

    ~Car(){
        cout<<"Car Destructor Called!"<<endl;
    }
};
int main(){

    Car c1("BMW","Sedan",2026,01,"Diesal",19,5);
    c1.display();
    c1.showDetails();
    c1.showdisplay();

}