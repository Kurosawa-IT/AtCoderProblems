#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a.at(i);
    }

    bool ans = false;
    for (int i = 0; i < n; i++)
    {
        int tmp = 0;
        for (int j = 0; j < n; j++)
        {
            if (j != i)
                tmp += a.at(j);
        }
        if (tmp == m)
            ans = true;
    }

    if (ans)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}