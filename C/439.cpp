#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> cnt(n + 1, 0);

    for (int x = 1; x * x <= n; x++)
    {
        for (int y = x + 1; x * x + y * y <= n; y++)
        {
            int s = x * x + y * y;
            cnt[s]++;
        }
    }

    vector<int> ans;
    for (int i = 1; i <= n; i++)
    {
        if (cnt[i] == 1)
        {
            ans.push_back(i);
        }
    }

    cout << ans.size() << endl;
    for (int v : ans)
    {
        cout << v << " ";
    }

    cout << endl;

    return 0;
}