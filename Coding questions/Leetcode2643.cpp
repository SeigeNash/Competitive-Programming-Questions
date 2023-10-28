#include <iostream>
#include <vector>

using namespace std;


int main(){


    int sum = 0;
    int max = 0;
    int result_row = 0;

    int matrix[3][3] = {{0}, {0}};
    int rows = 3;
    int columns = 3;


    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            sum = sum + matrix[i][j];
        }
        if( sum > max ){
            max = sum;
            result_row = i;
        }
        sum = 0;
        
    }

    cout << max << " " << result_row << endl;
    


    return 0;
}