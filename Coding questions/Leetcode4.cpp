#include <iostream>
#include <vector>
using namespace std;

int main(){

    int nums1[] = { 1, 2, 3, 4, 5, 66, 77};
    int nums2[] = { 4, 5, 6, 7, 9, 37, 49};

    int size_num3 = ( sizeof( nums1 )/ sizeof( nums1[0] ) + sizeof( nums2 )/ sizeof( nums2[0] ) );
    int mid = size_num3 / 2;
    int nums3[size_num3];

    sort( nums3, nums3 + size_num3);

    if( size_num3 % 2 != 0 ){
        cout<< nums3[mid] << endl;
    }
    else {
        float median = (nums3[mid] + nums3[mid + 1]) / 2;
    }



    return 0;
}
