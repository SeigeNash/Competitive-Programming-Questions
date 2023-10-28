#include <iostream>
#include <vector>

using namespace std;


int main(){


    string s1 = "Aba";
    transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
    string s2 = "aba";
    transform(s2.begin(), s2.end(), s2.begin(), ::tolower);
    int size = s1.length();
    
    int xor1 = 0;
    int xor2 = 0;

    for (int i = 0; i < 4; i++)
    {
        // char ch1 = s1[i];
        xor1 ^= int( s1[i] );
        // char ch2 = s2[i];
        xor2 ^= int( s2[i] );

    }
    

    if( xor1 == xor2 & s1.length() == 1 ){
        cout << "true";
    }
    else if( xor1 == xor2 == 0 & s1[0] != s2[0] ){
        cout << "false1";
    }
    else if( xor1 == xor2 & xor1 != 0 ){
        cout << "true2";
    }
    else{
        cout << "false3";
    }


    return 0;
}