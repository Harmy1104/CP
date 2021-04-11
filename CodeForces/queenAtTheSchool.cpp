#include <bits/stdc++.h>
using namespace std;

#define ar array
#define ll long long
#define v_sort(a) sort((a).begin(), (a).end())
#define v_print(a, type, sep, nl) copy(a.begin(), a.end(), ostream_iterator<type>(cout, sep)); nl ? cout << "\n" : cout << ""
#define to_upper(a) transform((a).begin(), (a).end(), (a).begin(), ::toupper)
#define to_lower(a) transform((a).begin(), (a).end(), (a).begin(), ::tolower)

void solve() {
	int n, t;
	cin >> n >> t;
	vector<char> v;
	for(int i = 0; i < n; i++){
		char a;
		cin >> a;
		v.push_back(a);
	}
	for(int i = 0; i < t; i++){
		for(int j = 0; j < n-1; j++){
			if(v[j] == 'B' and v[j+1] == 'G'){
				swap(v[j], v[j+1]);
				j++;
			}
		}
	}
	v_print(v, char, "", false);
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