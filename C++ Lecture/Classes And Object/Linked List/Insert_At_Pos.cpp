#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;

    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

Node *insertAtPos(Node *head, int pos, int data)
{
    if (pos == 0)
    {
        Node *newNode = new Node(data);
        newNode->next = head;
        head = newNode;
        return head;
    }
    Node *temp = head;
    int counter = 0;
    while(temp -> next != NULL && counter <pos - 1){
        temp = temp -> next;
        counter++ ;
    }
    if(temp == NULL){
        return head;
    }
    Node * newNode = new Node(data);
    newNode -> next = temp ->next;
    temp->next = newNode;
}

int main(){
    Node *head = takeInput();
    int data;
    cout<<"Enter new NOde: "<<endl;
    cin>>data;
    int pos;
    cout<<
}