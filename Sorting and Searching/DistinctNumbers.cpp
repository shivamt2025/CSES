#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Sample Input
    int N ;
    cin>> N;
    int arr[N];
    for(int i=0;i<N;i++){
        cin>>arr[i];
    }
    // Set to store all the elements
    set<int> s;
    for (int i = 0; i < N; i++) {
        s.insert(arr[i]);
    }
    cout << s.size();
}
