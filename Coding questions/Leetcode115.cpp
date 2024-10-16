#include <iostream>
#include <vector>
using namespace std;



// function for calculating subsequnces 
void caluculate_subsequneces(int size, int n, vector<char> &ds, string* s, vector<vector<string> > &subsequences){

    // base condition 
    if( n >= size ){
        // replace 3 with a new variable 'size' for generalisation 
        // can i simply use sizeof on arr instead of variable 'size'? - nope 

        // add the subsequence in the vector 

        subsequences.push_back(ds);
        return;
    }

    ds.push_back( s[n]);
    caluculate_subsequneces( size, n + 1, ds, s, subsequences);
    ds.pop_back();
    caluculate_subsequneces( size, n + 1, ds, s, subsequences);

}



// fucntion for concatenating subsequnces 




int main(){

    // inputs

    string s = "rabbbit";

    vector<char> ds;
    vector<vector<string> > subsequences;           // this can cause issues 

    // subsequnces 

    caluculate_subsequneces( sizeof(s)/ sizeof(s[0]) ,0, ds, s, subsequences);


    // print the subsequnces 

    for( int i = 0; i < subsequences.size(); i++ ){

        for( int j = 0; j < subsequences[i].size(); j++ ){
            cout << subsequences[i][j] << " ";
        }
        cout << endl;
    }

    cout << subsequences.size() << endl;
    
    return 0;
}