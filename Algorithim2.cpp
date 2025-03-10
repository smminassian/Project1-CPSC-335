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

void LinkedList::clear(Node* currentNode){
    currentNode = head;
    if(currentNode->next != nullptr){
    clear(currentNode->next);
    delete currentNode;
}
}


void LinkedList::extractNReverse(int arr[], int size){
    Node* current = head;
    int ix = 0;
    while(ix < size && current != nullptr){
        arr[ix] = current->data;
        current = current->next;
        ix++;
    }

    int tempArr[size];

    for(int kx = 0; kx < size; kx++){
        tempArr[kx] = arr[size-kx-1];
    }
    for(int jx = 0; jx < size; jx++){
        arr[jx] = tempArr[jx];
    }

}