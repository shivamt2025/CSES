#include <iostream>

using namespace std;

const int MOD = 1000000007;

long long power(long long base, long long exp) {
    
    //Modular exponentiation
    long long result = 1;
    while (exp > 0) {
        if (exp % 2 == 1) {
            result = (result * base) % MOD;
        }
        base = (base * base) % MOD;
        exp /= 2; //exp>>1 , both are same shivam bruh
    }
    return result;
}

int main() {
    int n;
    cin >> n;

    // Calculate 2^n modulo MOD
    long long result = power(2, n);

    cout << result << endl;

    return 0;
}
//Time Complexity: O(log2n), where n represents the value of the given input.
//Auxiliary Space: O(1), no extra space is required, so it is a constant.