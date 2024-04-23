#include <bits/stdc++.h>

using namespace std;

#define endl "\n"
typedef long long ll;

void solve(){
    int t; cin >> t;
    while(t--){
        int n, count=0, best = 0; cin >> n;
        int num[n];
        for(int i =0; i < n;i++){cin >> num[i];}
        for(int i =0; i < n;i++){
            if(num[i] == 0){
                if(num[i - 1] == 0)count++;
                if(num[i - 1] == 1 || i == 0)count = 1;
            }
            else count = 0;
            best = max(count, best);
        } 
        cout << best << endl;
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