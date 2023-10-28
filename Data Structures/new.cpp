#include <iostream>
#include <vector>

using namespace std;


int main(){

    vector<vector<int>> mat;

    int leftSum = 0;
    int rightSum = 0;

    for (int i = 0, j = 2; i < 3 && j >= 0; i++, j--)
    {

        leftSum = leftSum + mat[i][i];
        rightSum = rightSum + mat[i][j];
        
    }

    cout << leftSum << endl;
    cout << rightSum << endl;

    // printing the differemce 

    int difference = rightSum - leftSum; 

    cout << difference << endl;


    return 0;
}