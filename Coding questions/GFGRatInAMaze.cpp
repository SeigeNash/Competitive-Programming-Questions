#include <iostream>
#include <vector>
#include <string>
using namespace std;


void helper1(int row, int col, int size, vector<vector<int> > &mat, string path , vector<string> &res, vector<vector<int> > &vis){                     

    // base case 
    if( col == size - 1 && row == size - 1){
        // push the matrix inside res
        res.push_back(path);
        return; 
    
    }
        // choice diagram 
        // lexicographical order 
        // for each case, add bound check then visted or not check then mat[][] = 1
        
        // down
    if( row + 1 < size &&   mat[row+1][col] == 1){
        vis[row][col] = 1;
        //path.push_back('U');
        helper1(row+1, col, size, mat, path + 'D', res, vis);
        //path.pop_back();    // backtracking step 
        vis[row][col] = 0;
    }

        // left 
    if( col-1 >= 0 && mat[row][col-1] == 1){
        vis[row][col] = 1;
        //path.push_back('U');
        helper1(row, col-1, size, mat, path + 'L', res, vis);
        //path.pop_back();    // backtracking step 
        vis[row][col] = 0;
    }

        // right 
    if( col-1 < size && mat[row][col+1] == 1){
        vis[row][col] = 1;
        //path.push_back('U');
        helper1(row, col+1, size, mat, path + 'R', res, vis);
        //path.pop_back();    // backtracking step 
        vis[row][col] = 0;
    }

        // up
    if( row-1 >= 0 && mat[row-1][col] == 1){
        vis[row][col] = 1;
        //path.push_back('U');
        helper1(row-1, col, size, mat, path + 'U', res, vis);
        //path.pop_back();    // backtracking step 
        vis[row][col] = 0;
    }

    
}


// code if you want to avoid making more and more conditinoal statements. better for directions more than 4. 
void helper2(int row, int col, int size, vector<vector<int> > &mat, string path , vector<string> &res, vector<vector<int> > &vis, int drow[], int dcol[]){

    if( col == size - 1 && row == size - 1){
        // push the matrix inside res
        res.push_back(path);
        return; 
    }

    string dir = "DLRU";
    for (int ind = 0; ind < 4; ind++) {
        int nextrow = row + drow[ind];
        int nextcol = col + dcol[ind];
        if (nextrow >= 0 && nextcol >= 0 && nextrow < size && nextcol < size && !vis[nextrow][nextcol] && mat[nextrow][nextcol] == 1) {
            vis[row][col] = 1;
            helper2(nextrow, nextcol, size, mat, path + dir[ind], res, vis, drow, dcol);        // how is path + dir[ind] working?
            vis[row][col] = 0;
        }
    }
}
  
  
vector<string> findPath(vector<vector<int> > &mat) {
    // Your code goes here
    string path = "";
    vector<string> res;
    int size = mat[0].size();

    // for helper2 
    int drow[] = {1, 0, 0, -1};
    int drow[] = {0, -1, +1, 0};

        
    // following vector keeps track of visited cells 
    vector<vector<int> > vis(size, vector<int> (size, 0));
        
    if( mat[0][0] == 1) helper1( 0, 0, size, mat, path, res, vis);        
    return res;
        
}