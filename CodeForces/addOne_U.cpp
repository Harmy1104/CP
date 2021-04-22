#include <bits/stdc++.h>
using namespace std;

#define ar array
#define ll long long
#define pb push_back
#define to_upper(a) transform((a).begin(), (a).end(), (a).begin(), ::toupper)
#define to_lower(a) transform((a).begin(), (a).end(), (a).begin(), ::tolower)

void solve() {
    int n, m;
    vector<int> v;
    cin >> n >> m;
    while(n){
        v.pb(n%10);
        n /= 10;
    }
    reverse(v.begin(), v.end());
    while(m--){
        for(int i = 0; i < (int)v.size(); i++){
            if(v[i] == 9){
                v.pb(1);
                v.pb(0);
            } else {
                v[i]++;
            }
        }
        remove(v.begin(), v.end(), 9);
    }
    for(int i : v)
        cout << i << " ";
    cout << "\n";
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc = 1;
    cin >> tc;
    while(tc--) {
        solve();
    }
}
