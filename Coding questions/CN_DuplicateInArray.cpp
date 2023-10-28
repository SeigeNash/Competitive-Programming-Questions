#include <iostream>
#include <algorithm>
using namespace std;

int main(){

    int findDuplicateThroughSlidingWindow(vector<int> &arr);

    vector<int> arr { 1, 7, 9, 4, 8, 7, 8, 2, 9 };
    cout << arr[0] << endl;


    return 0;

}

int findDuplicateThroughSlidingWindow(vector<int> &arr) 
{
    std::sort( arr.begin(), arr.end() );
    int size = sizeof( arr )/ sizeof( arr[0] );

    for (int i = 0; i < size; i++)
    {
        /* code */
    }
    

    return 0;
	
}


// for the XOR approach 
// we know that an element XOR itself gives 0 and 0 XOR something gives that element back
// given vector contains all the elemenets from 1 to N-1 atleast ones 
// it contains an extra element from 1 to N-1 
// next XOR all the elements with eleemnts from 1 to N-1 
// the answer remaoning is the element that got repeated



int findDuplicateThroughXOR(vector<int> &arr) 
{
    int ans = 0;

    for( int i = 0; i < arr.size() ; i++ ){

        ans = ans ^ arr[i];
    }

    for( int i = 1; i < arr.size() ; i++ ){

        ans = ans ^ i ;
    }


    return ans;
    
	
}
