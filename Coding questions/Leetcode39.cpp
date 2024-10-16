#include <iostream>
#include <vector>
using namespace std;


void calculateSubsets(int i, vector<int> &candidates, int target, vector<int> &ds, vector<vector<int> > &ans){

    // base case 
    if( i == candidates.size() ){           // why is this a constraints? (draw recursion tree)
        if(target == 0){
            // insert ds in ans 
            ans.push_back(ds);
        }
        return; 
    }

    // function calls
    // for this question, we can pick the same element again and again. So the choices are to pick the same element or to move ahead.
    // the problem ends when target (sum) becomes <= 0.


    // not adding this conditoin gave me segmentation fault (why?)
    if( candidates[i] <= target){
        ds.push_back(candidates[i]);
        calculateSubsets(i, candidates, target - candidates[i], ds, ans);
        ds.pop_back();
    }
    calculateSubsets(i+1, candidates, target, ds, ans);

}


int main(){

    vector<int> candidates;
    candidates.push_back(2);
    candidates.push_back(3);
    candidates.push_back(6);
    candidates.push_back(7);
    int target = 7;

    vector<vector<int> > ans;
    vector<int> ds;

    calculateSubsets(0, candidates, target, ds, ans);

    // printing candidates 
    for(int i = 0; i < ans.size(); i++ ){
        for(int j = 0; j < ans[i].size(); j++ ){
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }

    
    return 0;
}