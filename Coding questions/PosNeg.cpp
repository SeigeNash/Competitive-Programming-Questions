/*
Given an array of equal +ve and -ve elements. arrange them such that +ve and _ve is alternate and their relative order is not destroyed. 
*/

#include <iostream>
#include <vector>
using namespace std;


int main(){


    int arr[] = { 1, -2, -3, 4, -5, 6};
    int res[6];
    int pos_idx = 0;
    int neg_idx = 1;

    for (int i = 0; i < 6; i++)
    {
        if (arr[i] > 0)
        {
            res[pos_idx] = arr[i];
            pos_idx += 2;
        }
        else if (arr[i] < 0)
        {
            res[neg_idx] = arr[i];
            neg_idx += 2;
        }  
    }

    // printing 
    for (int i = 0; i < 6; i++)
    {
        cout << res[i] << " ";
    }
    
    
    
    return 0;
}