#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    vector<string> s(n);
    for (int i = 0; i < n; i++)
    {
        cin >> s.at(i);
    }

    vector<int> point(n, 0);

    for (int i = 0; i < m; i++)
    {
        int x = 0;
        int y = 0;
        for (int j = 0; j < n; j++)
        {
            if (s.at(j).at(i) == '0')
            {
                x++;
            }
            else
            {
                y++;
            }
        }

        if (x == 0 || y == 0)
        {
            for (int a = 0; a < n; a++)
            {
                point.at(a)++;
            }
        }
        else if (x < y)
        {
            for (int a = 0; a < n; a++)
            {
                if (s.at(a).at(i) == '0')
                {
                    point.at(a)++;
                }
            }
        }
        else
        {
            for (int a = 0; a < n; a++)
            {
                if (s.at(a).at(i) == '1')
                {
                    point.at(a)++;
                }
            }
        }
    }

    int max = *max_element(begin(point), end(point));

    for (int i = 0; i < n; i++)
    {
        if (point.at(i) == max)
        {
            cout << i + 1 << " ";
        }
    }

    cout << endl;
}