#include <bits/stdc++.h>
using namespace std;

#define ar array
#define ll long long

void solve() {
	int n, k, d;
	map<int, int> s;
	cin >> n >> k ;
	d = n-k;
	while(n--){
		int a;
		cin >> a;
		if(n == d){
			k = a;
		}
		++s[a];
	}
	int ans = 0;
	for (auto it = s.begin(); it != s.end(); it++){
		if(it->first == 0 || it->first < k)
			continue;
		ans += it->second;
	}
	cout << ans;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc = 1;
    // scanf("%d", &tc);
    while(tc--) {
        solve();
    }
}