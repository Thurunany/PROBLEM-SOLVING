#include <bits/stdc++.h>

using namespace std;

#define endl "\n"
typedef long long ll;

void solve(){
    int N; cin >> N;
    while(N--){
        int r; cin >> r;
        if(r <= 1399){
            cout << "Division 4" << endl;
        } else
        if (r <= 1599){
            cout << "Division 3" << endl;
        }else
        if (r <= 1899){
            cout << "Division 2" << endl;
        }else
            cout << "Division 1" << endl;
        }
}


signed main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int TC = 0;
    if(TC){
        cin >> TC;
        while(TC--) solve();
    } else solve();
    return 0;
} 