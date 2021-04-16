#include <bits/stdc++.h>
using namespace std;

#define ar array
#define ll long long
#define to_upper(a) transform((a).begin(), (a).end(), (a).begin(), ::toupper)
#define to_lower(a) transform((a).begin(), (a).end(), (a).begin(), ::tolower)

void solve() {
    int n;
    vector<int> v, ans;
    cin >> n;
    for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        v.push_back(a);
    }
    for(auto i = v.begin(); i != v.end()-1; i++){
        for(auto j = v.begin()+1; j != v.end(); j++){
            // cout << "i: " << *i << "vi: " << i] << " " << "vj: " << v[j] << "j: " << j << "\n";
            if(((*i + *j) & 1) == 0){
                ans.push_back(*i);
                ans.push_back(*j);
                i++;
                j++;
            }
        }
    }
    for(int i : ans){
        cout << i << " ";
    }
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