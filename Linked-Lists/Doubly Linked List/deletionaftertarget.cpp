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

void deletionaftertarget(Node * head, int target){
    if (head == nullptr){
        cout << "Linked List Empty!!";
    }
    
    Node * temp = head;

    while (temp != nullptr && temp -> data != target){
        temp = temp -> next;
    }

    Node * ntd = temp -> next;
    temp -> next = ntd -> next;
    ntd -> next -> prev = temp;
    delete ntd;
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

    deletionaftertarget(head,target);

    display(head);
}