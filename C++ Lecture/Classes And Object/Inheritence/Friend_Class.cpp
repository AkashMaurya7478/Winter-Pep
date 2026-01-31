#include <iostream>
#include <string>
using namespace std;

class friendClass{
    private:
    int breadth;
    int length;
    public:
    friendClass(int length,int area){
        this -> length = length;
        this -> breadth = area;
    }

    friend void display(friendClass fc);
};

void display(friendClass fc){
    cout<<"Length is: "<<fc.length<<endl;
    cout<<"Area is: "<<fc.breadth<<endl;
    cout<<"Toatal Area is: "<<fc.length * fc.breadth<<endl;
}

int main(){
    friendClass fc(10,200);
    display(fc);
    return 0;
}