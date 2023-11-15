// Based on: https://www.hackerrank.com/contests/rns-placement-coding/challenges/staircase

#include <iostream>

using namespace std;

void staircase(int n) {
    for (int i = 1; i <= n; i++) {
        // Print spaces
        for (int j = 0; j < n - i; j++) {
            cout << " ";
        }
        // Print '#' symbols
        for (int j = 0; j < i; j++) {
            cout << "#";
        }
        // Move to the next line
        cout << endl;
    }
}

int main() {
    int n;
    cin >> n; // Read the size of the staircase
    staircase(n); // Print the staircase
    return 0;
}

