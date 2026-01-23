#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    vector<int> b(n);
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }

    vector<int> w(m);
    for (int i = 0; i < m; i++)
    {
        cin >> w[i];
    }

    long long ans = 0;
    int i;
    bool flag = true;

    sort(b.rbegin(), b.rend());
    sort(w.rbegin(), w.rend());

    for (i = 0; i < min(n, m); i++) {
        if (w[i] > 0 && b[i] + w[i] > 0) {
            ans += b[i] + w[i];
        } else {
            flag = false;
            break;
        }
    }

    if (flag) {
        i = min(n, m);
    }

    for (int j = i; j < n; j++) {
        if (b[j] > 0) {
            ans += b[j];
        } else {
            break;
        }
    }

    cout << ans << endl;

    return 0;
}