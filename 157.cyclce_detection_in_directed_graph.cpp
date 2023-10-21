#include <iostream>
#include <vector>
using namespace std;

bool isCycle(int src, vector<vector<int>>& adj, vector<bool>& visited, vector<int>& stack)
{
    stack[src] = 1;
    if (!visited[src])
    {
        visited[src] = true;
        for (auto i : adj[src])
        {
            if (!visited[i] && isCycle(i, adj, visited, stack))
            {
                return true;
            }
            if (stack[i])
            {
                return true;
            }
        }
    }
    stack[src] = 0;
    return false;
}

int main()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> adj(n);

    for (int i = 0; i < m; i++)
    {
        int x, y;
        cin >> x >> y;
        adj[x-1].push_back(y-1); // Decrement indices by 1 and push into adj vector
    }

    bool cycle = false;
    vector<int> stack(n, 0);
    vector<bool> visited(n, false);

    for (int i = 0; i < n; i++)
    {
        if (!visited[i] && isCycle(i, adj, visited, stack))
        {
            cycle = true;
            break; // Once a cycle is found, there is no need to continue checking
        }
    }

    if (cycle)
    {
        cout << "Cycle is present";
    }
    else
    {
        cout << "Cycle is not present";
    }

    return 0;
}
