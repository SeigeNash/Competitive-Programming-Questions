#include <iostream>
#include <algorithm>
using namespace std;


int findDuplicate(int* nums);

int main(){

    // give inputs 
    int nums[] = {1, 2, 3, 4, 4};
    int res = findDuplicate(nums);
    return 0;
}


int findDuplicate(int* nums ) {
    int swap, num;
    num = nums[0];
    while( nums[0] != nums[num]){
        // swap( nums[0], nums[num]);
        swap = nums[0];
        nums[0] = nums[num];
        nums[num] = swap;
        num = nums[0];
    }
    return nums[0];
}


// linked list cyclic method - rabbit and hare method