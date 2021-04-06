#include <bits/stdc++.h>
using namespace std;

#define ar array
#define ll long long

/*
2,2 = 2
4,4 = 8
6,6 = 18

3,4 = 6
4,3 = 6

3,2+1 = 3 + 1
3,3 = 4
5,5	= 12	
3,7
*/

int rect(float m, float n){
	if(fmod(m,2) != 0){
		return ceil(n/2)*m;
	} 
	return ceil(m/2)*n;
}

void solve() {
	float w, h;
	cin >> w >> h;
	for(int i = 0; i <= w; i+=2){
		for()
	}
	// if (fmod(w,2) == 0 || fmod(h,2) == 0){
// 		cout << (w/2)*h;
// 	}
// 	else {
// 		if (fmod(w,2) != 0 && fmod(h,2) != 0){
// 			cout << rect(w-1, h) + ;
// 		}
// 		else if (fmod(w,2) != 0){
// 			cout << ceil(h/2)*w;
// 		}
// 		else if (fmod(h,2) != 0){
// 			cout << ceil(w/2)*h;
// 		}
// 	}
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