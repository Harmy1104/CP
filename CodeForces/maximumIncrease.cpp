#include <bits/stdc++.h>
using namespace std;

#define ar array
#define ll long long
#define to_upper(a) transform((a).begin(), (a).end(), (a).begin(), ::toupper)
#define to_lower(a) transform((a).begin(), (a).end(), (a).begin(), ::tolower)

void solve() {
    int n, ans = 1;
    vector<int> v, pa;
    cin >> n;
    if(n == 1){
        cout << ans;
        return;
    }
    for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        v.push_back(a);
    }
    for(int i = 0; i < (int)v.size()-1; i++){
        if(v[i] < v[i+1]){
            ans++;
            if(i == (int)v.size()-2){
                pa.push_back(ans);
            }
            continue;
        }
        pa.push_back(ans);
        ans = 1;
    }
   cout << *max_element(pa.begin(), pa.end());
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
