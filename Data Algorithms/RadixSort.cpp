#include <iostream>
#include <vector>
#include <unordered_map>


using namespace std;

// take the mod of all the numbers in the array with the powers of 10
// after that, store the individual digits at individual places in an array
// sort the array with the digits 
// now sort the original array with respect to the sorted array


int main(){

    int arr[][2] = { {121, 0}, {432, 0}, {564, 0}, {19, 0}, {1, 0}, {37, 0}, {788, 0}};
    int sizeOfArr = sizeof( arr ) / sizeof( arr[0] );
    
    int sizeOfLargestNumber = 3;
    int exp = 0;


    // for (auto pair : hashMap) {
    //     std::cout << "Key: " << pair.first << ", Value: " << pair.second << std::endl;
    // }
    
    for (int i = 0; i < sizeOfLargestNumber; i++)
    {
        // this loop store the value of digits in the array

        for (int j = 0; j < sizeOfArr; i++){
            int temp = arr[i][0];

            double p1 = pow(10, exp);
            double p2 = pow(10, exp + 1);

            int a = temp % int(p2);                     // this is where test cases can get stuck
            a = a / p1;

            arr[i][1] = a;

            

        }
        
    }
    
    
    


    return 0;
}