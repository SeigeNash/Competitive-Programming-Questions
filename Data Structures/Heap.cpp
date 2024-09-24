#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    // Create a vector of integers
    vector<int> myVector;
    myVector.push_back(4);
    myVector.push_back(2);
    myVector.push_back(7);
    myVector.push_back(1);
    myVector.push_back(9);

    // Convert the vector into a max heap
    make_heap(myVector.begin(), myVector.end(), less<int>());
    
    cout << "Max Heap: ";
    for (const int& element : myVector) {
        cout << element << " ";
    }
    cout << endl;

    // Convert the vector into a min heap
    make_heap(myVector.begin(), myVector.end(), greater<int>());

    cout << "Min Heap: ";
    for (const int& element : myVector) {
        cout << element << " ";
    }
    cout << endl;

    return 0;
}
