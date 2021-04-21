#include <bits/stdc++.h>
using namespace std;

#define ar array
#define ll long long
#define to_upper(a) transform((a).begin(), (a).end(), (a).begin(), ::toupper)
#define to_lower(a) transform((a).begin(), (a).end(), (a).begin(), ::tolower)

void solve() {
    int k, l, m, n, d;
    set<int> ans;
    cin >> k >> l >> m >> n >> d;
    if(k==1 || l==1 || m==1 || n==1){
        cout << d;
        return;
    }
    for(int i = 1; i <= d; i++){
        if((i%k) == 0){
            ans.insert(i);
        }
        if((i%l) == 0){
            ans.insert(i);
        }
        if((i%m) == 0){
            ans.insert(i);
        }
        if((i%n) == 0){
            ans.insert(i);
        } 
    }
    cout << (int)ans.size();
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc = 1;
    // cin >> tc;
    while(tc--) {
        solve();
    }
}
