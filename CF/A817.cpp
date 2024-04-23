#include <bits/stdc++.h>

using namespace std;

#define endl "\n"
typedef long long ll;

void solve(){
    int t; cin >> t;
    while(t--){
        int n; string p; set<char> timur = {'T', 'i', 'm', 'u', 'r'};
        cin >> n;
        cin >> p;
       
        for(int i=0; i < n; ++i){
            timur.erase(p[i]);
        };
  
        if (timur.size() > 0 || n > 5) { 
            cout << "NO" << endl; 
        } 
        else { 
            cout << "YES" << endl; 
        } 
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