#include <bits/stdc++.h>
using namespace std;

#define ar array
#define ll long long
#define to_upper(a) transform((a).begin(), (a).end(), (a).begin(), ::toupper)
#define to_lower(a) transform((a).begin(), (a).end(), (a).begin(), ::tolower)

void solve() {
	string a;
	cin >> a;
	if((int)count(a.begin(), a.end(), 'a') == 1){
		cout << 1;
		return;
	}
	if((int)a.size()-(int)count(a.begin(), a.end(), 'a') < (int)a.size()/2){
		cout << a.size();
		return;
	}
	cout << (int)count(a.begin(), a.end(), 'a') * 2 - 1;
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