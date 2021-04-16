#include <bits/stdc++.h>
using namespace std;

#define ar array
#define ll long long
#define to_upper(a) transform((a).begin(), (a).end(), (a).begin(), ::toupper)
#define to_lower(a) transform((a).begin(), (a).end(), (a).begin(), ::tolower)

void solve() {
	int n, q;
	deque<int> cards;
	vector<int> queries;
	cin >> n >> q;
	while(n--){
		int a;
		cin >> a;
		cards.push_back(a);
	}
	while(q--){
		int a;
		cin >> a;
		queries.push_back(a);
	}
	for(auto it = queries.begin(); it != queries.end(); it++){
		auto cit = find(cards.begin(), cards.end(), *it);
		cout << (cit - cards.begin()) + 1 << " ";
		cards.push_front(*cit);
		cards.erase(cit);
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