#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    long long total_sum = (1LL * n * (n + 1)) / 2;
    long long sum = 0;

    for (int i = 0; i < n - 1; ++i) {
        int number;
        cin >> number;
        sum += number;
    }

    long long missing_number = total_sum - sum;
    cout << missing_number << endl;

    return 0;
}
