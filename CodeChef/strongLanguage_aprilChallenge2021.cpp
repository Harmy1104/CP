#include <bits/stdc++.h>
using namespace std;

#define ar array
#define ll long long

// It is correct I guess. Some weird outputs in codechef.

void solve() {
	int n, k;
	string s, ans = "NO";
	vector<pair<char, int>> v;
	cin >> n >> k;
	cin >> s;
	pair<char, int> p;
	for(int i = 0; i <= n; i++){
		if(i != 0 and s[i] != s[i-1]){
			v.push_back(p);
			p.first = (char) 0;
			p.second = 0;
		}
		p.first = s[i];
		p.second += 1;
	}
	for(pair<char, int> i : v){
		if(i.first == *"*" and i.second >= k){
			ans = "YES";
			break;
		}
	}
	cout << ans << "\n";
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc = 1;
    scanf("%d", &tc);
    while(tc--) {
        solve();
    }
}