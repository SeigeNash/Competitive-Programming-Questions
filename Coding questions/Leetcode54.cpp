// spiral iteration of a matrix

#include <iostream>
#include <vector>

using namespace std;


int main(){

    int matrix[3][4] = { {1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12} };

    // the value of row and column need to be changed in every spiral iteration 
    int row = 3;
    int col = 4;
    // for a sqaure matrix, endR and endC will be same 
    int start = 0;
    int endR = row - 1;
    int endC = col - 1;
    int i, j = 0;
    int status = 0;

    // starting the main loop here 

    while( start <= endR &&  start <= endC ){

        i = start;
        for (j = start; j <= endC ; j++)
        {
            std::cout << matrix[i][j] << endl;
            status = 1;
        }
        if (status == 0)
        {
            break;
        }
        status = 0;
        j = endC;
        std::cout << "loop 1 over " << endl;
        //cout << "the value of j is: " << j << endl;

        for (i = start + 1; i <= endR ; i++)
        {
            std::cout << matrix[i][j] << endl;
            status = 1;
        }
        if (status == 0)
        {
            break;
        }
        status = 0;
        i = endR; // -2 to avoid repeatition 
        std::cout << "loop 2 over " << endl;
        //cout << "the value of i is: " << i << endl;
        
        for (j = endC - 1; j >= start ; j--)
        {
            std::cout << matrix[i][j] << endl;
            status = 1;
        }
        if (status == 0)
        {
            break;
        }
        status = 0;
        j = start; // -2 to avoid repeatiiton 
        std::cout << "loop 3 over " << endl;
        //cout << "the value of j is: " << j << endl;

        for (i = endR - 1; i >= start + 1 ; i--)
        {
            std::cout << matrix[i][j] << endl;
            status = 1;
        }
        if (status == 0)
        {
            break;
        }
        status = 0;
        std::cout << "loop 4 over " << endl;
        start = start + 1;
        endR = endR - 1;
        endC = endC - 1;

    }

    return 0;
}