#include <iostream>
#include <vector>
#include <unordered_map>
#include <map>
using namespace std;


int main(){

    // inputs 
    int k = 5;
    vector<int> nums;
    nums.push_back(2);
    nums.push_back(3);
    nums.push_back(5);
    
    return 0;
}


// optimal solution for both positives and negatives
int helper1(vector<int> &nums, int k){

    // Write your code here
    map<long long, int> umap;
    long long sum = 0;
    int max_len = 0;
    long long diff;

    for( int i = 0; i < nums.size(); i++ ){
        sum += nums[i];
        if( sum == k ){
            max_len = max(max_len, i+1);
        }
        
        diff = sum - k;

        // if diff exists in umap, comapare lengths
        // if the length is greater than the previous length, store
        if( umap.find(diff) != umap.end() ){
            int len = i - umap[diff];
            max_len = max(max_len, len);
        }
        if( umap.find(sum) == umap.end() ){
            umap[sum] = i;
        }
    }
    return max_len;
}


// most optimal solution for only positives 
int helper2( vector<int> &a, int k ){

    // Write your code here
    int maxi = 0;
    long long sum = a[0];
    int start = 0;
    int ptr = 0;

    while( ptr < a.size() ){
        while( start <= ptr && sum > k ){           // this also insures start doesnt go beyond
            // i need to keep on subtracting the start from the sum 
            sum -= a[start];
            start += 1;         // increment start
        }
        if( sum == k ){
            maxi = max( maxi, ptr - start + 1);
        } 
        ptr += 1;
        if( ptr < a.size() ){
            sum += a[ptr];
        }
            
    }
    return maxi;
}