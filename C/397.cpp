#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    map<int, int> first, second;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        second[a[i]]++;
    }

    int ans = 0;

    for (int i = 0; i < n - 1; i++)
    {
        first[a[i]]++;
        second[a[i]]--;
        if (second[a[i]] == 0) {
            second.erase(a[i]);
        }

        int tmp = first.size() + second.size();
        ans = max(ans, tmp);
    }

    cout << ans << endl;

    return 0;
}