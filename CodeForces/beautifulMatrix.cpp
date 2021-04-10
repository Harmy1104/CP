#include <bits/stdc++.h>
using namespace std;

#define ar array
#define ll long long
#define to_upper(a) transform((a).begin(), (a).end(), (a).begin(), ::toupper)
#define to_lower(a) transform((a).begin(), (a).end(), (a).begin(), ::tolower)

void solve() {
	int w = 0, h = 0, ans = 0;
	for(int i = 1; i <= 5; i++){
		for(int j = 1; j <= 5; j++){
			int a;
			cin >> a;
			if(a == 1){
				w = i;
				h = j;
			}
		}
	}
	if(w == 3 && h == 3){
		cout << 0;
		return;
	}
	if(w < 3){
		ans += (3 - w);
	}
	if(h < 3){
		ans += (3 - h);
	}
	if(w > 3){
		ans += (w - 3);
	}
	if(h > 3){
		ans += (h - 3);
	}
	cout << ans;
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