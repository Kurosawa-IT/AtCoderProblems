#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> a(n);
    map<int, int> m;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        m[a[i]]++;
    }

    int max_num = -1;

    for (auto p : m)
    {
        if (p.second == 1)
        {
            max_num = max(max_num, p.first);
        }
    }

    int ans = -1;

    for (int i = 0; i < n; i++) {
        if (a[i] == max_num) {
            ans = i + 1;
            break;
        }
    }

    cout << ans << endl;

    return 0;
}