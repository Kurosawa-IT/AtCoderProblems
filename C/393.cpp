#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    set<pair<int, int>> s;

    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;

        if (u == v)
        {
            continue;
        }
        if (u > v)
        {
            swap(u, v);
        }
        s.insert(make_pair(u, v));
    }

    cout << m - s.size() << endl;

    return 0;
}