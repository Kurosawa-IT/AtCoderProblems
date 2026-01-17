#include <bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin >> q;

    vector<pair<long long, long long>> a;
    long long type, c, x, k;

    for (int i = 0; i < q; i++)
    {
        cin >> type;

        if (type == 1)
        {
            cin >> c >> x;
            a.emplace_back(x, c);
        }
        else
        {
            cin >> k;
            long long int sum = 0;
            while (k != 0)
            {
                if (a.front().second > k)
                {
                    a.front().second -= k;
                    sum += a.front().first * k;
                    k = 0;
                }
                else
                {
                    sum += a.front().first * a.front().second;
                    k -= a.front().second;
                    a.erase(a.begin());
                }
            }

            cout << sum << endl;
        }
    }

    return 0;
}