#include <iostream>
#include <string>
using namespace std;
#include "Algorithim2.h"



int main() {
    LinkedList myList;          //create a new LinkedList          
    int sum = 0;
    int num1[3];
    int num2[3];
    int sumNew[4];          //I create an array of size 4 because the sum of two 3 digit numbers can be a 4 digit number.
    int temp = 0;

    myList.insert(3);
    myList.insert(4);
    myList.insert(2);

    //Current number is 342
    myList.extractNReverse(num1, 3);
    myList.print();                //So this prints out the reverse number which is 243
   
    cout << endl;                 

  
    LinkedList myList2;             //i create a new linked list because i had a problem deleting from the original list


    myList2.insert(9);
    myList2.insert(6);
    myList2.insert(5);

    //So now my current number is 965
    

    myList2.extractNReverse(num2, 3);

    myList2.print();               //So this prints out the reverse number which is 569
    cout << endl;  


    LinkedList newList;                 //So here i create a newList because i had a problem deleting from the original list 

    sum = myList.add(num1, num2, 3); 

    for(int nx = 0; nx < 4; nx++){
        temp = sum % 10;                 //So by doing modulo I will get the last digit of 1307 which is 7
        sum = sum / 10;                  //I now decrease the sum and i do this cus now i want the 0 in 1307. Now u may wonder why cant i just reverse here
                                         // well its because i am inserting at head.
        newList.insert(temp);
    }


    newList.extractNReverse(sumNew, 4);   //So since i have my array, I put into my reverse function to get sumNew array 7031

   
    LinkedList finalList;                   //I create a new linked list cus i dont know how to delete from the previous one.

    for(int vx = 3; vx >= 0; vx--){    //now I insert the reverse into the linked list and I depreciate it because I know im inserting at head.
                                              //If i just did size, then i would start at index 3. But index 3 does not exists in my array so it would spit out 
                                              //garbage
        finalList.insert(sumNew[vx]);
    }

    finalList.print();

    return 0;
}