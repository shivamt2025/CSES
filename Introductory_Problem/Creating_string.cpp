#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

int main() {
    string input;
    cin >> input;

    sort(input.begin(), input.end());

    vector<string> permutations;

    do {
        permutations.push_back(input);
    } while (next_permutation(input.begin(), input.end()));

    cout << permutations.size() << endl;
    for (const string& str : permutations) {
        cout << str << endl;
    }

    return 0;
}
