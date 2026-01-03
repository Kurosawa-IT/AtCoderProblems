#include <bits/stdc++.h>
using namespace std;

int main()
{
    int h, w;
    cin >> h >> w;

    vector<vector<char>> s(h + 2, vector<char>(w + 2));
    for (int i = 1; i <= h; i++)
    {
        for (int j = 1; j <= w; j++)
        {
            cin >> s.at(i).at(j);
        }
    }

    bool flag = true;

    for (int i = 1; i <= h; i++)
    {
        for (int j = 1; j <= w; j++)
        {
            int cnt = 0;
            if (s.at(i - 1).at(j) == '#')
            {
                cnt++;
            }
            if (s.at(i + 1).at(j) == '#')
            {
                cnt++;
            }
            if (s.at(i).at(j - 1) == '#')
            {
                cnt++;
            }
            if (s.at(i).at(j + 1) == '#')
            {
                cnt++;
            }
            if (s.at(i).at(j) == '#' && !(cnt == 2 || cnt == 4))
            {
                flag = false;
            }
        }
    }

    if (flag)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}