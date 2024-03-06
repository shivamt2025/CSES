#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<string> grayCode(int n) {
    if (n == 1) {
        return {"0", "1"};
    }

    vector<string> prevGrayCode = grayCode(n - 1);
    vector<string> graySeq;

    for (size_t i = 0; i < prevGrayCode.size(); i++) {
        graySeq.push_back("0" + prevGrayCode[i]);
    }

    for (int i = prevGrayCode.size() - 1; i >= 0; i--) {
        graySeq.push_back("1" + prevGrayCode[i]);
    }

    return graySeq;
}

int main() {
    int n;
    cin >> n;

    vector<string> graySeq = grayCode(n);

    for (const string& code : graySeq) {
        cout << code << endl;
    }

    return 0;
}
/*The warning you're seeing is due to a comparison between an int (the variable i) and a size_type (the return value of prevGrayCode.size()), 
which is an unsigned integer type. The warning indicates that it's generally not a good practice to compare signed and unsigned integer types
directly because it can lead to unexpected behavior.
To resolve this warning, you should use the appropriate type for i when iterating over the prevGrayCode vector. You can use size_t to match 
the unsigned type of the vector's size. Here's the updated code:*/