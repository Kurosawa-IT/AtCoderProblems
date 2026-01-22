#include <bits/stdc++.h>
using namespace std;

struct UnionFind
{
    vector<int> p, r;
    UnionFind(int n) : p(n), r(n, 0)
    {
        iota(p.begin(), p.end(), 0);
    }
    int find(int x)
    {
        return p[x] == x ? x : (p[x] = find(p[x]));
    }
    bool unite(int x, int y)
    {
        x = find(x);
        y = find(y);
        if (x == y)
            return false;
        if (r[x] < r[y])
            p[x] = y;
        else if (r[y] < r[x])
            p[y] = x;
        else
        {
            p[y] = x;
            r[x]++;
        }
        return true;
    }
};

int main()
{
    int N, M;
    cin >> N >> M;

    UnionFind uf(N);
    int keep = 0;
    for (int i = 0; i < M; i++)
    {
        int u, v;
        cin >> u >> v;
        u--;
        v--;
        if (uf.unite(u, v))
            keep++;
    }

    cout << (M - keep) << endl;
    ;
    return 0;
}