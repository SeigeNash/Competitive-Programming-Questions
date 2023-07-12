#include <iostream>
using namespace std;

int main(){


    bool isPowerOfFour(int n);

    bool result = isPowerOfFour( 0 );
    cout << "the result is " << result << endl;


    return 0;
}


bool isPowerOfFour(int n) {

    if( n > 0 ){
        if ( ((n / 4 == 1) && (n % 4 == 0)) || ( n == 1 ) ){         //  base case
            return true;
        }
        else if ( (n % 4 == 0) && (n >= 4)){
            return isPowerOfFour( n/4 );
        }
    }
    return false;                   // false if n is not divisble by 4
        
}