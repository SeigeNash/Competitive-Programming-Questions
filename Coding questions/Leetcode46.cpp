#include <iostream>
using namespace std;



void helper(vector<int>& nums, vector<int>& ds, vector<vector<int> > &ans, vector<int> &map){

    // base case
    if( ds.size() == nums.size() ){
        ans.push_back(ds);
        return;
    }

    // choice diagram 
    for( int i = 0; i < nums.size(); i++ ){
        if( map[i] != 1 ){
            
            // pick 
            ds.push_back(nums[i]);
            map[i] = 1;
            helper(nums, ds, ans, map);  // there will be N! permutations. hence the TC for this call will be N!

            // remove 
            ds.pop_back();
            map[i] = 0;

        }
    }
}



int main(){

    // inputs 
    vector<int> nums;
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(3);

    // data structures
    vector<int> ds;
    vector<vector<int> > ans;
    vector<int> map(nums.size(), 0);

    helper(nums, ds, ans, map);
    
    // for( int j = 0; j < ans[0].size(); j++ ){
    //     cout << ans[0][j] << " "; 
    // }

    //print ans 
    for( int i = 0; i < ans.size(); i++ ){
        for (int j = 0; j < ans[i].size() ; j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
        
    }
    
    return 0;
}