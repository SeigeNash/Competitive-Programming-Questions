#include <iostream>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};



int diameterOfBinaryTree(TreeNode* root) {

    if( root == NULL ){
        return 0;
    }
    int right, left = 1;
    left = left + diameterOfBinaryTree(root -> left);
    right = right + diameterOfBinaryTree(root -> right);
    int m = max(left, right);
    cout << m << endl;
    return max(left, right);
}


int main(){

    TreeNode* root = new TreeNode(1);
    root -> left = new TreeNode(2);

    int result = diameterOfBinaryTree(root);        
    cout << result;
    return 0;
}
