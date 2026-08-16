#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node * next;
    Node (int value){
        data = value;
        next = nullptr;
    }
};

void insertatend(Node *& head,int value){
    Node * newnode;
    newnode = new Node(value);
    newnode -> next = nullptr;
    if (head == nullptr){
        head = newnode;
        return;
    }
    Node * temp = head;
    while (temp -> next != nullptr){
        temp = temp -> next;
    }
    temp -> next = newnode;
}

void display(Node * head){
    Node * temp = head;
    while (temp != nullptr){
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
}

int main(){
    Node * head;
    head =  new Node(10);
    head -> next =  new Node(20);
    head -> next -> next = new Node(30);
    head -> next -> next -> next =  new Node(40);

    int value;
    cout << "Enter the value: ";
    cin >> value;

    insertatend(head,value);

    display(head);
}