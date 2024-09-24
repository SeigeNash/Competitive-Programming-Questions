#include <iostream>
using namespace std;


int main(){

    vector<vector<int> > res;       
    vector<int> ds;
    //sort( nums.begin(), nums.end());
    //helper( 0, nums, ds, res);
    
    return 0;
}

void helper( int idx, vector<int>& nums, vector<int>& ds, vector< vector<int> >& res){
    res.push_back(ds);
    // for (int i = idx + 1; i < nums.size() ; i++)
    for (int i = idx ; i < nums.size() ; i++){
        // if( nums[i] == nums[i-1] && i != idx )
        if( i != idx && nums[i] == nums[i-1]){
            continue;
        }
        ds.push_back( nums[i]);
        helper( i + 1, nums, ds, res);
        ds.pop_back();
    }
}


/*
errors -
1. if( nums[i] == nums[i-1] && i != idx ) gives me UndefinedBehaviorSanitizer
2. for (int i = idx + 1; i < nums.size() ; i++) doesnt give me the desired output. maybe its becasue i = idx + 1 can give me i = (nums.size() - 1) + 1. 
*/