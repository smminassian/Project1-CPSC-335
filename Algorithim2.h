#ifndef ALGORITHIM2_H
#define ALGORITHIM2_H



struct Node{
    int data;
    Node* next;
};

class LinkedList
{
public:
    Node* head;
    LinkedList() : head(nullptr) {};

    void insert(int data);
    void print();

};


#endif

