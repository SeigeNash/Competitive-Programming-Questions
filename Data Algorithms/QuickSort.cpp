#include <iostream>
using namespace std;

// the following function defines the working of how comparision and sorting happens within a certain partition 
int partition(int * arr, int low, int high){

    int pivot = arr[high];
    int i = low;

    for (int j = low; j <= high; j++)
    {
        if( arr[j] < pivot ){
            // i is being incremented first because the value of i currently is low - 1
            swap( arr[i], arr[j]);
            i++;
        }
    }
    // the array has been sorted according to elements lower than pivot near the beginning and vice versa
    // push pivot at the back 
    swap( arr[i], arr[high]);

    return i;
}

// the following method defines how the partiotions must be created 
void quickSort( int * arr, int low, int high){

    if( low < high ){
        int pivot = partition( arr, low, high );

        quickSort( arr, low, pivot - 1);
        quickSort( arr, pivot + 1, high);
    }

}

int main(){

    int arr[] = { 5, 6, 1, 55, 24, 89, 72};
    int size = sizeof( arr ) / sizeof( arr[0] );

    quickSort( arr, 0, size - 1);

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }
    
    return 0;
}