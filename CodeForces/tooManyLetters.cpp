#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc;
    cin >> tc;
    for (int t = 1; t <= tc; t++) {
        // cout << "Case #" << t  << ": ";
		string a;
		cin >> a;
		if(a.length() <= 10){
			cout << a << "\n";
			continue;
		}
		cout << a[0] << a.length()-2 << a[a.length()-1] << "\n";
    }
}