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

    cout << "Linked List: ";
    display(head);
}