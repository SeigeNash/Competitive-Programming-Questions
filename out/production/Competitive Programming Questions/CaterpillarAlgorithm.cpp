#include <iostream>
#include <vector>
using namespace std;


int main(){

    int arrayMethod( int * num_arr, int no_of_caterpillars, int no_of_leaves );

    int num_arr[] = { 2, 4, 5 };

    int count = arrayMethod( num_arr, 3, 10 );
    cout << "Th answer through array method is : " << count << endl;
    

    return 0;
}








// array method. time complexity = O(n^2), space complexity = O(n)

int arrayMethod( int * num_arr, int no_of_caterpillars, int no_of_leaves){

    int i = 1;
    int arr[no_of_leaves];
    int count = 0;


    // initialize an array 

    for (i = 0; i < no_of_leaves; i++)
    {
        arr[0] = i + 1;
    }
    
    for ( int j = 0; j < no_of_caterpillars; j++)
    {
        int num = num_arr[j];

        for ( i = 0; i < no_of_leaves; i++)
        {
            if( arr[i] % num == 0){

                arr[i] = 0;

            }
        }
    }
    

    for ( i = 0; i < no_of_leaves; i++)
    {
        if( arr[i] != 0){
            count += 1;
        }   
    }

    return count;

}