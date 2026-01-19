#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<long long> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    unordered_map<long long, long long> cnt;
    long long ans = 0;

    for (int j = 0; j < n; j++) {
        long long key = j - a[j];
        if (cnt.count(key)) {
            ans += cnt[key];
        }
        cnt[j + a[j]]++;
    }

    cout << ans << endl;

    return 0;
}