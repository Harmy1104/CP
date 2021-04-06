#include <bits/stdc++.h>
using namespace std;

#define ar array
#define ll long long

void solve() {
	int n, k, ans = 0;
	vector<int> v;
	cin >> n >> k ;
	for (int i = 0; i < n; i++){
		int a;
		cin >> a;
		v.push_back(a);
	}
	sort(v.begin(), v.end());
	
	k = n-k;
	
	for (auto it = lower_bound(v.begin(), v.end(), v[k]); it < v.end(); it++){
		if (*it != 0) ans++;
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
