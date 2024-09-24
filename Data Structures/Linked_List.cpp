#include <iostream>
using namespace std;

class Node {
public:

    int data;       // member variable 
    Node * next = NULL;     // member variable 

    Node( int value ) {
        this -> data = value;
        this -> next = NULL;
    }

};

class LinkedList {

    // why isnt this public?
    Node * head;        // a pointer called head that points towards a Node class object 

public:

    LinkedList() {
        this -> head = nullptr;             // is this step needed? why cant i just do Node * head = nullptr?
    }

    void insertInBeginning( int data ) {
        Node * newNode = new Node( data );        
        if( head == nullptr){
            head = newNode;
        }
        else{
            Node * temp = head;
            newNode -> next = temp;
            head = newNode;
        }
    }
  
    void insertionAtAnyIndex( int data , int index ) {
       Node * newNode = new Node( data );        
        if( head == nullptr){
            head = newNode;
        }
        else{
            Node * current = head;
            int counter = 1;           
            while( current -> next && counter != index ){
                current = current->next;
                counter += 1;
            }
            Node * temp = current -> next;
            current->next = newNode;
            newNode -> next = temp;
        }
    }

    void insertAtTheEnd( int data ) {

       Node * newNode = new Node( data );    // i guess iin this notation, you inntialise a pointer to an object of the Node class while instantiating that object. this is a good notation i guess.    

        if( head == nullptr){
            head = newNode;
        }
        else{
            Node * current = head;
            
            while( current -> next ){
                current = current->next;
            }
            current->next = newNode;

        }
    }

    void printLinkedList() {

        Node * temp = head;

        while( temp != nullptr ){
            cout << temp -> data << " -> " ;
            temp = temp -> next;
        }
        cout << "null" << endl;
    }

    int sizeOfLinkedList(){

        int size = 1;
        Node * current = head;

        while ( current -> next )
        {
            size++;
            current = current->next;
        }

        return size;
        
    }

    void sortLinkedList(){

        // brute force - store the elements in an array and then sort the array. Refill the linked list using the sorted array.
        
    }


};



int main() {

    LinkedList newList;         // this is a new linked list 

    newList.insertAtTheEnd( 20 );
    newList.insertAtTheEnd( 30 );
    newList.insertAtTheEnd( 20 );
    newList.printLinkedList();
    newList.insertionAtAnyIndex( 111, 2 );
    newList.printLinkedList();
    int size = newList.sizeOfLinkedList();
    cout << "Size = " << size << endl;

    return 0;
}