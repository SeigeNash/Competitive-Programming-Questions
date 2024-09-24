#include <iostream>
#include <vector>
#include <unordered_map>
#include <map>
using namespace std;

int LCSHashMap( vector<int> &nums);
void printHashMap( map<int,int> &numCount);

// This code has o(N^3) time complexity and space complexity O(1)
// If I sort the array I get it in O(nlogn) complexity and O(1) space complexity
// I need to do this in O(N) time complexity

int main(){
    
    // give inputs
    vector<int> nums;
    // nums.push_back(0);
    // nums.push_back(3);
    // nums.push_back(7);
    // nums.push_back(2);
    // nums.push_back(5);
    // nums.push_back(8);
    // nums.push_back(4);
    // nums.push_back(6);
    // nums.push_back(0);
    // nums.push_back(1);

    int res = LCSHashMap( nums);
    cout << res << endl;
    return 0;
}



// time - O(N) <O(NlogN)?>. Space - O(1). Involves map (hashmao). IT WORKS!! but i am still skepticle about its time complexity 

int LCSHashMap( vector<int> &nums){
    if( nums.size() == 0){
        return 0;
    }
    map<int, int> numCount;
    // for storing frequencies 
    for( int num : nums ){
        numCount[num] += 1;
    }
    // printHashMap(numCount);
    // for finding subsequences 
    int LCS = 0;
    int currentCS = 1;
    int currentKey;
    int prevKey = -1;
    bool firstIteration = true;

    for (const auto& pair : numCount) {
        currentKey = pair.first;
        // cout << "CurrentKey: " << currentKey << endl;
        if (!firstIteration) {          // if this is not the first iteration
            if( currentKey - prevKey == 1){
                // cout << "CurrentCS: " << currentCS << endl;
                currentCS += 1;
            }
            else if( currentKey - prevKey != 1){
                LCS = max( currentCS, LCS);
                currentCS = 1;
            }
        } else {        
            firstIteration = false;
        }
        prevKey = currentKey;
    }
    LCS = max( currentCS, LCS);
    return LCS;
}


void printHashMap( map<int,int> &numCount){
    for (const auto& pair : numCount) {
        cout << "Key: " << pair.first << ", Value: " << pair.second << std::endl;
    }
}


// time - O(N^3). Space - O(1). Involves linear search. 

// int lengthOfLongestConsecutiveSequence(vector<int> &arr, int n) {
//     // Write your code here.
//     int LCS = 0;
//     for(auto num : arr){
//         int currentNumber = num;
//         int currentCS = 1;      // current conitnuous subsequence length
//         while(linearSearch(arr, currentNumber+1)){
//             //if currentNumber+1 is found, make currentNumber = currentNumber+1
//             //make currentCS += 1
//             currentNumber += 1;
//             currentCS += 1;
//         }
//         LCS = max(LCS, currentCS);
//     }
//     return LCS;
// }

// bool linearSearch(vector<int>& arr, int target){
//     // linearSearch tries to find an element 1 larger than the current element
//     int n = arr.size();
//     for(int i=0; i<n; i++){
//         if(arr[i] == target){
//             return true;
//         }
//     }
//     return false;
// }


