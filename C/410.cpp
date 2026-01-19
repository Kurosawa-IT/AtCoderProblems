#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        a[i] = i + 1;
    }

    int p, x, k;
    int position = 0;
    int idx;
    while (q--)
    {
        int type;
        cin >> type;

        if (type == 1)
        {
            cin >> p >> x;
            idx = (p - 1 + position) % n;
            a[idx] = x;
        }
        else if (type == 2)
        {
            cin >> p;
            idx = (p - 1 + position) % n;
            cout << a[idx] << endl;
        }
        else if (type == 3)
        {
            cin >> k;
            position = (position + k) % n;
        }
    }

    return 0;
}