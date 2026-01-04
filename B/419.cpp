#include <bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin >> q;

    vector<int> box;

    for (int i = 0; i < q; i++)
    {
        vector<int> query(2);
        cin >> query.at(0);
        if (query.at(0) == 1) {
            cin >> query.at(1);
        }

        if (query.at(0) == 1)
        {
            box.push_back(query.at(1));
        }
        else
        {
            cout << box.at(0) << endl;
            box.erase(box.begin());
        }

        sort(box.begin(), box.end());
    }
}