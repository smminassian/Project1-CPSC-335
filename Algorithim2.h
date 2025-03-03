#ifndef ALGORITHIM2_H
#define ALGORITHIM2_H



class Node
{

public:
    int data;
    Node* next;
    Node(){};
};

class LinkedList
{
public:
    Node* head;
    LinkedList(){};

    void insert(int data);
    void print();

};


#endif

