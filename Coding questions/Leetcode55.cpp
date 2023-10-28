/*
You are given an integer array nums. You are initially positioned at the array's first index, and each element in the array represents your maximum jump length at that position.

Return true if you can reach the last index, or false otherwise.
*/


#include <iostream>
#include <vector>
using namespace std;


int main(){

    int nums[] = {2,3,1,1,4};
    int size = sizeof( nums ) / sizeof( nums[0] );

    int sum = 0;
    //int size = nums.size();
    int current_element = nums[0];

    while( sum < (size - 1) ){

        sum = sum + current_element;
        current_element = nums[ sum ];

    }

    cout << sum << endl;

    if( sum == ( size - 1 ) )
        cout << "true" << endl;
    else
        cout << "false" << endl;


    return 0;
}
