#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    vector<int> a(n);
    vector<int> b(m);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++) {
        cin >> b[i];
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < a.size(); j++)
        {
            if (b[i] == a[j])
            {
                a.erase(a.begin() + j);
                break;
            }
        }
    }

    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }

    cout << endl;
}