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

void inputaftertarget(Node * head,int target,int value){
    Node * newnode;
    newnode = new Node(value);

    if (head == nullptr){
        head = newnode;
        return;
    }

    Node * temp = head;

    while (temp != nullptr && temp -> data != target){
        temp = temp -> next;
    }

    newnode -> next = temp -> next;
    newnode -> prev = temp;
    temp -> next = newnode;
    delete temp;
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

    int target;
    cout << "Enter the target: ";
    cin >> target;

    int value;
    cout << "Enter the value: ";
    cin >> value;

    inputaftertarget(head,target,value);

    display(head);
}