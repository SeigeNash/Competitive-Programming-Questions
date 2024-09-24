#include <iostream>
using namespace std;

int maxProduct(vector<int>& nums);

int main(){

    vector<int> nums;
    nums.push_back(-2);

    int ans = maxProduct(nums);
    cout << ans << endl;
    
    return 0;
}


int maxProduct(vector<int>& nums) {

    int suff, pre = 1;
    int ans = INT_MIN;
    int size = nums.size();

    for( int i = 0; i < size; i++ ){
        if( pre == 0 ){
            pre = 1;
        }
        if( suff == 0 ){
            suff = 1;
        }
        pre *= nums[i];
        suff *= nums[size - i - 1];
        ans = max( ans, max(pre, suff));
    }
    return ans;
}