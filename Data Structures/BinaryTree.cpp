#include <iostream>
using namespace std;

struct Node{

    int val;
    Node * left;
    Node * right;

    Node( int val ){
        this -> val = val;
        this -> left = NULL;
        this -> right = NULL;
    }
};


int main(){

    struct Node *root = new Node(1);
    root -> left = new Node(1);
    root -> left = new Node(3);
    root -> left -> right = new Node(3);
    
    return 0;
}