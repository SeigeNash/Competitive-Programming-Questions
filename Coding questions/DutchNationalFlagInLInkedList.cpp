#include<iostream>
#include<vector>
#include<list>
using namespace std;

// the following code works but gives time limit exceeded

class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        next = NULL;
    }
    Node(int data)
    {
        this->data = data; 
        this->next = NULL;
    }
    Node(int data, Node* next)
    {
        this->data = data;
        this->next = next;
    }
};


Node* sortList(Node *head){
    // Write your code here.
    Node * low = head;
    Node * mid = head;
    Node * high = head;

    // take high pointer till the end 
    // initialise an interger value for length
    // decrement the value of length everytime there needs to be a change in the value of high
    // and reinitlialise the high pointer according to length variable
    int length = 0;

    // initialising high pointer 
    while( !high ){
        high = high -> next; 
        length += 1;
    }

    // apply dutch national flag 

    while( mid <= high ){

        if( mid -> data == 0 ){
            // swap mid -> data and low -> data
            swap(mid -> data, low -> data);
            low = low -> next;
            mid = mid -> next;
            // both mid and low point next 
        }
        else if( mid -> data == 2 ){
            //swap mid -> data and high -> data
            swap(mid -> data, high -> data);
            // decrement high 
            length -= 1;
            high = head;
            for( int i = 0; i <= length; i++ ){
                high = high -> next;
            }
        }
        else if( mid -> data == 1 ){
            mid = mid -> next; 
        }

    }

    return head;

    
}


int main(){

    Node* sortList(Node *head);
    return 0;
}