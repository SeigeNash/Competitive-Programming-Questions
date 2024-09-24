#include <iostream>
#include <vector>
using namespace std;

// no error but wont stop printing 

void calculateSubsets( int i, vector<int> &candidates, vector<int> &ds, vector<vector< int > > &result, int target);
void printing2D( vector< vector<int> > result );
void print1D( vector<int> final);

int main(){

    vector<int> candidates;       //define nums in question
    int K = 7;

    //insertion
    candidates.push_back(2);
    candidates.push_back(3);
    candidates.push_back(6);
    candidates.push_back(7);

    vector<int> ds;
    vector< vector<int> > result;
    int target = 7;
    calculateSubsets( 0, candidates, ds, result, target);

    //printing2D( result );

    return 0;
}

void calculateSubsets( int i, vector<int> &candidates, vector<int> &ds, vector<vector< int > > &result, int target) {

    //base condition 
    if( i == candidates.size() || target < 0){
        if( target == 0){
        // if( target == 0){
        //     result.push_back(ds);
        // }
        // return;
            
            // print ds 
            for( auto it : ds){
                cout << it << " ";
            }
            cout << endl;
        }

        return;
    }
    if( target == 0){
        // if( target == 0){
        //     result.push_back(ds);
        // }
        // return;

        // print ds 
        for( auto it : ds){
            cout << it << " ";
        }
        cout << endl;
    }

    //i pick it 
    ds.push_back( candidates[i] );
    calculateSubsets( i , candidates, ds, result, target - candidates[i]);
    //i dont pick it
    ds.pop_back();
    calculateSubsets( i + 1, candidates, ds, result, target);
}




