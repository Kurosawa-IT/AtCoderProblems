#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    long long now = 0;
    long long reach = 0;

    while (now <= min(reach, n - 1))
    {
        reach = min(max(reach, now + a[now] - 1), n - 1);
        now++;
    }

    cout << reach + 1 << endl;

    return 0;
}