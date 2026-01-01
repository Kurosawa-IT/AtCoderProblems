#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> L(n);
    for (int i = 0; i < n; i++) {
        cin >> L[i];
    }

    int l = -1, r = -1;

    // 先頭で初めて 1 が出る index
    for (int i = 0; i < n; i++) {
        if (L[i] == 1) {
            l = i;
            break;
        }
    }

    // 末尾で初めて 1 が出る index
    for (int i = n - 1; i >= 0; i--) {
        if (L[i] == 1) {
            r = i;
            break;
        }
    }

    if (l == -1) {
        // 全部 0 なら到達不能は 0
        cout << 0 << endl;
    } else {
        // l<r ならその間の部屋が到達不能
        cout << max(0, r - l) << endl;
    }
}
