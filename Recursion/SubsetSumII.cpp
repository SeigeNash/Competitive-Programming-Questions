/*
Given a list nums of N integers, return sums of all subsets in it. The elements are duplicate.
*/

#include <iostream>
#include <vector>
using namespace std;

void helper( int idx, vector<int> &nums, vector<int> &ds, vector<vector<int> > res);

int main(){

    // define inputs 
    vector<int> nums;
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(2);
    nums.push_back(2);
    nums.push_back(3);
    nums.push_back(3);
    
    vector<vector<int> > res;
    vector<int> ds;     

    helper( 0, nums, ds, res);
    cout << "Res size: " << res.size() << endl;

    // for (int i = 0; i < res.size(); i++) {
    //     cout << res[i] << " "; 
    // }
    
    return 0;
}


void helper( int idx, vector<int> &nums, vector<int> &ds, vector<vector<int> > res){
        
    res.push_back(ds);
    for (int i = idx ; i < nums.size() ; i++){
        if( nums[i] == nums[i-1] && i != idx){      // i-1 becasue we need to include i first then compre if we had already taken i-1 before this iteration
                continue;
        }
        ds.push_back( nums[i]);
        helper( i + 1, nums, ds, res);      // i+1 because idx stays the exact same for every recursive call
        ds.pop_back();
    }
          
}