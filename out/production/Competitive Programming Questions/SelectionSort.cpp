#include <iostream>
#include <vector>
using namespace std;

int main(){

    vector<int> arr;
    arr.push_back(5);
    arr.push_back(2);
    arr.push_back(3);
    arr.push_back(1);
    
    //int arr[] = {1, 7, 9, 2, 3, 0};
    int num = arr.size();
    int min = arr[0], swap;
    int place_holder = 0;
    
    for (int i = 0; i <= num - 2 ; i++)
    {
        cout << "Value of i: " << i << endl;
        cout << "Current value if min: " << min << endl;
        for (int j = i; j < num ; j++)
        {     
            if( min > arr[j] ){
                min = arr[j];
                place_holder = j;
                
            }

        }
        if( min != arr[i] ){
            swap = arr[i];
            arr[i] = min;
            arr[place_holder] = swap;
            // min = arr[i + 1];

        }
        min = arr[i + 1];
        
        // do soemthing about place holder

        

        cout << "Current status of array: "<< endl;
        for(int j = 0 ; j < num ; j++){
            cout << arr[j] << endl;
        }
        
    }


    cout << "printing all elements: "<< endl;
    for(int j = 0 ; j < num ; j++){
        cout << arr[j] << endl;
    }
    

    return 0;
}