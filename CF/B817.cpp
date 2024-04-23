#include <bits/stdc++.h>

using namespace std;

#define endl "\n"
typedef long long ll;

void solve(){
    int t; cin >> t;
    while(t--){
        int n, dec = 0; 
        cin >> n;  
        char p1[n], p2[n];
        for(int i=0; i < n; i++)cin >> p1[i];
        for(int i=0; i < n; i++)cin >> p2[i];    
        for(int i=0; i < n; i++){
            if(p1[i] != p2[i]){
                dec++;
                if((p1[i] == 'G' && p2[i] == 'B') || (p1[i] == 'B' && p2[i] == 'G')){dec--;}
            };
        };
  
        if (dec > 0) { 
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