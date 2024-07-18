#include <bits/stdc++.h>
#define ll long long

using namespace std;

// Function to find the maximum sum which we cannot
// construct using given coins
ll solve(ll* arr, ll N)
{
	// Variable to store the maximum value of the next coin
	ll X = 1LL;

	// Sort the coins in ascending order of their values
	sort(arr, arr + N);

	for (int i = 0; i < N; i++) {
		// If the current coin's value is greater than X,
		// then X is the answer
		if (arr[i] > X) {
			return X;
		}
		// If current coin's value is less than or equal to
		// X, then we can update X as X + arr[i]
		X += arr[i];
	}
	return X;
}
int main()
{
	// Sample Input
	ll N ;
    cin>>N;
	ll arr[N];
    for(int i=0;i<N;i++){
        cin>>arr[i];
    }

	cout << solve(arr, N);
}
