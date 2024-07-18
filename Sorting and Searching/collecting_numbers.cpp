#include <iostream>
#include <vector>
using namespace std;

// Function to find the number of rounds
long solve(long arr[], int N) {
    // Variable to store the final answer
    long ans = 1;

    // Array to store the index of numbers from 1 to N
    vector<long> indices(N + 1);

    // Store the index of all elements of arr[]
    for (int i = 0; i < N; i++) {
        indices[arr[i]] = i;
    }

    // If num occurs after (num + 1), increment ans by 1
    for (int num = 1; num < N; num++) {
        if (indices[num + 1] < indices[num])
            ans++;
    }
    return ans;
}

int main() {
    // Sample Input
    int N ;
       cin>>N;
    long arr[N] ;
  
	
    for(int i=0;i<N;i++){
        cin>>arr[i];
    }

    cout << solve(arr, N) << endl;

    return 0;
}
