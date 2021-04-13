#include <bits/stdc++.h>
using namespace std;

#define ar array
#define ll long long
#define v_sort(a) sort((a).begin(), (a).end())
#define v_print(a, type, sep, nl) copy(a.begin(), a.end(), ostream_iterator<type>(cout, sep)); nl ? cout << "\n" : cout << ""
#define to_upper(a) transform((a).begin(), (a).end(), (a).begin(), ::toupper)
#define to_lower(a) transform((a).begin(), (a).end(), (a).begin(), ::tolower)

void solve() {
	int n, k, maxTime = 240, ans = 1;
	cin >> n >> k;
	if(k > 235){
		cout << 0;
		return;
	}
	maxTime -= k;
	maxTime -= 5;
	while(maxTime > 5*ans and ans < n){
		++ans;
		maxTime -= 5*ans;
		if(maxTime < 0)
			--ans;
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