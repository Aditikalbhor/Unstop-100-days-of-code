#include <bits/stdc++.h>
using namespace std;

string kthUnique(vector<string>& arr, int k) {
    unordered_map<string, int> freq;

    for (string s : arr) {
        freq[s]++;
    }

    for (string s : arr) {
        if (freq[s] == 1) {
            k--;

            if (k == 0)
                return s;
        }
    }

    return "-1";
}

int main() {
    int n;
    cin >> n;

    vector<string> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int k;
    cin >> k;

    cout << kthUnique(arr, k);

    return 0;
}
