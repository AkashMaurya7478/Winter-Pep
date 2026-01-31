#include <iostream>
using namespace std;

//Singly Linked list

class Node{

    public:
    int data;
    Node *next;

    Node (int n){
        this ->data = n;
        data = NULL;
    }
};

void print(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp;

    }

}
int main(){

    Node n1(10);
    Node n2(30);
    Node n3(40);
    Node n4(50);
    Node n5(60);


    Node* head = &n1;
    n1.next = &n2;
    n2.next = &n3;
    n3.next = &n4;
    n4.next = &n5;
    n5.next = NULL;

    print(head);


}