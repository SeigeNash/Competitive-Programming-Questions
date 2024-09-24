#include <iostream>
using namespace std;


int main(){

    int arr[] = {1,2,2,1,1,2,2,3,4,5};
    int candidate = 0;
    int count = 0;

    for( int i = 0; i < 7; i++ ){
        if( count == 0 ){
            candidate = arr[i];
        } 
        if( arr[i] == candidate ){
            count += 1;
        } else {
            count -= 1;
        }
    }

    cout << candidate;
    return 0;
}