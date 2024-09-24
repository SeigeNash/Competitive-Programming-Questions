#include <iostream>
#include <vector>
#include <fstream>

using namespace std;


// The merge function is used to merge two sorted subarrays
void merge(vector<double>& arr, int left, int middle, int right) {
    int n1 = middle - left + 1;
    int n2 = right - middle;

    vector<double> L(n1), R(n2);

    // filling the two arrays with values 
    for (int i = 0; i < n1; i++)
        L[i] = arr[left + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[middle + 1 + j];

    // sorting the two arrays 
    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}


// mergeSort recursively divides the array into smaller subarrays until they are sorted individually and then merges them back together. 
void mergeSort(vector<double>& arr, int left, int right) {
    if (left < right) {
        int middle = left + (right - left) / 2;                 // this optimissation prevents memory overflow 

        mergeSort(arr, left, middle);
        mergeSort(arr, middle + 1, right);

        merge(arr, left, middle, right);
    }
}

int main() {
    vector<double> stockValues;

    // Read stock values from files
    for (int i = 1; i <= 35; i++) {
        ifstream file("stock_" + to_string(i) + ".txt");
        double value;
        while (file >> value) {
            stockValues.push_back(value);
        }
        file.close();
    }

    // Apply merge sort
    mergeSort(stockValues, 0, stockValues.size() - 1);

    // Display sorted stock values
    cout << "Sorted Stock Values:\n";
    for (double value : stockValues) {
        cout << value << " ";
    }
    cout << endl;

    return 0;
}
