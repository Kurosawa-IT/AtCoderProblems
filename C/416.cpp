#include <bits/stdc++.h>
using namespace std;

int n, k, x;
vector<string> s;
vector<string> v;

void f(string t, int cnt)
{
    if (cnt == k)
    {
        v.push_back(t);
        return;
    }

    for (int i = 0; i < n; i++)
    {
        f(t + s[i], cnt + 1);
    }
}

int main()
{

    cin >> n >> k >> x;

    string tmp;
    for (int i = 0; i < n; i++)
    {
        cin >> tmp;
        s.push_back(tmp);
    }

    f("", 0);

    sort(v.begin(), v.end());

    cout << v[x - 1] << endl;

    return 0;
}