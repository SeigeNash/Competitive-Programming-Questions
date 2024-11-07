#include <iostream>
using namespace std;


int count = 0;

void merge( vector<int>&a, int low, int mid, int high){

    int temp[high+1];
    // comparing and filling 
    int l = low; 
    int r = mid + 1;
    int i = 0;

    while( l <= mid && r <= high){
        if( a[l] < a[r] ){
            temp[i] = a[l];
            l += 1;
            i += 1;
        } else if( a[r] < a[l]){
            // this is the condition we need 
            temp[i] = a[r];
            count = mid - low + 1;
            r += 1;
            i += 1;
        }
    }
    
    // after the loop ends, fill in the remaining elements 
    while( l <= mid ){
        temp[i] = a[l];
        l += 1;
        i += 1;
    }
    while( r <= high ){
        temp[i] = a[r];
        r += 1;
        i += 1;
    }
    
    // filling elememts in the original array 
    for( int i = low; i <= high; i++ ){
        // since temp always starts from 0
        a[i] = temp[ i - low ];
    }


}



void divide( vector<int>&a, int low, int high){
    if( low == high ){
        return;
    }
    int mid = (low + high) / 2;
    divide( a, low, mid);
    divide( a, mid+1, high);
    merge( a, low, mid, high);

}



// int numberOfInversions(vector<int>&a, int n) {
//     // Write your code here.
    
//     divide( a, 0, n-1);
//     return count; 
// }


int main(){


    
    return 0;
}