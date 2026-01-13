#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    set<pair<int, int>> used;

    int ans = 0;
    for (int i = 0; i < m; i++)
    {
        int r, c;
        cin >> r >> c;
        r--;
        c--;

        vector<pair<int, int>> cells = {
            {r, c},
            {r + 1, c},
            {r, c + 1},
            {r + 1, c + 1}
        };

        bool flag = true;
        for (auto &p : cells) {
            if (used.count(p)) {
                flag = false;
                break;
            }
        }

        if (flag) {
            ans++;
            for (auto &p : cells) {
                used.insert(p);
            }
        }
    }

    cout << ans << endl;

    return 0;
}