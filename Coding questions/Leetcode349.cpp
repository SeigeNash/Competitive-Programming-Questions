#include <iostream>
#include <map>
#include <vector>
using namespace std;


int main(){

    // inputs
    vector<int> nums1;
    vector<int> nums2;

    nums1.push_back(1);
    nums1.push_back(2);
    nums1.push_back(2);
    nums1.push_back(1);

    nums2.push_back(2);
    nums2.push_back(2);


    map<int, int> umap;
    vector<int> res;
    

    // storing values of nums1 in umap
    for( int i = 0; i < nums1.size(); i++ ){
        if( umap[nums1[i]] == 0 ){
            umap[nums1[i]] += 1;
        } else if ( umap[nums1[i]] == 1){
            continue;
        }
    }

    // storing values od nums2 in umap.
    // if the value of a key is 0, dont add that key, if the value if a key is 1, increment it
    // duplicates wont be added if the two conditions are not met
    for( int i = 0; i < nums2.size(); i++ ){
        if( umap[nums2[i]] == 0 ){
            continue;
        } else if ( umap[nums2[i]] == 1){
            umap[nums2[i]] += 1;
        }
    }
        
    // keys in umap having value as 2 are the intersection elements.
    for (const auto& pair : umap) {
        if( pair.second == 2 ){
            res.push_back( pair.first);
        }
        // res.push_back( pair.first);
    }
    
    // printing 
    for (const auto& pair : umap) {
        cout << "Pair first : " << pair.first <<  " Pair second : " << pair.second << endl ;
    }
   
    return 0;
}