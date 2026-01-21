#include <bits/stdc++.h>
using namespace std;

long long mod (long long x, long long m) {
    long long res = (x % m + m) % m;

    return res;
}

int main()
{
    int n, k;
    cin >> n >> k;

    if (k > n) {
        cout << 1 << endl;
        return 0;
    }

    vector<long long> a(n + 1);

    for (int i = 0; i < k; i++) {
        a[i] = 1;
    }

    int j = 0;
    a[k] = k;
    for (int i = k + 1; i <= n; i++) {
        a[i] = 2 * a[i - 1] - a[j];
        j++;
        a[i] = mod(a[i], 1000000000);
    }

    cout << mod(a[n], 1000000000) << endl;

    return 0;
}