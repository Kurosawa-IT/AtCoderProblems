#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    vector<int> pos_A;

    for (int i = 0; i < n * 2; i++)
    {
        if (s[i] == 'A')
        {
            pos_A.push_back(i);
        }
    }

    long long cost1 = 0, cost2 = 0;

    for (int i = 0; i < n; i++)
    {
        cost1 += abs(pos_A[i] - (2 * i));
        cost2 += abs(pos_A[i] - (2 * i + 1));
    }

    cout << min(cost1, cost2) << endl;

    return 0;
}