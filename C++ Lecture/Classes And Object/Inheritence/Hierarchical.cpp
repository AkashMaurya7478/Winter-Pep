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
    this->Brand = Brand;
    this->Name = Name;
    this->model = model;
    this->mfg = mfg;
    cout<<"Vehical Constructor Called"<<endl;}
void display(){
    cout<<"Brand Name: "<<Brand<<endl;
    cout<<"Name: "<<Name<<endl;
    cout<<"Model: "<<model<<endl;
    cout<<"MFG: " <<mfg<<endl;
}
};
class Car: public Vehicle{
protected:
string EngineType;
string color;
int tyreCount;

public:
Car(string EngineType,string color,int tyreCount){
    this->EngineType = EngineType;
    this->color = color;
    this->tyreCount = tyreCount;
    cout<<"Car Constructor Called!"<<endl;
    
}

void showDetails(){
    display();
    cout<<"Engine Type: "<<EngineType<<endl;
    cout<<"Color: "<<color<<endl;
    cout<<"Tyre Count: "<<tyreCount<<endl;
}

};
class Bike: public Vehicle{
    protected:
    string BikeName;
    string bikeType;
    string color;
    int cc;

    public:
    Bike(string BikeName,string bikeType,string color, int cc){
        this->BikeName = BikeName;
        this->bikeType = bikeType;
        this->color = color;
        this->cc = cc;
    }
    void showInfo(){
        display();
        cout<<"Bike Name: "<<BikeName<<endl;
        cout<<"Bike Type: "<<bikeType<<endl;
        cout<<"Color: "<<color<<endl;
        cout<<"CC: "<<cc<<endl;
    }

};
class Truck: public Vehicle{
    protected:
    int loadCapacity;
    int axleCount;
    string truckType;

    public:
    Truck(int loadCapacity,int axleCount,string truckType){
        this->loadCapacity = loadCapacity;
        this->axleCount = axleCount;
        this->truckType = truckType;
    }
    void showData(){
        display();
        cout<<"Load Capacity: "<<loadCapacity<<" tons"<<endl;
        cout<<"Axle Count: "<<axleCount<<endl;
        cout<<"Truck Type: "<<truckType<<endl;
    }
};
class Bus: public Vehicle
{
    protected:
    int seatCapacity;
    string busType;
    string color;

    public:
    Bus(int seatCapacity,string busType,string color){
        this->seatCapacity = seatCapacity;
        this->busType = busType;
        this->color = color;
    }

    void Data(){
        display();
        cout<<"Seat Capacity is: "<<endl;
        cout<<"Bus Type: "<<endl;
        cout<<"Color: "<<endl;
    }
};

int main(){
    Vehicle v1();

    Car c1("BMW","X7",2025,4,"Petrol","Red",4);

}