#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    vector<vector<int>> food(n);
    vector<int> remain(m);
    for (int i = 0; i < m; i++)
    {
        int k;
        cin >> k;
        remain[i] = k;
        for (int j = 0; j < k; j++)
        {
            int a;
            cin >> a;
            a--;
            food[a].push_back(i);
        }
    }

    vector<int> b(n);
    for (int i = 0; i < n; i++)
    {
        int tmp;
        cin >> tmp;
        tmp--;
        b[i] = tmp;
    }

    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        int f = b[i];

        for (int dish : food[f])
        {
            remain[dish]--;
            if (remain[dish] == 0)
            {
                ans++;
            }
        }

        cout << ans << endl;
    }

    return 0;
}