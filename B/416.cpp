#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    string t;

    for (int i = 0; i < s.size(); i++)
    {
        if (s.at(i) == '#')
        {
            t.push_back('#');
        }
        else if (i == 0 || s[i - 1] == '#')
        {
            t.push_back('o');
        }
        else
        {
            t.push_back('.');
        }
    }

    cout << t << endl;
}