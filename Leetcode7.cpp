#include <iostream>
using namespace std;

int main(){


    int power( int base, int expo );

    int temp = 0, num;
    long  result = 0;

    num = 1534236469;

    while( num != 0 ){

        temp = num % 10;
        num = num / 10;
        result = ( result * 10 ) + temp; 
        if ( (result > 2147483647) || (result < -2147483648)){
            cout << "the result is 0 " << endl;
        }
    }

    
    cout << "the result is " << result << endl;
    
    
    //int result = power( 78, 3);

    //cout << "the result is " << result << endl;


    return 0;


}

int power( int base, int expo){

    int product = 1;

    for ( int i = 1; i <= expo ; i++)
    {
        product = product * base;
    }

    return product;
    
}