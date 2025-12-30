#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    map<string, int> cnt;

    for (int i = 0; i <= n - k; i++) {
        string tmp = s.substr(i, k);
        cnt[tmp]++;
    }

    int max_freq = 0;

    for (auto &p : cnt) {
        max_freq = max(max_freq, p.second);
    }

    vector<string> ans;

    for (auto &p : cnt) {
        if (p.second == max_freq) ans.push_back(p.first);
    }

    cout << max_freq << endl;

    for (int i = 0; i < ans.size(); i++) {
        cout << ans.at(i) << " ";
    }

    cout << endl;
}