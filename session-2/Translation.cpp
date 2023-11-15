// https://codeforces.com/problemset/problem/41/A

#include <iostream>
#include <string>
#include <algorithm> // For reverse function

using namespace std;

int main() {
    string s, t;
    cin >> s >> t; // Read the two strings

    // Reverse the second string
    reverse(t.begin(), t.end());

    // Check if the first string is equal to the reversed second string
    if (s == t) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}

