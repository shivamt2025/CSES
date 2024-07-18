#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    int n;
    cin >> n;

    vector<pair<int,int>> event;

    for (int i = 0; i < n; i++) {
        int start, end;
        cin >> start >> end;
        event.push_back({start, 1});
        event.push_back({end, -1});
    }

    sort(event.begin(), event.end());

    int actcustomers = 0;
    int maxcustomers = 0;

    for (size_t i = 0; i < event.size(); i++) {
        actcustomers += event[i].second;
        maxcustomers = max(maxcustomers, actcustomers);
    }

    cout << maxcustomers << endl;

    return 0;
}
