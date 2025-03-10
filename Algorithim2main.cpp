#include <iostream>
using namespace std;
#include "Algorithim2.h"



int main() {
    LinkedList myList;          //create a new LinkedList          
    int sum = 0;
    int size = 3;
    int num1[size];
    int num2[size];
    int sumNew[size];
    int temp = 0;

    myList.insert(1);
    myList.insert(3);
    myList.insert(4);

    //Current number is 431
    myList.extractNReverse(num1, size);
    cout << endl;

    for(int px = 0; px < size; px++){
        cout << num1[px] << " ";       //printing out the array 
    }
    cout << endl;


    //New number is 134 and we store that in num1
   

    myList.insert(3);
    myList.insert(4);
    myList.insert(7);

    //So now my current number is 743

    myList.extractNReverse(num2, size);

    for(int zx = 0; zx < size; zx++){
        cout << num2[zx] << " ";       //New number is 347
    }
    cout << endl;


    LinkedList newList;                 //So here i create a newList because i had a problem deleting from the original list 

    sum = myList.add(num1, num2, size);   //The sum right now is 481 but that will change in for loop on the next line
    for(int nx = 0; nx < size; nx++){
        temp = sum % 10;                 //So by doing modulo I will get the last digit of 481 which is 1
        sum = sum / 10;                  //I now decrease the sum and i do this cus now i want the 8 in 481. Now u may wonder why cant i just reverse here
                                         // well its because i am inserting at head. If i was inserting at tail then i would get 184
        newList.insert(temp);
    }

    newList.extractNReverse(sumNew, size);   //So since i have my array, I put into my reverse function to get sumNew array 184


    
    LinkedList finalList;                   //I create a new linked list cus i dont know how to delete from the previous one.

    for(int vx = size - 1; vx >= 0; vx--){    //now I insert the reverse into the linked list and I depreciate it because I know im inserting at head.
                                              //If i just did size, then i would start at index 3. But index 3 does not exists in my array so it would spit out 
                                              //garbage
        finalList.insert(sumNew[vx]);
    }

    finalList.print();

    return 0;
}