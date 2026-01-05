#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    vector<int> c;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '#')
        {
            c.push_back(i + 1);
        }

        if (c.size() > 1)
        {
            cout << c[0] << "," << c[1] << endl;
            c.clear();
        }
    }
}