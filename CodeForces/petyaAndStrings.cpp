#include <bits/stdc++.h>
using namespace std;

#define ar array
#define ll long long

void solve() {
	string a, b;
	cin >> a >> b;
	transform(a.begin(), a.end(), a.begin(), ::tolower);
	transform(b.begin(), b.end(), b.begin(), ::tolower);
	if(a == b){
		cout << 0;
		return;
	}
	if(a < b){
		cout << -1;
		return;
	}
	cout << 1;
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