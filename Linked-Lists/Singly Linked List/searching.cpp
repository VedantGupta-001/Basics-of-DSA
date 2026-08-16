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

int search(Node * head,int item){
    Node * temp;
    temp = head;
    int c = 0;
    while (temp != nullptr){
        if (temp -> data == item){
            c += 1;
        }
        temp = temp -> next;
    }
    return c;
}


int main(){
    Node * head;
    head =  new Node(10);
    head -> next =  new Node(20);
    head -> next -> next = new Node(30);
    head -> next -> next -> next =  new Node(40);

    int item;
    cout << "Enter the value to search: ";
    cin >> item;

    int result = search(head, item);

    if (result == 0){
        cout << "Not Found";
    }
    else{
        cout << "Found";
    }
}