#include <iostream>
#include <vector>
using namespace std;

// no error but wont stop printing 

void calculateSubsets( int i, int n, int * nums, vector<int> ds, vector<int> final);
void printing2D( vector< vector<int> > final );
void print1D( vector<int> final);

int main(){

    vector<int> ds;
    vector< vector<int> > result;
    vector<int> nums;       //define nums in question
    calculateSubsets( 0, result, nums, ds);

    return 0;
}

void calculateSubsets( int idx, vector<vector< int > > &result, vector<int> &nums, vector<int> &ds) {

    //pushing ds in final vector
    result.push_back(ds);
    for(int i = idx; i < nums.size(); ){
        //for selecting 
        ds.push_back( nums[i] );
        calculateSubsets( i+1, result, nums, ds);
        //for deselecting 
        ds.pop_back();
        i++;
    }
}


