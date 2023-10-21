#include <bits/stdc++.h>
using namespace std;

int main()
{
    int ladders;
    cin >> ladders;
    map<int, int> lad;
    map<int, int> snak;

    for (int i = 0; i < ladders; i++)
    {
        int u, v;
        cin >> u >> v;
        lad[u] = v;
    }

    int snakes;
    cin >> snakes;

    for (int i = 0; i < snakes; i++)
    {
        int u, v;
        cin >> u >> v;
        snak[u] = v;
    }

    int moves = 0;
    queue<int> q;
    q.push(1);
    bool found = false;
    vector<bool> vis(101, false);
    vis[1] = true;

    while (!q.empty() && !found)
    {
        int sz = q.size();
        while (sz--)
        {
            int t = q.front();
            q.pop();

            for (int die = 1; die <= 6; die++)
            {
                int nextPos = t + die;

                if (nextPos == 100)
                {
                    found = true;
                    break;
                }

                if (nextPos <= 100 && lad.find(nextPos) != lad.end() && !vis[lad[nextPos]])
                {
                    vis[lad[nextPos]] = true;
                    q.push(lad[nextPos]);
                }
                else if (nextPos <= 100 && snak.find(nextPos) != snak.end() && !vis[snak[nextPos]])
                {
                    vis[snak[nextPos]] = true;
                    q.push(snak[nextPos]);
                }
                else if (nextPos <= 100 && !vis[nextPos] && lad.find(nextPos) == lad.end() && snak.find(nextPos) == snak.end())
                {
                    vis[nextPos] = true;
                    q.push(nextPos);
                }
            }

            if (found)
                break;
        }

        moves++;
    }

    if (found)
        cout << moves << endl;
    else
        cout << "-1" << endl;

    return 0;
}
