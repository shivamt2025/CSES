#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll maximum_sum(ll arr[], ll n) {
    ll sum = 0, max_sum = -1e9;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
        max_sum = max(sum, max_sum);
        if (sum < 0) {
            sum = 0;
        }
    }
    return max_sum;
}

int main() {
    ll n;
    cin >> n;
    ll arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << maximum_sum(arr, n) << endl;

    return 0;
}
