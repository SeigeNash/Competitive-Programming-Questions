#include <iostream>
#include <vector>
using namespace std;

int main(){

    int cost = 0;
    float A[] = { 0.74, 0.17, 0.26, 0.72, 0.39, 0.21};
    int size = sizeof( A ) / sizeof( A[0] );
    float B[size][size];

    // initialize B with null values
    for( int i = 0; i < size ; i++ ){

        for (int j = 0; j < size; j++)
        {
            B[i][j] = 0;   
        }

    }

    // traversal loop
    for (int i = 0; i < size; i++)
    {
        // calculate cost 
        cost = int(size * A[i]);

        for (int j = 0; j < size; )
        {
            if( B[cost][j] == 0){
                B[cost][j] = A[i];
                break;
            }
            else{
                j++;
            }
        }

    }

    // printing buckets
    for( int i = 0; i < size ; i++ ){

        for (int j = 0; j < size; j++)
        {
            cout << B[i][j] << "   ";   
        }   
        cout << endl;
        
    }

    // perform sorting on all the buckets   


    for (int i = 0; i < size; i++)
    {
        if( B[i][0] == 0){
            // skip this subarray 
            continue;
        }
        else{

            // quick sort by skipping 0 
        }
    }

    // insert the element back into A from sorted buckets B
    for (int i = 0; i < size; i++)
    {
        int num = 0;
        if( B[i][0] == 0){
            continue;
        }
        
        int j = 0;
        while( B[i][j] != 0)
        {
            
            A[num] = B[i][j];
            j++;
            num++;
        }
        
    }


    // printing buckets
    ////// the code has a fault
    cout<< endl;
    for( int i = 0; i < size ; i++ ){

        cout << A[i] << "   ";    
        cout << endl;
        
    }
    

    return 0;

}


// functioin for quick sort 


