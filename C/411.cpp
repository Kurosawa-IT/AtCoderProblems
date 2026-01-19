#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n, q;
    cin >> n >> q;

    vector<bool> black(n + 2, false);

    int intervals = 0;

    for (int i = 0; i < q; i++)
    {
        int a;
        cin >> a;

        bool cur = black[a];
        bool left = black[a - 1];
        bool right = black[a + 1];

        if (cur)
        {
            if (left && right)
            {
                intervals++;
            }
            else if (!left && !right)
            {
                intervals--;
            }
        }
        else
        {
            if (left && right)
            {
                intervals--;
            }
            else if (!left && !right)
            {
                intervals++;
            }
        }

        black[a] = !black[a];

        cout << intervals << endl;
    }

    return 0;
}