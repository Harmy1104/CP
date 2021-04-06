#include <bits/stdc++.h>
using namespace std;

#define ar array
#define ll long long

void solve() {
	int a,b,c;
	cin >> a >> b >> c;
	if(a==b || b==c || c==a){
		cout << "YES";
		return;
	}
	cout << "NO";
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc = 1;
    // scanf("%d", &tc);
    while(tc--) {
        solve();
    }
}