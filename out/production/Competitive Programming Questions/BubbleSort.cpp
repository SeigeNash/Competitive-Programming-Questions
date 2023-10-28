#include<iostream>
#include<vector>
using namespace std;

/*
Best case time complexity for bubble sort : O(N)
Worst case time complexity for bubble sort : O(N^2)
*/

int main(){

    int arr[] = {2, 4, 3, 28, 37, 19};
    int size = sizeof( arr ) / sizeof( arr[0]);
    cout << "The size of array is : " << size << endl;
    
    for (int i = 1; i < size ; i++)
    {

        bool swapped = false;           // code optimisation. If swapped becomes false, it means no more iterations are needed. Th array is sorted.

        for (int j = 0; j < (size - i); j++)
        {
            if (arr[j] > arr[j+1])
            {
                swap(arr[j], arr[j+1]);
                swapped = true;
            }
            
        }

        if ( swapped == false)
        {
            break;
        }
        
        
    }

    for (int j = 0; j < size; j++)
    {
        cout << arr[j] << endl;
    }
    
    
    return 0;
}
