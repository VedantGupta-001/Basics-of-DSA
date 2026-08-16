#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node * next;
    Node * prev;
    Node (int value){
        data = value;
        next = nullptr;
        prev = nullptr;
    }
};

void insertionatbegin(Node *& head, int value){
    Node * newnode;
    newnode = new Node(value);
    newnode -> prev = nullptr;
    if (head == nullptr){
        head = newnode;
        newnode -> next = nullptr;
        return;
    }
    newnode -> next = head;
    head -> prev = newnode;
    head = newnode;
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

    insertionatbegin(head,value);

    display(head);
}