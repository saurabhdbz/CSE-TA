#include <iostream>
using namespace std;

int main() {
    int n1, n2;
    cin >> n1;

    int arr1[n1];
    for (int i = 0; i < n1; i++) {
        cin >> arr1[i];
    }

    cin >> n2;
    int arr2[n2];
    for (int i = 0; i < n2; i++) {
        cin >> arr2[i];
    }

    int merged[n1 + n2]; // final merged array
    int i = 0, j = 0, k = 0;

    // Merge process (two-pointer technique)
    while (i < n1 && j < n2) {
        if (arr1[i] <= arr2[j]) {
            merged[k++] = arr1[i++];
        } else {
            merged[k++] = arr2[j++];
        }
    }

    // Copy remaining elements of arr1
    while (i < n1) {
        merged[k++] = arr1[i++];
    }

    // Copy remaining elements of arr2
    while (j < n2) {
        merged[k++] = arr2[j++];
    }

    // Print merged array
    for (int x = 0; x < n1 + n2; x++) {
        cout << merged[x] << " ";
    }
    cout << endl;

    return 0;
}
