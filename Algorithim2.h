#ifndef ALGORITHIM2_H
#define ALGORITHIM2_H



class Node
{

public:
    int data;
    Node* next;
    Node(int data);
};

class LinkedList
{
public:
    Node* head;
    LinkedList();

    void insert(int data);
    void extractNReverse(int arr[], int size);
    void print();
    void clear(Node* currentNode);

};


#endif

