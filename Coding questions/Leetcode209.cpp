#include <iostream>
using namespace std;

int minSubArrayLen(int target, vector<int>& nums);

int main(){

    // input 
    vector<int> nums;
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(3);
    nums.push_back(4);
    nums.push_back(5);
    int target = 11;

    int res = minSubArrayLen(target, nums);
    cout << res << endl;

    return 0;
}

int minSubArrayLen(int target, vector<int>& nums) {

    int sum = 0;
    int minlen = INT_MAX;
    int currlen = 0;
    int start = 0;
    int flag = 0;
    int i;

    // the following loop works only till i reaches the end of the array
    for( i = 0; i < nums.size(); ){
        if( nums[i] >= target ){
            return 1;
        }
        currlen = ( i - start ) + 1;           
        sum += nums[i];
        if ( sum == target ){
            flag = 1;
            minlen = min( minlen, currlen);
        } else if( sum > target ){
            flag = 1;
            minlen = min( minlen, currlen);
            sum -= nums[start];
            start +=1;
            if( sum == target ){           // condition after trimming
                currlen -= 1;
                minlen = min(currlen, minlen);
            }
        }
    }
        // after i reaches the end of the array 
    cout << "Value of currlen: " << currlen << " and minlen: " << minlen << " Value of sum: " << sum << endl;
    cout << "Value of i: " << i << " Value of start: " << start << endl;
    i = i - 1;
    while( start != i ){
        if( sum < target ){
            break;
        }
        currlen = ( i - start ) + 1;           
        minlen = min( minlen, currlen);
        sum -= nums[start];
        start += 1;
        
    }
        
    if( flag == 0 ){
        return 0;
    }
    return min(currlen, minlen);
}