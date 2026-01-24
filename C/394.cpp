#include <bits/stdc++.h>
using namespace std;

void f(stack<char> &st, char c) {
    if (st.empty()) {
        st.push(c);
        return;
    }

    if  (st.top() == 'W' && c == 'A') {
        st.pop();
        f(st, 'A');
        f(st, 'C');
        return;
    }

    st.push(c);
    return;
}

int main()
{
    string s;
    cin >> s;

    stack<char> st;

    for (int i = 0; i < s.size(); i++) {
        f(st, s[i]);
    }

    string ans = "";

    while (!st.empty()) {
        ans += st.top();
        st.pop();
    }

    reverse(ans.begin(), ans.end());

    cout << ans << endl;

    return 0;
}