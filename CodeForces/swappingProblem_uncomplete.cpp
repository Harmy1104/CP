#include <bits/stdc++.h>
using namespace std;

#define ar array
#define ll long long
#define v_sort(a) sort((a).begin(), (a).end())
#define v_print(a, type, sep, nl) copy(a.begin(), a.end(), ostream_iterator<type>(cout, sep)); nl ? cout << "\n" : cout << ""
#define to_upper(a) transform((a).begin(), (a).end(), (a).begin(), ::toupper)
#define to_lower(a) transform((a).begin(), (a).end(), (a).begin(), ::tolower)

void solve() {
	int n, x, y;
	vector<ll> a, b;
	cin >> n;
	for(int i = 0; i < n; i++){
		int x;
		cin >> x;
		a.push_back(x);
	}
	for(int i = 0; i < n; i++){
		int x;
		cin >> x;
		b.push_back(x);
	}
	
	int sum1 = 0;
	for(int i = 0; i < n; i++){
		sum1 += abs(a[i]-b[i]);
	}
	
	x = distance(a.begin(), max_element(a.begin(), a.end()));
	y = distance(b.begin(), max_element(b.begin(), b.end()));
	swap(b[x], b[y]);
	
	int sum2 = 0;
	for(int i = 0; i < n; i++){
		sum2 += abs(a[i]-b[i]);
	}
	sum1 <= sum2 ? cout << sum1 : cout << sum2;
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