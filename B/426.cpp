#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    map<char, int> m;

    for (int i = 0; i < s.size(); i++)
    {
        m[s.at(i)]++;
    }

    for (auto &p : m)
    {
        if (p.second == 1)
            cout << p.first << endl;
    }
}