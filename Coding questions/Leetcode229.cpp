#include <iostream>
#include <vector>
using namespace std;


int main(){

    // input 
    vector<int> nums;
    nums.push_back(3);
    nums.push_back(2);
    nums.push_back(3);
    
    int frequency = nums.size()/3;  
    int n = nums.size();
    sort(nums.begin(), nums.end());
    vector<int> res;

    int count = 0;
    int i = 1;
    for( i = 1; i < n ; i++ ){
        count += 1;
        if(nums[i - 1] != nums[i]){
            if(count > frequency){
                res.push_back(nums[i - 1]);
            }
            count = 0;
        }
    } 
    // condition for comparing last element with second last element 
    if( nums[n-2] == nums[n-1]){
        count +=1;
    }
    if( count > frequency ){
        res.push_back(nums[i - 1]);
    }

    // printing vectors
    for( int j = 0; j < res.size(); j++ ){
        cout << res[j] << " ";
    }
    return 0;
}