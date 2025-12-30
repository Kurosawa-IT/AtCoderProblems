#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    vector<string> s(n);

    for (int i = 0; i < n; i++) {
        cin >> s.at(i);
    }

    set<string> kind;

    for (int i = 0; i <= n - m; i++) {
        for (int j = 0; j <= n - m; j++) {
            string tmp;
            for (int h = 0; h < m; h++) {
                for (int w = 0; w < m; w++) {
                    tmp += s.at(i + h).at(j + w);
                }
            }
            kind.insert(tmp);
        }
    }

    cout << kind.size() << endl;
}
