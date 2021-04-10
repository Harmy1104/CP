#include <bits/stdc++.h>
using namespace std;

#define ar array
#define ll long long
#define v_sort(a) sort((a).begin(), (a).end())
#define to_upper(a) transform((a).begin(), (a).end(), (a).begin(), ::toupper)
#define to_lower(a) transform((a).begin(), (a).end(), (a).begin(), ::tolower)

void solve() {
	string a;
	vector<int> v;
	cin >> a;
	for(int i = 0; i < (int)a.size(); i += 2){
		v.push_back(a[i]);
	}
	v_sort(v);
	for(int i = 0; i < (int)v.size(); i++){
		cout << v[i] - '0';
		if(i != (int)v.size() - 1)
			cout << "+";
	}
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