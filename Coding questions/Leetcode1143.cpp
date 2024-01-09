#include <iostream>
#include <string>
using namespace std;


int main(){

    string text1 = "ezupkr";
    string text2 = "ubmrapg";

    string * smaller;
    string * larger;
    int len_smaller;
    int len_larger;
    int sub_len = 0;

    if( text1.length() > text2.length() ){
        larger = &text1;
        smaller = &text2;
        len_larger = text1.length();
        len_smaller = text2.length();
    }
    else if( text2.length() > text1.length() ){
        larger = &text2;
        smaller = &text1;
        len_larger = text2.length();
        len_smaller = text1.length();  
    }
    // code working till here
    cout << "larger = " << *larger << " smaller = " << *smaller << endl;

    for( int i = 0; i < len_smaller; ){
        int j;
        for( j = 0; j < len_larger; j++){
            if( (*larger)[j] == (*smaller)[i] ){
                cout << "text1 char = " << larger[j] << " text2 char = " << smaller[i] << endl;
                sub_len++;
                i++;
            }
        }
        i++;

    }    
    
    cout << sub_len<< endl; 
    return 0;
}