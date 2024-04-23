#include <bits/stdc++.h>

using namespace std;

#define endl "\n"
typedef long long ll;

void solve(){
    int n, a, b; cin >> n;
    while(n--){
        int max = -1, ind = -1, m; cin >> m;
        for(int i =0; i < m; i++){
            cin >> a >> b;
            if(a <= 10 && b > max){
                ind = i + 1;
                max = b;
            }
        }   
        cout << ind << endl;
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