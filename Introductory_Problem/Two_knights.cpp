#include <iostream>
//#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n;
    cin >> n;

    cout << 0 << endl;
    for (long long i = 2 ; i <= n ; i++) {
      cout << (i * i) * (i * i - 1) / 2 - (4 * (i - 2) * (i - 1)) << endl;
    }

    return 0;
}

//https://japlslounge.com/posts/cses/two_knights/1.htm
//https://www.youtube.com/watch?v=RlpM5N-ttcU