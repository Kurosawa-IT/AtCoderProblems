#include <bits/stdc++.h>
using namespace std;

int digits (int k) {
    int ans = 0;
    while (k > 0) {
        ans += k % 10;
        k /= 10;
    }

    return ans;
}

int main()
{
    int n;
    cin >> n;

    n;
    vector<int> f(n + 1);
    f.at(0) = 1;

    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < i; j++) {
            f.at(i) += digits(f.at(j));
        }
    }

    cout << f.at(n) << endl;
}