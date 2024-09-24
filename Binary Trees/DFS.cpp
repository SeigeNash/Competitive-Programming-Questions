#include <iostream>
using namespace std;


struct Node{

    int data;
    Node *left;
    Node *right;

    Node( int val ){
        this -> data = val;
        this -> left = NULL;
        this -> right = NULL;
    }
};

void inorder( Node * head){

    if( head == NULL){
        return;
    }
    inorder( head -> left );
    cout << head -> data << " ";
    inorder( head -> right );

}

void preorder( Node * head){

    if( head == NULL){
        return;
    }
    cout << head -> data << " ";
    inorder( head -> left );
    inorder( head -> right );

}

void postorder( Node * head){

    if( head == NULL){
        return;
    }
    inorder( head -> left );
    inorder( head -> right );
    cout << head -> data << " ";

}

int main(){

    Node * head = new Node(1);
    head -> left = new Node(2);


    return 0;
}