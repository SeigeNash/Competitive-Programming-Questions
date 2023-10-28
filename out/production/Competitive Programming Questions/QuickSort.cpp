#include <iostream>
#include <vector>

/*

Partition( l, h ){

    pivot = A[l];
    i = l, j = h;

    while( i < j ){

        do{
            i++;
        }while( A[i] <= pivot )

        do{
            j--;
        }while( A[j] > pivot );

        if( i <= j){
            swap( A[i], A[j])
        }
        swap( A[l], A[j] )
        return j;

    }
}


*/



using namespace std;

int main(){

    
    int arr[] = {10, 80, 30, 90, 40};

    


    return 0;

}


int partition( int * arr, int low, int high ){

    int pivot = arr[ low ];
    int i = low, j = high;

    while( i < j ){

        do{
            i++;
        }while( arr[i] <= pivot );

        do{
            j--;
        }while( arr[j] > pivot );

        if( i <= j){
            swap( arr[i], arr[j]);
        }

        swap( arr[ low ], arr[j] );

        return j;

    }

}