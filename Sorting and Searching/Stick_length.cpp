#include <bits/stdc++.h>
using namespace std;


long long calculateStickLength(int* arr, int N)
{
    
    sort(arr, arr + N);
    int median = arr[N / 2];
    long long ans = 0;
 
    for (int i = 0; i < N; i++) {
        ans += abs(median - arr[i]);
    }
    return ans;
}

int main()
{

    
    int N ;
    cin >>N;
    int arr[N] ;
    for (int i=0;i<N;i++){
        cin>>arr[i];
    }
    cout << calculateStickLength(arr, N) << "\n";
    return 0;
}
