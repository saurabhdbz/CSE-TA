#include <bits/stdc++.h>
using namespace std;

// Function to reverse part of the array
void reverseArray(vector<int>& arr, int start, int end) {
    while (start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main() {
    int size;
    cin >> size;

    vector<int> arr(size);
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    int k;
    cin >> k;

    // Handle cases where k >= size
    k = k % size;

    // Left rotate by k using reversal algorithm
    // Step 1: Reverse first k elements
    reverseArray(arr, 0, k - 1);
    // Step 2: Reverse remaining elements
    reverseArray(arr, k, size - 1);
    // Step 3: Reverse whole array
    reverseArray(arr, 0, size - 1);

    // Print result
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
