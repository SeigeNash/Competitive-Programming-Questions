#include <iostream>
using namespace std;

// sort the array first  (done)
// make a small two elements long window and slide the window over the sorted array 
// if the two elements within the window are not same then the element on 
// the left is the unique element. return the element on the left 
// the loop will go till the seconf last element 
// if no unique elements are found till the second last element then the 
// last element is the answer. return the last element
// if the two elements within the window are same simply continue to the next iteration



// optimise 
int main(){

    int findUnique(int *arr, int size);
    int findUniqueThroughPointers(int *arr, int size);
    int XORApproach( int *arr, int size );

    int arr[] = { 7, 7, 9, 9, 3, 3, 44, 92, 92, 20, 20};
    int size = ( sizeof( arr ) / sizeof( arr[0] ) ) ;
    // cout << size << endl;
    
    int result = XORApproach( arr, size );

    cout << result << endl;

    
    return 0;


}

int findUnique(int *arr, int size){

    int i = 0;
    int j = 1;
    
    sort(arr, arr + size);

    while( i != size - 1 ){

        if( arr[i] != arr[j] ){
            // cout << "inside the condition. Value of i : " << i << endl;
            // cout << "inside the condition. Value of j : " << j << endl;
            return arr[i];
        }
        else{
            
            i += 2;
            j += 2;         // since j is just a variable, it can have values beyond the size of the array 
            // values of j greater than the size of array wont result in any out of bound errors 
        }
    }

    return arr[ size - 1 ];

}


// optimize this further

int findUniqueThroughPointers(int *arr, int size){

    int * i = arr;
    int * j = arr + 1;
    
    sort(arr, arr + size);

    while( i != arr + size ){           

        if( *i != *j ){
            
            return *i;
        }
        else{
            
            i += 2;
            j += 2;         
        }
    }

    return *( arr + size );

}

int XORApproach( int *arr, int size ){

    int ans = 0;
    for (int i = 0; i < size; i++)
    {
        ans = ans ^ arr[i];

    }

    return ans;
    
}