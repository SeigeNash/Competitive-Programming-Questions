#include <iostream>
using namespace std;

// the following question can be performed by two methods

int main(){

    void swapAlternateUsingXOR(int *arr, int size);
    void swapAlternateUsingSwap(int *arr, int size);

    
    int size = 7;
    int arr[] = { 2, 3, 7, 8, 3, 4, 9 };

    for( int k = 0; k < size; k++ ){

        cout<< arr[k] << endl;

    }

    
}


// by using swap 


void swapAlternateUsingSwap(int *arr, int size){

    int i = 0 , j = 1 , swap;
    int k;

    for( int k = 1; k <= size/2; k++ ){

        swap = arr[i];
        arr[i] = arr[j];
        arr[j] = swap;

        i += 2;
        j += 2;

    }

}


// the following function does the same by performing XOR operator

void swapAlternateUsingXOR(int *arr, int size)

{

    for(int i=0; i<size-1; i+=2) {

        arr[i] ^= arr[i+1];

        arr[i+1] ^= arr[i];

        arr[i] ^= arr[i+1];

    }

}