#include <iostream>
using namespace std;

// merge sort is didving the array and then merging it. Since returning new arrays everytime is a bit too muc, we play with pointers.
// meaning that we work on the same aaray 


void merge( int* arr, int low, int mid, int high){

    int temp[high+1];
    // comparing and filling 
    int l = low; 
    int r = mid + 1;
    int i = 0;

    while( l <= mid && r <= high){
        if( arr[l] < arr[r] ){
            temp[i] = arr[l];
            l += 1;
            i += 1;
        } else if( arr[r] < arr[l]){
            temp[i] = arr[r];
            r += 1;
            i += 1;
        }
    }
    
    // after the loop ends, fill in the remaining elements 
    while( l <= mid ){
        temp[i] = arr[l];
        l += 1;
        i += 1;
    }
    while( r <= high ){
        temp[i] = arr[r];
        r += 1;
        i += 1;
    }
    
    // filling elememts in the original array 
    for( int i = low; i <= high; i++ ){
        // since temp always starts from 0
        arr[i] = temp[ i - low ];
    }


}



void divide( int* arr, int low, int high){
    if( low == high ){
        return;
    }
    int mid = (low + high) / 2;
    divide( arr, low, mid );
    divide( arr, mid+1, high);
    merge( arr, low, mid, high);

}




int main(){

    int arr[] = {30, 80, 10, 90, 40};
    int high = sizeof(arr) / sizeof( arr[0]);
   
    divide( arr, 0, high - 1);

    for( int i = 0; i < high; i++ ){
        cout << arr[i] << " "; 
    }

    return 0;
}