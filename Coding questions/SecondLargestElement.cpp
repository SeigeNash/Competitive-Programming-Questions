#include <iostream>
#include <vector>
using namespace std;


int main(){

    //inputs 
    vector<int> arr;
    arr.push_back(-10);
    arr.push_back(-40);
    arr.push_back(-25);
    arr.push_back(-12);
    arr.push_back(-25);
    //arr.push_back(-10);
    
    int lar = arr[0];
    int sec = arr[1];

    if( sec > lar ){
        swap(lar, sec);
    }
    // now sec is smaller than lar


    for(int i = 2; i < arr.size(); i++ ){
        if( arr[i] > lar ){
            swap(lar, sec);
            lar = arr[i];
        }
        else{
            if(arr[i] > sec){
                sec = arr[i];
            }
        }
    }

    cout << "Second largest: " << sec << endl;
    cout << "Largest: " << lar << endl;

    return 0;
}