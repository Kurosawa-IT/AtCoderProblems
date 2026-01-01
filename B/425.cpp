#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a.at(i);
    }

    bool flag = true;

    map<int, int> m;
    set<int> s;
    for (int i = 0; i < n; i++)
    {
        m[a.at(i)]++;
        s.insert(a.at(i));
    }

    for (auto p : m)
    {
        if (p.second > 1 && p.first != -1)
        {
            flag = false;
        }
    }

    vector<int> ans(n);

    if (flag)
    {
        for (int i = 0; i < n; i++)
        {
            if (a.at(i) != -1)
            {
                ans.at(i) = a.at(i);
            }
            else
            {
                for (int j = 1; j <= n; j++)
                {
                    if (!s.count(j))
                    {
                        ans.at(i) = j;
                        s.insert(j);
                        break;
                    }
                }
            }
        }
    }

    if (flag)
    {
        cout << "Yes" << endl;
        for (int i = 0; i < n; i++)
        {
            cout << ans.at(i) << " ";
        }
        cout << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}