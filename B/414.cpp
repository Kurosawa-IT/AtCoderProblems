#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    string s;

    for (int i = 0; i < n; i++)
    {
        char c;
        int l;
        cin >> c >> l;

        if (s.size() + l > 100)
        {
            cout << "Too Long" << endl;
            return 0;
        }

        s.append(l, c);
    }

    cout << s << endl;
}