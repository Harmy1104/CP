#include <bits/stdc++.h>
using namespace std;

#define ar array
#define ll long long
#define v_sort(a) sort((a).begin(), (a).end())
#define to_upper(a) transform((a).begin(), (a).end(), (a).begin(), ::toupper)
#define to_lower(a) transform((a).begin(), (a).end(), (a).begin(), ::tolower)

void solve() {
	string s;
	int c = 0, nc = 0;
	cin >> s;
	for(int i = 0; i < (int)s.size(); i++){
		if((s[i] - 32) == toupper(s[i])){
			++nc;
			continue;
		}
		++c;
	}
	nc < c ? to_upper(s) : to_lower(s);
	cout << s;
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