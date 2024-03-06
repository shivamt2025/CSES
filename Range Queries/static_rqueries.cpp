#include <iostream>
#include <vector>

using namespace std;
typedef long long ll;

int main() {
    int N, Q, l, r;
    const int maxN = 2e5;
    vector<ll> x(maxN + 1);

    cin >> N >> Q;
    for (int i = 1; i <= N; i++) {
        cin >> x[i];
        x[i] += x[i - 1];
    }
    for (int q = 0; q < Q; q++) {
        cin >> l >> r;
        cout << x[r] - x[l - 1] << endl;
    }

    return 0;
}
