#include <bits/stdc++.h>
using namespace std;

#define ar array
#define ll long long
#define pb push_back
#define to_upper(a) transform((a).begin(), (a).end(), (a).begin(), ::toupper)
#define to_lower(a) transform((a).begin(), (a).end(), (a).begin(), ::tolower)

vector<int> o;

void solve() {
	int n;
	cin >> n;
	if(n == 2 || n == 4){
		cout << "YES" << "\n";
		return;
	}

	int f = sqrt(n/4);
	int t = sqrt(n/2);

	if((f*f*4) == n || (t*t*2) == n || binary_search(o.begin(), o.end(), n)){
		cout << "Yes" << "\n";
		return;
	}
	
	cout << "NO" << "\n";

}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc = 1;
	cin >> tc;
	int tris = 4, layer = 3;
	while(tris < 1e9){
		tris += layer*4;
		o.pb(tris);
		layer += 2;
	}
    while(tc--) {
        solve();
    }
}
