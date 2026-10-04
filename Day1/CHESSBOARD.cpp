#include <bits/stdc++.h>
using namespace std;

string determineColor(const string& s) {
    int col = s[0] - 'a' + 1;
    int row = s[1] - '0';

    if ((col + row) % 2 == 0)
        return "Black";
    else
        return "White";
}

int main() {
    string s;
    cin >> s;
    cout << determineColor(s) << endl;
    return 0;
}
