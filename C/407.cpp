#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    long long ans = 0, shift = 0;

    for (int i = s.size() - 1; i >= 0; i--) {
        int d = s[i] - '0';
        int cur = (d - (shift % 10) + 10) % 10;
        if (cur > 0) {
            ans += cur;
            shift += cur;
        }
        ans++;
    }

    cout << ans << endl;

    return 0;
}