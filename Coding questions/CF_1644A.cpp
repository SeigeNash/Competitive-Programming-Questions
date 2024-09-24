#include <iostream>
#include <string>
#include <unordered_set>

using namespace std;

bool canKnightReachPrincess(const string& hallway) {
    unordered_set<char> keysCollected;

    for (char ch : hallway) {
        // Check if it's a door
        if (ch == 'R' || ch == 'G' || ch == 'B') {
            // Check if the corresponding key has been collected
            if (ch == 'R' && keysCollected.find('r') == keysCollected.end()) {        // comparing two iterators
                return false; // Red door without red key
            }
            if (ch == 'G' && keysCollected.find('g') == keysCollected.end()) {
                return false; // Green door without green key
            }
            if (ch == 'B' && keysCollected.find('b') == keysCollected.end()) {
                return false; // Blue door without blue key
            }
        } else {
            // It's a key, collect it
            keysCollected.insert(ch);
        }
    }

    return true; // All doors can be opened
}

int main() {
    string hallway;
    cout << "Enter the hallway map (e.g., 'rRgGbB'): ";
    cin >> hallway;

    if (canKnightReachPrincess(hallway)) {
        cout << "The knight can reach the princess!" << endl;
    } else {
        cout << "The knight cannot reach the princess." << endl;
    }

    return 0;
}
