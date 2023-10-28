#include <iostream>
#include <vector>
using namespace std;

int main(){

    vector<char> s;
    s.push_back('s');
    s.push_back('h');
    s.push_back('u');
    s.push_back('b');
    s.push_back('\0');

    int end = s.size() - 2;
    cout << "the size of the array is " << s.size() << endl;

    for (int i = s.size() - 1 ; i >= 0 ; i--){
        // the outer loop is going to take the last element out of the string

        int temp = s[end];

        for (int j = end ; j > 0 ; j--){
            // inner loop for shifting the content
                
            swap(s[j], s[j-1]);
            
        }
        for (int i = 0; i < s.size(); i++)
        {
            cout << s[i] << endl;
        }
        cout << "-----------" << endl;
    }

    for (int i = 0; i < s.size(); i++)
    {
        cout << s[i] << endl;
    }
    

    return 0;
}