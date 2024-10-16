#include <iostream>
#include <vector>
using namespace std;

// no error but wont stop printing 

int calculateSubsets( int i, vector<int> &nums, vector<int> &ds, vector<vector< int > > &result, int sum, int K);
void printing2D( vector< vector<int> > result );
void print1D( vector<int> final);

int main(){

    vector<int> nums;       //define nums in question
    int K = 2;

    //insertion
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(1);

    vector<int> ds;
    vector< vector<int> > result;
    int sum = 0;
    bool res = calculateSubsets( 0, nums, ds, result, sum, K);
    cout << res << endl;

    //printing2D( result );

    return 0;
}

int calculateSubsets( int i, vector<int> &nums, vector<int> &ds, vector<vector< int > > &result, int sum, int K) {

    //base condition 
    if( i == nums.size() ){
       if( sum == K){
        return 1;
       }
       return 0;
    }

    sum += nums[i];
    int l = calculateSubsets( i + 1, nums, ds, result, sum, K);
    
    sum -= nums[i];
    int r = calculateSubsets( i + 1, nums, ds, result, sum, K);
    return l + r;

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


