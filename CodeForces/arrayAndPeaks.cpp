#include <bits/stdc++.h>
using namespace std;

#define ar array
#define ll long long
#define v_sort(a) sort((a).begin(), (a).end())
#define v_print(a, type, sep, nl) copy(a.begin(), a.end(), ostream_iterator<type>(cout, sep)); nl ? cout << "\n" : cout << ""
#define to_upper(a) transform((a).begin(), (a).end(), (a).begin(), ::toupper)
#define to_lower(a) transform((a).begin(), (a).end(), (a).begin(), ::tolower)

void solve() {
	int n, k;
	vector<int> v;
	cin >> n >> k;
	if((n < 3 && k > 0) || k == n || k >= ceil((float)n/(float)2)){
		cout << -1 << "\n";
		return;
	}
	for(int i = 1; i <= n-k; i++){
		v.push_back(i);
	}
	int c = 0;
	for(int i = 0; i < k; i++){
		c++;
		v.insert(v.begin()+c, n-i);
		c++;
	}
	v_print(v, int, " ", true);
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