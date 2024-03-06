#include <iostream>
#include <vector>

using namespace std;

vector<pair<int, int>> moves;

void towerOfHanoi(int n, int source, int auxiliary, int target) {
    if (n == 1) {
        // Move the top disk from the source to the target
        moves.push_back({source, target});
        return;
    }

    // Move n-1 disks from the source to the auxiliary peg using the target peg
    towerOfHanoi(n - 1, source, target, auxiliary);

    // Move the remaining disk from the source to the target
    moves.push_back({source, target});

    // Move the n-1 disks from the auxiliary peg to the target peg using the source peg
    towerOfHanoi(n - 1, auxiliary, source, target);
}

int main() {
    int n;
    cin >> n;

    towerOfHanoi(n, 1, 2, 3);

    cout << moves.size() << endl;
    for (const pair<int, int>& move : moves) {
        cout << move.first << " " << move.second << endl;
    }

    return 0;
}
