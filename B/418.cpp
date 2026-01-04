#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int n = s.size();

    double ans = 0.0;

    for (int i = 0; i < n; i++)
    {
        if (s[i] != 't') continue;
        int count_t = 1; 
        for (int j = i + 1; j < n; j++)
        {
            if (s[j] == 't') count_t++;
            if (s[j] == 't' && j - i + 1 >= 3)
            {
                double rate = 1.0 * (count_t - 2) / (j - i + 1 - 2);
                ans = max(ans, rate);
            }
        }
    }

    cout << fixed << setprecision(10) << ans << endl;
}
