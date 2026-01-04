#include <bits/stdc++.h>
using namespace std;

long long f(long long a1, long long a2)
{
    long long tmp = a1 + a2;
    long long rev = 0;

    while (tmp > 0)
    {
        int digit = tmp % 10;
        rev = rev * 10 + digit;
        tmp /= 10;
    }

    return rev;
}

int main()
{
    int x, y;
    cin >> x >> y;

    vector<long long> a(11);
    a.at(1) = x;
    a.at(2) = y;
    for (int i = 3; i <= 10; i++)
    {
        a.at(i) = f(a.at(i - 1), a.at(i - 2));
    }

    cout << a.at(10) << endl;
}