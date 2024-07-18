#include <bits/stdc++.h>
#define ll long long int
using namespace std;

// function to find the minimum number of steps to reduce N
// to 0
ll solve(ll N)
{
    // dp[] array such that dp[i] stores the minimum number
    // of steps to reduce i to 0
    vector<ll> dp(N + 1, 1e9);

    dp[0] = 0;

    // Iterate over all the numbers from 1 to N
    for (int i = 1; i <= N; i++) {
        ll temp = i;
        // Extract all the digits d and find the minimum of
        // dp[i - d]
        while (temp) {
            ll d = temp % 10;
            dp[i] = min(dp[i], 1 + dp[i - d]);
            temp /= 10;
        }
    }
    // Return dp[N] as the minimum number of steps to reduce
    // N to 0
    return dp[N];
}

int main()
{
    // Sample Input
    ll N ;
    cin>>N;

    cout << solve(N);
}
