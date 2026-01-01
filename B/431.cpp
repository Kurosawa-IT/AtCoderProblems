#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, n;
    cin >> x >> n;

    vector<int> w(n);
    for (int i = 0; i < n; i++)
    {
        cin >> w.at(i);
    }

    int q;
    cin >> q;

    vector<int> parts(n, 0);

    for (int i = 0; i < q; i++)
    {
        int p;
        cin >> p;

        if (parts.at(p - 1) == 0)
        {
            x += w.at(p - 1);
            cout << x << endl;
            parts.at(p - 1) = 1;
        }
        else
        {
            x -= w.at(p - 1);
            cout << x << endl;
            parts.at(p - 1) = 0;
        }
    }
}
