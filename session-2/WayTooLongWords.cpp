// https://codeforces.com/problemset/problem/71/A

#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;
    cin >> n; // Read the number of words

    for (int i = 0; i < n; i++) {
        string word;
        cin >> word; // Read each word

        if (word.size() > 10) {
            // Abbreviate the word
            cout << word[0] << word.size() - 2 << word[word.size() - 1] << endl;
        } else {
            // Print the word as it is
            cout << word << endl;
        }
    }

    return 0;
}

