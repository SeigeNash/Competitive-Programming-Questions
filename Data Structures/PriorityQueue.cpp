#include <iostream>
#include <queue>
using namespace std;

int main() {
    // Create a max heap priority queue of integers
    priority_queue<int> maxHeap;

    // Insert elements into the priority queue
    maxHeap.push(10);
    maxHeap.push(30);
    maxHeap.push(20);
    maxHeap.push(90);
    maxHeap.push(70);
    maxHeap.push(80);

    // Print the top element (highest priority)
    cout << "Top element (max priority): " << maxHeap.top() << endl;

    // Remove the top element
    maxHeap.pop();

    // Print the new top element
    cout << "Top element after pop: " << maxHeap.top() << endl;

    return 0;
}
