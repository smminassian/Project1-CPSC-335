#include <iostream>
using namespace std;
#include "Algorithim2.h"



int main() {
    LinkedList myList;
    Node* currentNode;
    int size = 4;
    int num1[size];
    int num2[size];

    myList.insert(1);
    myList.insert(3);
    myList.insert(4);

    //Current number is 431
    myList.extractNReverse(num1, size);
    cout << endl;

    for(int px = 0; px < size; px++){
        cout << num1[px] << " ";
    }

    //New number is 134 and we store that in num1
   
    //Now we clear the list

    myList.clear(currentNode);




    cout << "Here is the 2nd number in robot language: " << endl;
    cout << "Now, enter numbers for 2nd list" << endl;
    
    myList.extractNReverse(num2, size);

    cout << endl;

    return 0;
}