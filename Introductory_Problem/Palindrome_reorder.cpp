#include <iostream>
#include <string>
#include <vector>
#include <algorithm> // Include the <algorithm> header for the reverse function

using namespace std;

const int ALPHABET_SIZE = 26;

int main() {
    string s;
    cin >> s;

    int n = s.size();
    vector<int> freq(ALPHABET_SIZE, 0);

    for (char c : s) {
        freq[c - 'A']++;
    }

    char oddCountChar = '\0';
    string halfPalindrome = "";

    for (int i = 0; i < ALPHABET_SIZE; i++) {
        if (freq[i] % 2 == 1) {
            if (oddCountChar != '\0') {
                cout << "NO SOLUTION" << endl;
                return 0;
            }
            oddCountChar = char('A' + i);
        }

        halfPalindrome += string(freq[i] / 2, char('A' + i));
    }

    if (oddCountChar != '\0' && n % 2 == 0) {
        cout << "NO SOLUTION" << endl;
        return 0;
    }

    string palindrome = halfPalindrome;

    if (oddCountChar != '\0') {
        palindrome += oddCountChar;
    }

    reverse(halfPalindrome.begin(), halfPalindrome.end());
    palindrome += halfPalindrome;

    cout << palindrome << endl;

    return 0;
}
/*
The program reads a string s as input, where s is a sequence of uppercase letters from 'A' to 'Z'.

It initializes an array freq of size 26 (to represent each character of the alphabet) to store the frequency of each character in the input string.

It iterates through the input string and counts the frequency of each character using the freq array.

It checks if it's possible to create a palindrome from the given string. A valid palindrome is possible if at most one character has an odd frequency (all others should have even frequencies).

It constructs half of the palindrome (without the middle character) in the halfPalindrome string by appending characters based on their frequencies in the freq array.

It checks whether a middle character is required in the palindrome (when there's a character with an odd frequency) and whether the total number of characters is even. If not, it's not possible to create a palindrome, so it prints "NO SOLUTION" and exits.

It constructs the full palindrome in the palindrome string, combining the halfPalindrome, middle character (if applicable), and the reverse of the halfPalindrome.

Finally, it prints the constructed palindrome or "NO SOLUTION" if a valid palindrome is not possible.*/