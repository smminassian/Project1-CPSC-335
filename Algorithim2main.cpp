#include <iostream>
using namespace std;
#include "Algorithim2.h"



int main() {
    LinkedList myList;
    Node* currentNode;
    int size = 3;
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
    cout << endl;


    //New number is 134 and we store that in num1
   
    //Now we clear the list

    myList.clear();

    myList.insert(3);
    myList.insert(4);
    myList.insert(7);

    //So now my current number is 743

    myList.extractNReverse(num2, size);

    for(int zx = 0; zx < size; zx++){
        cout << num2[zx] << " ";
    }
    cout << endl;

    myList.print();
    return 0;
}