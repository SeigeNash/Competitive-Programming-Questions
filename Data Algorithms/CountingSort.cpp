#include <iostream>
#include <vector>
using namespace std;


int main(){

    int i, j;

    int arr[] = { 1, 2, 3, 4, 5, 6, 2, 5, 3, 7, 2, 7, 3, 5, 3};
    int size = sizeof( arr ) / sizeof( arr[0] );
    int highest = 7;
    int val;

    int result[highest];

    for (int i = 0; i < highest; i++)
    {
        result[i] = 0;
    }

    // printing result array

    for (int i = 0; i < highest; i++)
    {
        cout << result[i] << "  ";
    }

    cout << endl;

    for (int i = 0; i < size ; i++)
    {
        
        val = arr[i];
        result[val - 1] += 1;

    }

    for (int i = 0; i < highest; i++)
    {
        cout << result[i] << "  ";
    }
    cout << endl;

    for (int i = 0; i < highest; i++)
    {
        for (int j = 0; j < result[i]; j++)
        {
            cout<< (i + 1) << "  ";
        }
        
    }

    return 0;
}

