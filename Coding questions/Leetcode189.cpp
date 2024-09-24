#include <iostream>
using namespace std;

void reverseArr( vector<int> &nums, int start, int end);

int main(){

    int k = 0;
    vector<int> nums;
    nums.push_back(1);
    // nums.push_back(-100);
    // nums.push_back(3);
    // nums.push_back(99);
    
    int size = nums.size() - 1;

    // reverse from 0 to size - k - 1
    reverseArr( nums, 0, size - k);

    // reverse from (d + 1) to (n - 1)
    reverseArr( nums, size - k + 1, size);

    // reverse the entire array  
    reverseArr( nums, 0, size);

    //printing array 
    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << endl;
    }
    
    
    return 0;
}

void reverseArr( vector<int> &nums, int start, int end){
    cout << "Start: " << start << " End: " << end << endl;
    int mid = ( end + start )/2;
    int i = 0;
    while (true){
        int swap = nums[start + i];
        nums[start + i] = nums[ end - i];
        nums[end - i] = swap;
        if( start + i == mid){
            break;
        }
        i++;
    }
    
    //printing array 
    // for (int i = 0; i < nums.size(); i++)
    // {
    //     cout << nums[i] << endl;
    // }
}