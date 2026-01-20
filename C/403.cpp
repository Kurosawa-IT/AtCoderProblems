#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, q;
    cin >> n >> m >> q;

    vector<set<int>> s(n);
    vector<bool> a(n);

    while (q--)
    {
        int type;
        cin >> type;

        if (type == 1)
        {
            int x, y;
            cin >> x >> y;
            x--;
            y--;
            s[x].insert(y);
        }
        else if (type == 2)
        {
            int x;
            cin >> x;
            x--;
            a[x] = true;
        }
        else if (type == 3)
        {
            int x, y;
            cin >> x >> y;
            x--;
            y--;

            if (a[x])
            {
                cout << "Yes" << endl;
            }
            else if (s[x].count(y))
            {
                cout << "Yes" << endl;
            }
            else
            {
                cout << "No" << endl;
            }
        }
    }

    return 0;
}