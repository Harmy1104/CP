#include <bits/stdc++.h>
using namespace std;

#define ar array
#define ll long long
#define v_sort(a) sort((a).begin(), (a).end())
#define to_upper(a) transform((a).begin(), (a).end(), (a).begin(), ::toupper)
#define to_lower(a) transform((a).begin(), (a).end(), (a).begin(), ::tolower)

void solve() {
	int n, o;
	map<int, int> m;
	vector<int> v;
	cin >> n;
	while(n--){
		int a;
		cin >> a;
		m[a] += 1;
		v.push_back(a);
	}
	for(auto it = m.begin(); it != m.end(); it++){
		if(it->second == 1){
			o = it->first;
		}
	}	
	auto it = find(v.begin(), v.end(), o);
	cout << it - v.begin() + 1 << "\n";
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