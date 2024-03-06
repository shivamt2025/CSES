#include <iostream>
#include <string>

using namespace std;

int main() {
    string dna;
    cin >> dna;

    char current_char = dna[0];
    int current_count = 1;
    int max_count = 1;

    for (size_t i = 1; i < dna.length(); ++i) {
        if (dna[i] == current_char) {
            current_count++;
            max_count = max(max_count, current_count);
        } else {
            current_char = dna[i];
            current_count = 1;
        }
    }

    cout << max_count << endl;

    return 0;
}
