#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    vector<vector<int>> adj(n);
    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        a--;
        b--;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    for (int i = 0; i < n; i++)
    {
        if (adj[i].size() != 2)
        {
            cout << "No" << endl;
            return 0;
        }
    }

    vector<bool> visited(n, false);
    stack<int> st;
    st.push(0);
    visited[0] = true;

    int countVisited = 1;
    while (!st.empty())
    {
        int v = st.top();
        st.pop();
        for (int u : adj[v])
        {
            if (!visited[u])
            {
                visited[u] = true;
                st.push(u);
                countVisited++;
            }
        }
    }

    if (countVisited == n)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
    return 0;
}