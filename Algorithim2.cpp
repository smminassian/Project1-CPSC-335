#include <iostream>
using namespace std;

#include "Algorithim2.h"

LinkedList::LinkedList(){
    head = nullptr;
}

Node::Node(int data){
   this->data = data;
   next = nullptr;
}

void LinkedList::insert(int data){
    Node* newnode = new Node(data);
    newnode->next = head;
    head = newnode;
}

void LinkedList::print(){
    Node* temp = head;
    while(temp != nullptr){
        cout << temp->data << " ";
        temp = temp->next;
    }

}