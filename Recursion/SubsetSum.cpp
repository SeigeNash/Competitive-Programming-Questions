/*
Given a list arr of N integers, return sums of all subsets in it. Problem available on geeksforgeeks
*/

#include <iostream>
#include <vector>
using namespace std;

void helper( int i, vector<int> &result, vector<int> &arr, vector<int> &ds, int N);

int main(){

    // define inputs 
    int N = 3;
    vector<int> arr;
    arr.push_back(5);
    arr.push_back(2);
    arr.push_back(1);

    vector<int> result;
    vector<int> ds;     
    helper( 0, result, arr, ds, N);

    cout << "elements in result: ";
    for( int i = 0; i < result.size(); i++ ){
        cout << result[i] << " ";     
    }
    
    return 0;
}


void helper( int i, vector<int> &result, vector<int> &arr, vector<int> &ds, int N){
        
    if( i == arr.size() ){
        // calculate sum of all the elements in vector ds
        int sum = 0;
        for( int s = 0; s < ds.size(); s++ ){
            //cout << ds[s] << " ";
            sum = sum + ds[s];    
        }
        //cout << sum << endl;
        result.push_back(sum);
        return;
    }
    //cout << "Pushing arr[i] in ds: " << i << endl;    
    ds.push_back( arr[i] );
    helper( i + 1, result, arr, ds, N);
    ds.pop_back();
    helper( i + 1, result, arr, ds, N);
        
}