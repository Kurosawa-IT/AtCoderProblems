#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    map<int, int> m;
    vector<int> ans_can;

    for (int i = 0; i < n; i++) {
        m[a[i]]++;
        if (m[a[i]] == 2) {
            ans_can.push_back(a[i]);
        }
    }

    if (ans_can.size() == 0) {
        cout << -1 << endl;
        return 0;
    }

    int ans = INT_MAX;

    for (int i = 0; i < ans_can.size(); i++) {
         int first = -1;
         int second = -1;
         for (int j = 0; j < n; j++) {
            if (a[j] == ans_can[i] && first == -1) {
                first = j;
            } else if (a[j] == ans_can[i]) {
                second = j;
                ans = min(ans, second - first + 1);
                first = second;
            }
         }
    }

    cout << ans << endl;

    return 0;
}