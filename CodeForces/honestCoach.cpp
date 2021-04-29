#include <bits/stdc++.h>
using namespace std;

#define ar array
#define ll long long
#define pb push_back
#define to_upper(a) transform((a).begin(), (a).end(), (a).begin(), ::toupper)
#define to_lower(a) transform((a).begin(), (a).end(), (a).begin(), ::tolower)

void solve() {
	int n;
	cin >> n;
	vector<int> v, subs(n);
	while(n--){
		int a;
		cin >> a;
		v.pb(a);
	}
	sort(v.begin(), v.end());
	adjacent_difference(v.begin(), v.end(), subs.begin());
	cout << *min_element(subs.begin()+1, subs.end()) << "\n";
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc = 1;
    cin >> tc;
    while(tc--) {
        solve();
    }
}
