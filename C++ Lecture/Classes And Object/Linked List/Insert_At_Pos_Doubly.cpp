#include <iostream>
#include "Node.h"
using namespace std;

Node * insertAtPos(Node * head,int pos,int data){
    int counter = 0;
    Node * curr = head;
    while(curr -> next != NULL &&counter < pos-1){
        curr = curr -> next;
        counter++;
    }

    if(curr == NULL){
        return head;
    }
    Node * newNode = new Node(data);
    Node * temp = head;
    newNode -> prev = curr;
    temp ->prev = newNode;
    return head;
}

int main(){
    Node * head = TakeInput();
    Node * newHead = insertAtPos(newHead,2 ,233);
    printDoubly(head)
}