#include <iostream>
#include <vector>
using namespace std;

/********  UNSOLVED!!  ********/

// recursion approach gives TLE


void helper(int i, vector<int> &arr, int sum, vector<int> &ds, vector<vector<int> > &ans){
        
    // base case 
    if ( i >= arr.size() ){
        if(sum == 0){
            // append the answer inside the data structure 
            ans.push_back(ds);
        }
        return;
    }
        
    //if( arr[i] < sum ){   // we pick up element only if its smaller than target
    ds.push_back(arr[i]);       // this is for picking up
    helper(i + 1, arr, sum - arr[i], ds, ans);
    ds.pop_back();
    //}
    // not picking up the element 
    helper(i + 1, arr, sum, ds, ans);

    /*
    if( l + r >= 1){
        return 1;
    }
    */
        
}



int main(){

    // inputs 
    int sum = 9;
    vector<int> arr;
    arr.push_back(3);
    arr.push_back(34);
    arr.push_back(4);
    arr.push_back(12);
    arr.push_back(5);
    arr.push_back(2);



    vector<int> ds; 
    vector<vector<int> > ans;
    helper( 0, arr, sum, ds, ans);
        
    // if( ans.size() != 0){
    //     return 1;
    // }  


    
    return 0;
}