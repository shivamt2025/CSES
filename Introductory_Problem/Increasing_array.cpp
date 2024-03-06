#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    long long moves = 0; // Initialize the number of moves required

    for (int i = 1; i < n; i++) {
        if (arr[i] < arr[i - 1]) {
            moves += arr[i - 1] - arr[i]; // Calculate the moves required to make arr[i] >= arr[i-1]
            arr[i] = arr[i - 1]; // Update arr[i] to be at least arr[i-1]
        }
    }

    cout << moves << endl;

    return 0;
}
