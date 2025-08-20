#include <bits/stdc++.h>
using namespace std;

// Custom comparator: first by length, then lexicographically
bool compareStrings(const string &a, const string &b) {
    if (a.size() == b.size()) 
        return a < b;  // lexicographical order
    return a.size() < b.size(); // increasing length
}

int main() {
    int n;
    cin >> n;
    vector<string> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Sort using custom comparator
    sort(arr.begin(), arr.end(), compareStrings);

    // Print result
    for (int i = 0; i < n; i++) {
        cout << arr[i];
        if (i != n - 1) cout << " ";
    }
    return 0;
}
