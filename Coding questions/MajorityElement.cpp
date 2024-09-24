#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

vector<int> majorityElementII(vector<int> &arr);

int main(){

    // give some input 
    vector<int> arr;
    vector<int> result = majorityElementII( arr );

    return 0;
}


vector<int> majorityElementII(vector<int> &arr){
    // Sorting is working
    sort(arr.begin(), arr.end());

    vector<int> result;
    int limit = arr.size()/3;

    int count = 0;

    for( int i = 0; i < arr.size() ; i++ ){
        if( arr[i] == arr[i+1]){
            count++;
        }
        else if( arr[i] != arr[i+1]){
            count++;
            if( count > limit ){
                result.push_back( arr[i]);
            }
            count = 0;
        }
    }
    return result;
}