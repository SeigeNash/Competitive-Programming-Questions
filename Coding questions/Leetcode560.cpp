#include <iostream>
using namespace std;

int subarraySum(vector<int>& nums, int k);
int helper(vector<int>& nums, int k);

int main(){

    int k = 6;
    vector<int> nums;
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(4);
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(3);

    int result = helper( nums, k);
    cout << result << endl;
    
    return 0;
}

// Debug this
int helper(vector<int>& nums, int k){
    int start = 0;
    int sum = 0;
    int count = 0;

    for( int i = 0; i < nums.size(); i++){
        sum += nums[i];
        if( sum == k ){
            count += 1;
            sum -= nums[start];
            start += 1;
            cout << "Cond1 Pair starts at: " << nums[start] << " ends at: " << nums[i] << endl;
        } 
        else if( sum > k ){
            sum -= nums[start];
            start += 1;
            cout << "Cond2 Pair starts at: " << nums[start] << " ends at: " << nums[i] << endl;
        }

    }
    return count;

}


// this will work only on positives 
int subarraySum(vector<int>& nums, int k) {

    // int maxi = INT_MIN;
        int sum = nums[0];
        int count = 0;
        int start = 0;
        int ptr = 0;

        while( ptr < nums.size() ){
            while( start < ptr && sum > k ){           // this also insures start doesnt go beyond
                // i need to keep on subtracting the start from the sum 
                sum -= nums[start];
                start += 1;         // increment start
            }
            if( sum == k ){
                count += 1;
            } 
            ptr += 1;
            if( ptr < nums.size() ){
                sum += nums[ptr];
            }
            
        }
        return count;
        
}