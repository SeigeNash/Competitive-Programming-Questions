#include<iostream>
using namespace std;

int main(){

    int nums[] = { 0, 0, 1, 0, 2, 0, 1, 2, 0, 1, 0, 2, 2};

    int size = sizeof( nums ) / sizeof( nums[0]);
    int low = 0, mid = 0, high = size-1;
    while(mid <= high){
        if(nums[mid] == 0){
            swap(nums[low], nums[mid]);
            low++;
            mid++;
        }
        else if(nums[mid] == 1){
            mid++;
        }
        else{
            swap(nums[mid], nums[high]);
            high--;
        }
    }    
    for (int i = 0; i < size; i++)
    {
        cout << nums[i] << endl;
    }
    

    return 0;
}
