#include <iostream>
#include <string>
#include "Algorithim2.h"
using namespace std;


LinkedList::LinkedList(){
    head = nullptr;
}

Node::Node(){
    next = nullptr;
    int Data = data;
}

void LinkedList::insert(int Data){
    Node* newnode = new Node();
    newnode->next = head; 
    newnode = head;
}