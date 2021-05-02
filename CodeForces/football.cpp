#include <bits/stdc++.h>
using namespace std;

#define ar array
#define ll long long
#define pb push_back
#define to_upper(a) transform((a).begin(), (a).end(), (a).begin(), ::toupper)
#define to_lower(a) transform((a).begin(), (a).end(), (a).begin(), ::tolower)

void solve() {
	string a;
	map<char, vector<int>> m;
	cin >> a;
	int count = 1;
	for(int i = 1; i <= (int)a.size(); i++){
		if(a[i] != a[i-1]){
			m[a[i-1]].pb(count);
			count = 0;
		}
		count += 1;
	}
	*max_element(m['1'].begin(), m['1'].end()) >= 7 || *max_element(m['0'].begin(), m['0'].end()) >= 7 ? cout << "YES" : cout << "NO";
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
