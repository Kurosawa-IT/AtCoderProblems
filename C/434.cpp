#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        string ans = "Yes";
        int n, h;
        cin >> n >> h;

        int current_low = h;
        int current_high = h;
        int prev_time = 0;

        for (int j = 0; j < n; j++)
        {
            int t, l, u;
            cin >> t >> l >> u;

            int now_time = t;
            int change_height = now_time - prev_time;
            current_low = current_low - change_height;
            current_high = current_high + change_height;

            if (u < current_low || l > current_high)
            {
                ans = "No";
            }
            prev_time = now_time;
            current_low = max(current_low, l);
            current_high = min(current_high, u);
        }
        cout << ans << endl;
    }

    return 0;
}