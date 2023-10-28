#include <iostream>
#include <vector>

using namespace std;

int knapsack(int * weights, int * profits, int capacity, int size) {
    
    vector< vector<int> > dp(size + 1, vector<int>(capacity + 1, 0));

    for (int i = 1; i <= size; i++) {
        for (int w = 1; w <= capacity; w++) {
            if (weights[i - 1] > w) {
                dp[i][w] = dp[i - 1][w];
            } else {
                
                dp[i][w] = max(dp[i - 1][w], dp[i - 1][w - weights[i - 1]] + profits[i - 1]);
            }
        }
    }

    for (int i = 0; i <= 5; i++)
    {
        for (int j = 0; j <= 5; j++)
        {
            cout << dp[i][j] << " ";
        }

        cout << endl;
        
    }

    return dp[size][capacity];
}

int main() {
    int weights[5] = {2, 2, 3, 4, 5};
    int profits[5] = {3, 4, 5, 8, 10};
    int capacity = 5;

    int maxProfit = knapsack(weights, profits, capacity, 5);

    cout << "Maximum Profit: " << maxProfit << endl;

    
    

    return 0;
}
