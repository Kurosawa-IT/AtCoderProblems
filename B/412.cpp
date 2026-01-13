#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s, t;
    cin >> s >> t;

    for (int i = 1; i < s.size(); i++)
    {
        if (islower(s[i])) {
            continue;
        }
        bool flag = false;
        for (int j = 0; j < t.size(); j++)
        {
            if (s[i - 1] == t[j]) {
                flag = true;
            }
        }

        if (flag == false) {
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;
    return 0;
}