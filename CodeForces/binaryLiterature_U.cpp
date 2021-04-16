#include <bits/stdc++.h>
using namespace std;

#define ar array
#define ll long long
#define to_upper(a) transform((a).begin(), (a).end(), (a).begin(), ::toupper)
#define to_lower(a) transform((a).begin(), (a).end(), (a).begin(), ::tolower)

void solve() {
    int n;
    string s = "";
    cin >> n;
    int max_char = 3*n;

    int o = 0, z = 0;

    for(int i = 0; i < 3; i++){
        string a;
        cin >> a;
        // s += a;
        o = o > count(a.begin(), a.end(), '1') ? o : count(a.begin(), a.end(), '1');
        z = z > count(a.begin(), a.end(), '0') ? z : count(a.begin(), a.end(), '0');
    }

    while((int)s.size() <= max_char and o and z){
        s += "01";
        o--;
        z--;
    }

    if((int)s.size() < max_char){
        while((int)s.size() != max_char+1){
            s += o <= z ? '0' : '1';
        }
    }
    
    if((int)s.size() >= max_char){
        s.resize((int)s.size() - 2);
        s += o <= z ? '0' : '1';
    } else {
        s += o <= z ? '0' : '1';
    }

    cout << s << "\n";
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