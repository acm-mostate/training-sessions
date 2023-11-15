// https://codeforces.com/problemset/problem/118/A
#include <iostream>
#include <string>
#include <cctype> // For tolower function

using namespace std;

string processString(const string& input) {
    string result;
    for (char c : input) {
        c = tolower(c); // Convert to lowercase
        // Check if the character is a vowel
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y') {
            continue; // Skip vowels
        }
        result += '.'; // Add a dot before consonant
        result += c; // Add the consonant
    }
    return result;
}

int main() {
    string input;
    cin >> input; // Read the input string
    string output = processString(input);
    cout << output << endl; // Print the processed string
    return 0;
}

