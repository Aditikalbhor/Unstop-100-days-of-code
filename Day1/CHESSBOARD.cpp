#include <bits/stdc++.h>
using namespace std;

string determineColor(const string& s) {
    int x = s[0] - 'a' + 1;
    int y = s[1] - '0';

    if ((x + y) % 2 == 0)
        return "Black";
    else
        return "White";
}

int main() {
    string s;
    cin >> s;

    cout << determineColor(s);

    return 0;
}
