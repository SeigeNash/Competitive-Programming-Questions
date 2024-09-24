#include <iostream>
using namespace std;


int main(){

    // input 
    int arr[] = {1, 5, 7, 1};
    int k = 6;

    int count = arrMethod( arr, k, 4);
    
    return 0;
}

int arrMethod( int* arr, int k, int n){

    int h[2000000] = {0};
    int count = 0;
    for(int i=0; i<n; i++){       // iterating over the entire array
        if( arr[i]>k )            // we dont need to consider the elements that are greater than the sum
            continue;
        // k - arr[i] will give me the other element of the pair. for ex 6-2 = 4. 4 and 2 are a pair.
        // for every element smaller than k, i will increment the array h atleast once.
        // when the element corresponding to (k-arr[i]) is greater than 0, that mean the pair exixts and i will increment count 
        if( h[k-arr[i]]>0 ){ 
            count += h[k-arr[i]];
        }
        h[arr[i]]++;
    }
    return count;

}