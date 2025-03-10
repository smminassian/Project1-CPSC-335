#ifndef ALGORITHIM2_H
#define ALGORITHIM2_H



class Node
{

public:
    int data;
    Node* next;            //So here I declare a class called Node. The whole reason for me having this class is so I can store actual data in the linked list
    Node(int data);   //This is me initliazing my constructor
};

class LinkedList
{
public:
    Node* head;    
    LinkedList();        

    void insert(int data);                               //These are my member functions and I will explain them in Algorithim2.cpp
    void extractNReverse(int arr[], int size);
    void print();
    int add(int arr[], int arr2[], int size);

};


#endif

