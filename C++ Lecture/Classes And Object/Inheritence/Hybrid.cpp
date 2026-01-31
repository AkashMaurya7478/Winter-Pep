#include <iostream>
#include <string>
using namespace std;


class person{

    public:
    string Name;
    int HouseNo;


    person(string Name,int HouseNo){
        this ->Name = Name;
        this ->HouseNo = HouseNo;
        cout<<"Person Constructor Called!"<<endl;
        
    }

    void display(){
        cout<<"My Name is: "<<Name<<endl;
        cout<<"MY House No. "<<HouseNo<<endl;

    }

};

class Vehicle: public person
{
public:
    string Brand;
    string Name;
    int model;
    int mfg;

    Vehicle(string Brand,string Name,int model,int mfg, int HouseNo):person(Name,HouseNo){
        this->Brand = Brand;
        this->Name  = Name;
        this->model = model;
        this->mfg = mfg;
    }

    void show(){
        display();
        cout<<"Brand Name: "<<Brand<<endl;
        cout<<"Name: "<<Name<<endl;
        cout<<"Model: "<<model<<endl;
        cout<<"MFG: "<<mfg<<endl;

    }


   
};
class Car : public Vehicle
{
protected:
    string EngineType;
    string color;
    int tyreCount;

public:
    Car(string Brand,string Name,int model,int mfg, int HouseNo, string EngineType, string color, int tyreCount):Vehicle(Brand,Name,model,mfg, HouseNo)


    {
        show();
        this->EngineType = EngineType;
        this->color = color;
        this->tyreCount = tyreCount;
        cout << "Car Constructor Called!" << endl;
    }

    void showDetails()


    {
        
        cout << "Engine Type: " << EngineType << endl;
        cout << "Color: " << color << endl;
        cout << "Tyre Count: " << tyreCount << endl;
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

class HybridClass : public Car, public Youtuber
{
public:
    HybridClass(string Brand, string Name, int model, int mfg, int HouseNo, string EngineType, string color, int tyreCount, string channelName, int subscribers)
        : Car(Brand, Name, model, mfg, HouseNo, EngineType, color, tyreCount), Youtuber(channelName, subscribers)
    {
        cout << "HybridClass Constructor Called!" << endl;
    }

    void showAllDetails()
    {
        Car::showDetails(); // Car's showDetails
        Youtuber::showDetails(); // Youtuber's showDetails
        cout << "Hybrid Class Details Displayed!" << endl;
    }

    ~HybridClass()
    {
        cout << "HybridClass Destructor Called!" << endl;
    }
};

int main(){
    person p1("Anuj",45);
    Car c1("BMW","X7",2023,2023,45,"V8","Black",4);
    HybridClass h1("Tesla","Model S",2024,2024,100,"Electric","White",4,"TechChannel",1000000);
    h1.showAllDetails();
    return 0;
}

