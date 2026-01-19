#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int main()
{

  int n, m, k;
  cin >> n >> m >> k;

  vector<int> h(n);
  vector<int> b(m);

  for (int i = 0; i < n; i++)
  {
    cin >> h[i];
  }
  for (int i = 0; i < m; i++)
  {
    cin >> b[i];
  }

  sort(h.begin(), h.end());
  sort(b.begin(), b.end());

  int j = 0;
  int i = 0;
  int cnt = 0;

  while (i < n && j < m)
  {
    if (h[i] <= b[j])
    {
      cnt++;
      i++;
      j++;
    }
    else
    {
      j++;
    }
  }

  if (cnt >= k)
  {
    cout << "Yes" << endl;
  }
  else
  {
    cout << "No" << endl;
  }

  return 0;
}
