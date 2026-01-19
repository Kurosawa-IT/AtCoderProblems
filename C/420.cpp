#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }

    vector<int> min_num(n);
    for (int i = 0; i < n; i++)
    {
        min_num[i] = min(a[i], b[i]);
    }

    long long sum_min_num = 0;
    for (int i = 0; i < n; i++)
    {
        sum_min_num += min_num[i];
    }

    for (int i = 0; i < q; i++)
    {
        char c;
        cin >> c;
        int x, v;
        cin >> x >> v;

        if (c == 'A')
        {
            a[x - 1] = v;
            int tmp = min_num[x - 1];
            min_num[x - 1] = min(a[x - 1], b[x - 1]);

            if (tmp != min_num[x - 1])
            {
                sum_min_num += min_num[x - 1] - tmp;
            }
        }
        else
        {
            b[x - 1] = v;
            int tmp = min_num[x - 1];
            min_num[x - 1] = min(a[x - 1], b[x - 1]);

            if (tmp != min_num[x - 1])
            {
                sum_min_num += min_num[x - 1] - tmp;
            }
        }
        cout << sum_min_num << endl;
    }

    return 0;
}