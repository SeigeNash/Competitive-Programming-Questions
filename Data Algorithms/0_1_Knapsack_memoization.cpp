#include <iostream>
using namespace std;

int t[1002][1002] = {0};

// returns the maximum value 
int knapsack( int wt[], int val[], int W, int N){

    // base case 
    if( N == 0 || W == 0){
        return 0;
    }

    if( wt[N-1] <= W ){
        return t[N][W] = max( val[N-1] + knapsack(wt, val, W-wt[N-1], N-1), knapsack(wt, val, W, N-1));
    } else if( wt[N-1] > W ){
        return t[N][W] = knapsack(wt, val, W, N-1);
    }

}

int main(){

    int N = 4;
    int wt[] = {1, 4, 3, 7};
    int val[] = {10, 4, 6, 1};
    int W = 10;

    int result = knapsack(wt, val, W, N);
    cout << result << endl;

    return 0;

}