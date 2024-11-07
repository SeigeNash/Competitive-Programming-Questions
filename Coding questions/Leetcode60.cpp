#include <iostream>
using namespace std;


string helper(int n, int k) {
        
    // defining the data structures 
    k -= 1;
    int n_fac = 1;  

    // generating vector containing elements upto n 
    vector<int> numbers;
    for( int i = 1; i <= n; i++ ){
        n_fac = n_fac * i;
        numbers.push_back(i);
    }

    int group = n_fac / n;
    string ans = "";

    // code 
    while( n > 1 ){

        k = k / group;      // gives the index that needs to be popped and added to answer
        ans += to_string(numbers[k]);         // adds the number to the string 
        numbers.erase(numbers.begin() + k/group ); // remove that number from the numbers
        k = k % group;          // gives value of new k 
        n -= 1;
        group = group / n; 
    }

    // now only one element is left 

    ans += to_string(numbers[0]);

    return ans;
        
}







int main(){


    
    return 0;
}