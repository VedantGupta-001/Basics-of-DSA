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

void inputafterindex(Node *& head, int index, int value){
    Node * node1;
    node1 = new Node(value);

    if (index == 0){
        node1 -> next = head;
        head = node1;
        return;
    }

    Node * temp = head;
    int ci = 0;
    while (temp != nullptr && ci < index - 1){
        temp = temp -> next;
        ci += 1;
    }
    node1 -> next = temp -> next;
    temp -> next = node1;
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

    int index;
    cout << "Enter the index: ";
    cin >> index;

    int value;
    cout << "Enter the value: ";
    cin >> value;

    inputafterindex(head,index,value);

    display(head);
}