#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, k;
    cin >> n >> m >> k;

    map<int, int> freq;
    vector<bool> used(n + 1);

    for (int i = 0; i < k; i++)
    {
        int a, b;
        cin >> a >> b;

        freq[a]++;

        for (auto &p : freq)
        {
            if (p.second == m && used.at(p.first) != true)
            {
                cout << p.first << " ";
                used.at(p.first) = true;
            }
        }
    }

    cout << endl;
}