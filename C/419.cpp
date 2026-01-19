#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> r(n), c(n);
    for (int i = 0; i < n; i++)
    {
        cin >> r[i] >> c[i];
    }

    sort(r.begin(), r.end());
    sort(c.begin(), c.end());

    int h = r[n - 1] - r[0];
    int w = c[n - 1] - c[0];
    int dis = max(h, w);

    cout << (dis + 1) / 2 << endl;

    return 0;
}