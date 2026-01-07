#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    
    vector<pair<int, int>> A;
    A.emplace_back(0, 1);
    int a;
    for(int i=0; i<n; i++){
        cin >> a;

        if(A.back().first==a){
            A.back().second++;
        }else{
            A.emplace_back(a, 1);
        }

        if(A.back().second==4){
            A.pop_back();
        }
    }

    int cnt = 0;
    for(int i=0; i<A.size(); i++){
        cnt += A[i].second;
    }

    cout << cnt - 1 << endl;

    return 0;
}