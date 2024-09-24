#include <iostream>
using namespace std;


void ascendingBubbleSort(int *arr, int s){

    for( int i = s - 1; i > 0 ; i-- ){
        for( int j = 0; j < i; j++ ){
            if( arr[j] > arr[j+1]){
                arr[j] = arr[j] + arr[j+1];
                arr[j+1] = arr[j] - arr[j+1];
                arr[j] = arr[j] - arr[j+1];
            }
        }
    }

}

void descendingBubbleSort(int *arr, int s){

    for( int i = s - 1; i > 0 ; i-- ){
        for( int j = 0; j < i; j++ ){
            if( arr[j] < arr[j+1]){
                arr[j] = arr[j] + arr[j+1];
                arr[j+1] = arr[j] - arr[j+1];
                arr[j] = arr[j] - arr[j+1];
            }
        }
    }

}

int main(){

    
    int arr[] = {70, 40, 50, 30, 20, 60, 10};

    //ascendingBubbleSort(arr, sizeof(arr)/ sizeof(arr[0]));
    
    descendingBubbleSort(arr, sizeof(arr)/ sizeof(arr[0]));

    for(int i = 0; i < sizeof(arr)/ sizeof(arr[0]); i++ ){
        cout << arr[i] << " ";
    }

    return 0;
}