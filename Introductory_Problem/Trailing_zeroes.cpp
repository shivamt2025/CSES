#include <iostream>

using namespace std;

int countTrailingZeros(int n) {
    int count = 0;
    while (n >= 5) {
        n /= 5;
        count += n;
    }
    return count;
}

int main() {
    int n;
    cin >> n;
    
    int trailingZeros = countTrailingZeros(n);
    cout << trailingZeros << endl;

    return 0;
}
/*you need to determine how many times the number 10 (which is the product of 2 and 5) can be factored out from the product of all 
integers from 1 to n. 
Since the number of 2s in this product will be greater than the number of 5s, you need to count the number of 5s in the product.*/