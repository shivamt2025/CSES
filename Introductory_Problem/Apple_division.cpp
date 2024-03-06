#include <iostream>
#include <vector>
#include <cmath>
#include <bits/stdc++.h>

using namespace std;

long long minWeightDifference(vector<long long>& weights, int index, long long group1, long long group2) {
    if (index == 0) {
        long long r1 = group1 + weights[0];
        long long r2 = group2 + weights[0];

        long long ans = min(abs(r1 - group2), abs(r2 - group1));
        return ans;
    }

    long long chooseGroup1 = minWeightDifference(weights, index - 1, group1 + weights[index], group2);
    long long chooseGroup2 = minWeightDifference(weights, index - 1, group1, group2 + weights[index]);

    return min(chooseGroup1, chooseGroup2);
}

int main() {
    int n;
    cin >> n;

    vector<long long> weights(n);
    for (auto &i : weights) {
        cin >> i;
    }

    long long result = minWeightDifference(weights, n-1, 0, 0);
    cout << result << endl;

    return 0;
}
