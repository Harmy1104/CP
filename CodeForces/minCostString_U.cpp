#include <bits/stdc++.h>
using namespace std;

#define ar array
#define ll long long
#define pb push_back
#define to_upper(a) transform((a).begin(), (a).end(), (a).begin(), ::toupper)
#define to_lower(a) transform((a).begin(), (a).end(), (a).begin(), ::tolower)

void solve() {
	int n, k;
	string ans;
	vector<char> v;
	cin >> n >> k;
	if(k == 1){
		for(int i = 0; i < n; i++){
			ans += 'a';
		}
		cout << ans;
		return;
	}
	if(n < k){
		int ca = 97;
		for(int i = 0; i < n; i++){
			ans += char(ca);
			ca++;
		}
		cout << ans;
		return;
	}

	int fc = 97;
	for(int i = 0; i < k; i++){
		v.pb(char(fc));
		fc++;
	}
	ans += (n & 1) == 1 ? 'a' : '\0';

	if(k == 2){
		while((int)ans.size() != n){
			ans += 'aa'
		}
	}

	do{
		for(int i = 0; i < (int)v.size(); i++){
			for(int j = i+1; j < (int)v.size(); j++){
				if((int)ans.size() == n){
					cout << ans;
					return;
				}
				ans += v[i];
				ans += v[j];
			}
		}
		random_shuffle(v.begin(), v.end());
	} while((int)ans.size() < n);
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
