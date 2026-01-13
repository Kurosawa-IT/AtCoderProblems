#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int n = s.size();

    vector<pair<char, long long>> rle;

    for (char c : s) {
        if (!rle.empty() && rle.back().first == c) {
            rle.back().second++;
        } else {
            rle.emplace_back(c, 1);
        }
    }

    long long ans = 0;
    for (int i = 0; i + 1 < (int)rle.size(); i++) {
        if ((rle[i].first - '0') + 1 == (rle[i+1].first - '0')) {
            ans += min(rle[i].second, rle[i + 1].second);
        }
    }

    cout << ans << endl;
    return 0;
}
