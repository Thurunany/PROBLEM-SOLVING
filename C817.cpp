#include <bits/stdc++.h>

using namespace std;

#define endl "\n"
typedef long long ll;

void solve(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        string s[3][n];
        map<string, int> mp;

        for(int i=0; i < 3; i++){
            for(int j=0; j < n; j++){
                cin >> s[i][j];
                mp[s[i][j]]++;
            }
        }
        
        for(int i=0; i < 3; i++){
            int count = 0;
            for(int j=0; j < n; j++){
               if(mp[s[i][j]] == 2) count++;
               else if(mp[s[i][j]] == 1) count += 3;
            }cout << count << ' ';
        }
        cout << endl;
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
