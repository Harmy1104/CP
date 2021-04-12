#include <bits/stdc++.h>
using namespace std;

#define ar array
#define ll long long
#define v_sort(a) sort((a).begin(), (a).end())
#define v_print(a, type, sep, nl) copy(a.begin(), a.end(), ostream_iterator<type>(cout, sep)); nl ? cout << "\n" : cout << ""
#define to_upper(a) transform((a).begin(), (a).end(), (a).begin(), ::toupper)
#define to_lower(a) transform((a).begin(), (a).end(), (a).begin(), ::tolower)

void solve() {
	int n, p, q;
	vector<int> x, y;
	set<int> s, as;
	cin >> n;
	cin >> p;
	for(int i = 0; i < p; i++){
		int t;
		cin >> t;
		s.insert(t);
	}
	cin >> q;
	for(int i = 0; i < q; i++){
		int t;
		cin >> t;
		s.insert(t);
	}
	for(int j = 1; j <= n; j++){
		as.insert(j);
	}
	if(s == as){
		cout << "I become the guy.";
		return;
	}
	cout << "Oh, my keyboard!";
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