#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int> nums;
    nums.push_back(3);
    nums.push_back(4);
    nums.push_back(2);
    nums.push_back(1);
    nums.push_back(5);

    // vector<int> final_arr;
    // final_arr.push_back(nums[0]);

    for (int i = 1; i < nums.size() ; i++)
    {
        int temp = nums[i];
        for (int j = i -1 ; j >= 0 ; j--)
        {

            if ( nums[j] > temp )
            {
                nums[j+1] = nums[j];
                nums[j] = temp;
            }
            // else
            //     final_arr.push_back(nums[i]);
            
        }
        
        
    }

    for (int i = 0; i < nums.size(); i++)
    {
        cout <<nums[i] << endl;
    }
    
    

    return 0;
}
