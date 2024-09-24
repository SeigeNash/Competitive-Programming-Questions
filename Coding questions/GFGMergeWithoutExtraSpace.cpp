#include <iostream>
using namespace std;


int main(){


    
    return 0;
}


void merge(long long arr1[], long long arr2[], int n, int m) { 
    int i = n -1;
    int j = 0;
    
    while( i >= 0 && j < m ){
        // why wouldnt ( arr2[j] > arr1[i] ) work?
        if( arr2[j] <= arr1[i] ){
            swap(arr2[j], arr1[i]);
            i--;
            j++;
        } 
        // why use this line of code?
        else{
            break;
        }
    }
    
    sort( arr1, arr1 + n);
    sort( arr2, arr2 + m);
} 