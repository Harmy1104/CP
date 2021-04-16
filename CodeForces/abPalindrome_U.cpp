#include <bits/stdc++.h>
using namespace std;

#define ar array
#define ll long long
#define deb(x) cout << #x << " " << x << "\n";
#define to_upper(a) transform((a).begin(), (a).end(), (a).begin(), ::toupper)
#define to_lower(a) transform((a).begin(), (a).end(), (a).begin(), ::tolower)

void solve() {
	int a, b;
	string s, ans;
	vector<int> v;
	cin >> a >> b;
	cin >> s;	
	
	if((a&1) == 1 and (b&1) == 1 and a == b){
		cout << -1;
		return;
	}
	if(count(s.begin(), s.end(), '?') == 0){
		cout << -1;
		return;
	}
	
	string hs = s.substr(0, floor((int)s.size()/2));
	int hb = floor((b - count(hs.begin(), hs.end(), 1))/2);
	int ha = floor((a - count(hs.begin(), hs.end(), 1))/2);
	
	// while(count(hs.begin(), hs.end(), '?') != 0){
	// 	any pos = (int)(find(hs.begin(), hs.end(), '?') - hs.begin());
	// 	ha > hb ? swap(pos, 0) : swap(pos, 1);
	// }
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