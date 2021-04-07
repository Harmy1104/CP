#include <bits/stdc++.h>
using namespace std;

#define ar array
#define ll long long

void solve() {
	float k1, k2, k3, v;
	scanf("%f %f %f %f", &k1, &k2, &k3, &v);
	string ans = (float)((int)((100.0 / (k1 * k2 * k3 * v)) * 100.0 + .5) / 100.0) < 9.58f ? "YES" : "NO";
	cout << ans << "\n";
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc = 1;
    scanf("%d", &tc);
    while(tc--) {
        solve();
    }
}