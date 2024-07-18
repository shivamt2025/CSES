#include <bits/stdc++.h>
using namespace std;

const int MAXN = 2e5 + 5;

// Adjacency list to represent the company structure
vector<int> adj[MAXN];

// Array to store the number of subordinates for each
// employee
int subordinates[MAXN];

// DFS function to calculate the number of subordinates for
// each employee
void dfs(int node)
{
    for (auto child : adj[node]) {
        dfs(child);
        // Adding the number of subordinates of the child to
        // the current node
        subordinates[node] += subordinates[child] + 1;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // Number of employees
    int n ;
    cin>>n;;
    // Direct boss for each employee 2,3,...,n
    vector<int> bosses (n-1);
    for(int i=0;i<n-1;i++){
        cin>>bosses[i];
    }

    // Building the adjacency list for the company structure
    for (int i = 0; i < n - 1; i++) {
        adj[bosses[i]].push_back(i + 2);
    }

    // Performing DFS to calculate subordinates
    dfs(1);

    // Printing the number of subordinates for each employee
    for (int i = 1; i <= n; i++)
        cout << subordinates[i] << " ";
    cout << endl;

    return 0;
}
