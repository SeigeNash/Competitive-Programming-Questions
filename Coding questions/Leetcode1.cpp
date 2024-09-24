#include <iostream>
#include <vector>
using namespace std;


void helper(vector<int>& nums, int target, vector<int>& ds, int i ) {

    if( i == nums.size() ){
        return; 
    }
    if( target == 0 ){
        cout << "true" << endl;
        // print the elements in ds
        
        for (int j = 0; i < ds.size(); ++i) {
            cout << ds[j] << " ";
        } cout << endl;
        
        return; 
    }   
    if( ds.size() == 2 ){
        // print the elements in ds
        if( target == 0 ){
            for (int j = 0; i < ds.size(); ++i) {
                cout << ds[j] << " ";
            } cout << endl;
        }
        return; 
    }

    // add the element 
    ds.push_back(nums[i]);
    helper(nums, target - nums[i], ds, i );

    // remove the element 
    ds.pop_back();
    helper(nums, target, ds, i++ );

}


int main(){

    vector<int> nums;
    nums.push_back(2);
    nums.push_back(3);
    nums.push_back(4);
    vector<int> ds;
    helper(nums, 6, ds, 0 );
    
    return 0;
}