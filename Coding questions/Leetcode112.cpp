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


bool hasPathSum(TreeNode* root, int targetSum) {

    // if( targetSum == 0 ){                    // why wouldnt this work?
        //     return true;
    // }


    /*
    If root is None (i.e., the tree is empty), there can't be any path with the desired sum. So, the function returns False.
    */   
    if (root == NULL) {
        return false;
    } 
        
    /*
    If root is a leaf node (i.e., it has no left or right children), the function checks whether the value of the leaf node is equal to the remaining targetSum. If they are equal, it returns True, indicating that a valid path with the target sum has been found.
    */
    if (!root->left && !root->right) {              
        return targetSum == root->val;
    }
        
    bool lh = hasPathSum( root -> left, targetSum - (root -> val));
    bool rh = hasPathSum( root -> right, targetSum - (root -> val));
    return (lh || rh);
}


int main(){


    
    return 0;
}