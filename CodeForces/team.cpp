#include <bits/stdc++.h>
using namespace std;

#define ar array
#define ll long long

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc, ans = 0;
    scanf("%d", &tc);
    for (int t = 1; t <= tc; t++) {
		int a, b, c;
		scanf("%d%d%d", &a, &b, &c);
		if(a+b+c >= 2) ++ans;
    }
	printf("%d", ans);
}