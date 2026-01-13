#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;

    vector<int> num(n + 1, 0);

    for (int i = 0; i < q; i++)
    {
        int x;
        cin >> x;

        if (x != 0)
        {
            cout << x << " ";
            num[x]++;
        }
        else
        {
            int best = 1;
            for (int j = 2; j <= n; j++)
            {
                if (num[j] < num[best])
                {
                    best = j;
                }
            }

            cout << best << " ";
            num[best]++;
        }
    }

    cout << endl;

    return 0;
}