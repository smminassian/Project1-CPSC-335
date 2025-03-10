#include <iostream>
using namespace std;

#include "Algorithim2.h"

LinkedList::LinkedList(){
    head = nullptr;            //This is my linked list constructor and the reason why i have head = nullptr is because the list
                               //is originally empty.
}

Node::Node(int data){
   this->data = data;         //So this code is pointing to the member variable data which is apart of the node object 
   next = nullptr;
}

void LinkedList::insert(int data){
    Node* newnode = new Node(data);       //I create a new node
    newnode->next = head;                //I point that newnode to the original head
    head = newnode;                     //and then i make the newnode the new head.
}

void LinkedList::print(){
    Node* temp = head;               //I let temp be the current head
    if(temp == nullptr){                       //if temp is null then the list is empty
        cout << "List is empty" << endl;
    }
    while(temp != nullptr){                        //while its not null tho
        cout << temp->data << " ";                 //I will access the data of the current node and print it 
        temp = temp->next;                         //then I will move onto the next node 
    }
}

int LinkedList::add(int num1Arr[], int num2Arr[], int size){
    int num1 = 0;
    int num2 = 0;
    for(int wx = 0; wx < size; wx++){
        num1 = num1 * 10 + num1Arr[wx];                       //So what I am doing here is I am taking the numbers in the array and I am representing it as an integer
        num2 = num2 * 10 + num2Arr[wx];                       //So if array is {1, 2, 3}, I do 0 * 10 + 1 -> 1 * 10 + 2 -> 12*10 + 3). So this becomes
                                                             //123 which is the number in the array.  
    }
    
    return num1 + num2;
}




void LinkedList::extractNReverse(int arr[], int size){
    Node* current = head;
    int ix = 0;
    while(ix < size && current != nullptr){           //So i am traversing the linked list and I am putting all values of the linked list into an array
        arr[ix] = current->data;
        current = current->next;
        ix++;
    }

    int tempArr[size];          //I create a temporary array that will serve as the reverse array

    for(int kx = 0; kx < size; kx++){ 
        tempArr[kx] = arr[size-kx-1];  //So this reverses the array and the reason why i have size - kx - 1 is because i start at 0
    }
    for(int jx = 0; jx < size; jx++){
        arr[jx] = tempArr[jx];           //I copy the reversed array into the original array
    }

}