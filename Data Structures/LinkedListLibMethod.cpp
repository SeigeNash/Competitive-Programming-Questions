#include <iostream>
#include <vector>
#include <list>

using namespace std;

int main(){

    list<int> myList;

    // push_front() pushes elements in the front. Kinda like an implementation of stack and queue 
    myList.push_front( 44 );
    myList.push_front( 88 );
    myList.push_front( 33 );


    list<int>:: iterator it;

    // both begin() and end() return an iterator pointing at the front and end of the linked list respectively.

    for (it = myList.begin(); it != myList.end(); ++it)             
        cout << '\t' << *it;
    cout << '\n';

    it = myList.begin();

    for (int i = 1; i <= 2; i++)
    {
        ++it;
    }

    cout << "Value at iterator : " << *it << endl;
    
    // sorts the list
    // myList.sort();

    // assign() assigns multiple values of the given value to a list 
    // myList.assign( 5, 1 );               // assigns 5 values that are 1

    // using insert to insert
    // 2 element at the 4th position
    // inserts 1  occurrence1
    // of 7 at 3rd position
    // the iterator has been incremented to 3rd position 

    myList.insert(it, 1, 7);


    cout << "after sort : " << endl;

    for (it = myList.begin(); it != myList.end(); ++it)
        cout << "->" << *it;
    cout << '\n';
    

    return 0;

}