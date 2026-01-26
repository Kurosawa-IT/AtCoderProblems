#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, w;
        cin >> n >> w;
        vector<long long> Cs(2 * w, 0);

        for (int i = 0; i < n; i++)
        {
            int idx = i % (2 * w);
            int c;
            cin >> c;
            Cs[idx] += c;
        }

        long long current_window_sum = 0;
        for (int i = 0; i < w; i++)
        {
            current_window_sum += Cs[i];
        }

        long long min_total_cost = current_window_sum;

        for (int s = 1; s < 2 * w; s++)
        {
            current_window_sum -= Cs[s - 1];
            current_window_sum += Cs[(s + w - 1) % (2 * w)];
            min_total_cost = min(min_total_cost, current_window_sum);
        }

        cout << min_total_cost << endl;
    }

    return 0;
}