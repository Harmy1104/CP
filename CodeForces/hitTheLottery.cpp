#include <bits/stdc++.h>
using namespace std;

#define ar array
#define ll long long
#define v_sort(a) sort((a).begin(), (a).end())
#define v_print(a, type, sep, nl) copy(a.begin(), a.end(), ostream_iterator<type>(cout, sep)); nl ? cout << "\n" : cout << ""
#define to_upper(a) transform((a).begin(), (a).end(), (a).begin(), ::toupper)
#define to_lower(a) transform((a).begin(), (a).end(), (a).begin(), ::tolower)

int numBills(int &n, int bill){
	int ans = 0;
	if(n < bill){
		return ans;
	}   
	while(n/bill != 0){
		if(n/bill > 0){
			n -= bill;
			ans++;
		}
	}
	return ans;
}

void solve() {
	int n, ans = 0;
	cin >> n;
	ans += numBills(n, 100);
	ans += numBills(n, 20);
	ans += numBills(n, 10);
	ans += numBills(n, 5);
	ans += numBills(n, 1);
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