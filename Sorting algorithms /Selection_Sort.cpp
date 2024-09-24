#include <iostream>
using namespace std;



void ascending(int *arr, int s){

    for(int i = s - 1; i > 0; i--){
        for( int j = 0; j < i; j++ ){
            if( arr[i] < arr[j]){
                arr[i] = arr[i] + arr[j];
                arr[j] = arr[i] - arr[j];
                arr[i] = arr[i] - arr[j];
            }
        }
    }
}

void descending(int *arr, int s){

    for(int i = s - 1; i > 0; i--){
        for( int j = 0; j < i; j++ ){
            if( arr[i] > arr[j]){
                arr[i] = arr[i] + arr[j];
                arr[j] = arr[i] - arr[j];
                arr[i] = arr[i] - arr[j];
            }
        }
    }
}


int main(){

    int arr[] = {70, 40, 50, 30, 20, 60, 10};

    descending(arr, sizeof(arr)/sizeof(arr[0]));
    
    for( int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++ ){
        cout << arr[i] << " ";
    }
    return 0;
}

