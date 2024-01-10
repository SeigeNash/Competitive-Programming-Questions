#include <iostream>
#include <vector>
using namespace std;

// no error but wont stop printing 

void calculateSubsets( int i, vector<int> &nums, vector<int> &ds, vector<vector< int > > &result, int sum, int K);
void printing2D( vector< vector<int> > result );
void print1D( vector<int> final);

int main(){

    vector<int> nums;       //define nums in question
    int K = 2;

    //insertion
    nums.push_back(1);
    nums.push_back(1);
    nums.push_back(1);

    vector<int> ds;
    vector< vector<int> > result;
    int sum = 0;
    calculateSubsets( 0, nums, ds, result, sum, K);

    //printing2D( result );

    return 0;
}

void calculateSubsets( int i, vector<int> &nums, vector<int> &ds, vector<vector< int > > &result, int sum, int K) {

    //base condition 
    if( i == nums.size() ){
       if( sum == K){
        // print ds
        for(auto it : ds){
            cout << it << " ";
        }
        cout << endl;
        //result.push_back( ds );
       }
       return;
    }

    ds.push_back( nums[i] );
    sum += nums[i];
    calculateSubsets( i + 1, nums, ds, result, sum, K);
    ds.pop_back();
    sum -= nums[i];
    calculateSubsets( i + 1, nums, ds, result, sum, K);

}




void printing2D( vector< vector<int> > result ){

    for (int i = 0; i < result.size() ; i++)
    {
        int size = result[i].size();
        for (int j = 0; i <  size; i++)
        {
            cout << result[i][j] << " ";
        }
        cout << endl;
        
    }
    
}


