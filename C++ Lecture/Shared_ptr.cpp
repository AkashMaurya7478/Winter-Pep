#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    shared_ptr<int> ptr(new int(23));
    cout <<"value: "<< *ptr << endl;
    cout <<"Address: "<< ptr.get()<<endl;

    shared_ptr<int> pt = ptr;
    cout <<"Value using pt: "<<*pt<<endl;
    cout <<"Address using pt: "<<pt.get()<<endl;
    cout <<"Reference Count: "<<ptr.use_count()<<endl;
    cout <<"Reference Count using pt: "<<pt.use_count()<<endl;
    ptr.reset();
    cout <<"After resetting ptr"<<endl;
    cout <<"Reference Count using pt: "<<ptr.use_count()<<endl;

    if (pt == NULL){
        cout<<"Ptr id Null"<<endl;
    }else{
        cout<<"Hello"<<endl;
    }
}