#include <iostream>
#include <vector>
using namespace std;

// no error but wont stop printing 

void calculateSubsets( int i, vector<vector< int > > &result, vector<int> &nums, vector<int> &ds);
void printing2D( vector< vector<int> > final );
void print1D( vector<int> final);

int main(){

    vector<int> ds;
    vector< vector<int> > result;
    vector<int> nums;       //define nums in question
    calculateSubsets( 0, result, nums, ds);

    return 0;
}

void calculateSubsets( int i, vector<vector< int > > &result, vector<int> &nums, vector<int> &ds) {

    //base condition 
    if( i == nums.size() ){
        result.push_back( ds );
        return;
    }

    ds.push_back( nums[i] );
    calculateSubsets( i+1, result, nums, ds);
    ds.pop_back();
    calculateSubsets( i+1, result, nums, ds);

}


