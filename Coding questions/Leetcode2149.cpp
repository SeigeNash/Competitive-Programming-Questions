#include <iostream>
#include <vector>
using namespace std;

// one solution is to use two different arrays ones that stores the positive numbers while the other that storesthe negative numbers
// i need to make a code that uses O(1) space complexity

vector<int> rearrangeArray(vector<int>& nums);
void helper( vector<int>& nums);

int main(){

    // inputs
    vector<int> nums;
    nums.push_back(3);
    nums.push_back(1);
    nums.push_back(-2);
    nums.push_back(-5);
    nums.push_back(2);
    nums.push_back(-4);

    helper( nums );

    // printing vector 
    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";w
    }
    

    return 0;
}

void helper( vector<int>& nums){

    int evenpos = 0;
    int oddpos = 1;
    for( int i = 0; i < nums.size(); ){
        if( i%2 == 0 ){
            if( nums[i] >= 0 ){
                i++;
            } else {
                swap( nums[i], nums[evenpos]);
                evenpos += 2;
            }
        } else {
            if( nums[i] < 0 ){
                i++;
            } else {
                swap( nums[i], nums[oddpos]);
                oddpos += 2;
            }
        }
    }
}

// solution that uses O(N) space complexity
vector<int> rearrangeArray(vector<int>& nums) {
        
        vector<int> pos;
        vector<int> neg;

        for( int i = 0; i < nums.size(); i++ ){
            if( nums[i] > 0 ){
                pos.push_back(nums[i]);
            } else {
                neg.push_back(nums[i]);
            }
        }
        int p = 0;
        int n = 0;
        for( int i = 0; i < nums.size(); i++ ){
            if( i%2 == 0 ){
                nums[i] = pos[p];
                p++;
            } else {
                nums[i] = neg[n];
                n++;
            }
        }
        return nums;
    }