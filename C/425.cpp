#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n, q;
    cin >> n >> q;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    vector<long long> b(2 * n);
    for (int i = 0; i < n; i++) {
        b[i] = a[i];
        b[i + n] = a[i];
    }

    vector<long long> prefix(2 * n + 1, 0);
    for (int i = 0; i < 2 * n; i++) {
        prefix[i + 1] = prefix[i] + b[i];
    }

    int offset = 0;

    while (q > 0) {
        int type;
        cin >> type;

        if (type == 1) {
            int c;
            cin >> c;
            offset = (offset + c) % n;
        } else {
            int l, c;
            cin >> l >> c;

            int start = offset + l - 1;
            int end = offset + c - 1;

            long long ans = prefix[end + 1] - prefix[start];

            cout << ans << endl;
        }

        q--;
    }

    return 0;
}