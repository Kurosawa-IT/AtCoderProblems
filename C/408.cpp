#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    vector<int> diff(n + 1, 0);

    for (int i = 0; i < m; i++)
    {
        int l, r;
        cin >> l >> r;
        l--;
        r--;

        diff[l]++;
        if (r + 1 < n) diff[r + 1]--;
    }

    int cur = 0;
    int ans = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        cur += diff[i];
        if (cur == 0) {
            cout << 0 << endl;
            return 0;
        } else {
            ans = min(ans, cur);
        }
    }

    cout << ans << endl;

    return 0;
}