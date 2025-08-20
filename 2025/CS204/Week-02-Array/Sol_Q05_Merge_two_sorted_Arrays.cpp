#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n1, n2;
    cin >> n1;
    vector<int> arr1(n1);
    for (int i = 0; i < n1; i++) cin >> arr1[i];

    cin >> n2;
    vector<int> arr2(n2);
    for (int i = 0; i < n2; i++) cin >> arr2[i];

    vector<int> merged;
    int i = 0, j = 0;

    // Merge process
    while (i < n1 && j < n2) {
        if (arr1[i] <= arr2[j]) {
            merged.push_back(arr1[i++]);
        } else {
            merged.push_back(arr2[j++]);
        }
    }

    // Copy remaining
    while (i < n1) merged.push_back(arr1[i++]);
    while (j < n2) merged.push_back(arr2[j++]);

    // Print result
    for (int x : merged) cout << x << " ";
    return 0;
}
