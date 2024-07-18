#include <bits/stdc++.h>
#define ll long long int
#define mod 1000000007
using namespace std;

// function to find the number of distinct ordered ways to
// produce a money sum X using coins[]
ll solve(ll N, ll X, vector<ll>& coins)
{
    // dp[] array such that dp[i] stores the number of
    // ordered ways to construct sum i
    vector<ll> dp(X + 1, 0);

    // Initialize dp[0] = 0 as there is only one way to
    // construct sum 0 that is to not choose any coin
    dp[0] = 1;

    // Iterate over all coins from 0 to N - 1
    for (int i = 0; i < N; i++) {
        // Iterate over all sums j from coins[i] to X
        for (int j = coins[i]; j <= X; j++) {
            // Add the number of ways to construct sum (j -
            // coins[i]) to dp[j]
            dp[j] = (dp[j] + dp[j - coins[i]]) % mod;
        }
    }

    // Return the number of ordered ways to construct sum X
    return dp[X];
}

int main()
{
   ll N , X ;
    cin >> N>>X;
    vector<ll> coins(N,0);
   for(int i=0;i<N;i++){
    cin>>coins[i];
   }

    int ans=solve(N, X, coins) ;
    cout<< ans;
}
