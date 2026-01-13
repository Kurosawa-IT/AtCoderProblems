#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> d(n - 1);
    for (int i = 0; i < n - 1; i++)
    {
        cin >> d[i];
    }

    vector<int> sum(n, 0);
    for (int i = 1; i < n; i++)
    {
        sum[i] = sum[i - 1] + d[i - 1];
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            cout << sum[j] - sum[i] << " ";
        }
        cout << endl;
    }

    return 0;
}