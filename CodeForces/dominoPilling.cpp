#include <bits/stdc++.h>
using namespace std;

#define ar array
#define ll long long

void solve() {
	// float w, h;
	int w, h, ans = 0;
	cin >> w >> h;
	if(w%2 != 0)
		ans += h%2 == 0 ? h/2 : (h-1)/2;
	while(w/2 > 0 && w > 1){
		ans += h;
		w -= 2;
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