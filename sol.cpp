#include <bits/stdc++.h>

using namespace std;

const int mxN = 1e5;
int a[mxN];

bool checker(int x) {
	int cnt = 0;
	while(x != 0) {
		a[cnt] = x % 10;
		x /= 10;
		cnt++;
	}
	sort(a, a + cnt);
	for(int i = 0; i < cnt; ++i) {
		if(a[i] == a[i+1]) {
			return false;
		}
	}
	return true;
}
void decode() {
	int l, r;
	cin >> l >> r;
	bool ok = false;
	for(int i = l; i <= r; ++i) {
		if(checker(i)) {
			cout << i << " ";
			ok = true;
			break;
		}	
	}
	if(!ok) cout << -1;
	cout << "\n";
}	
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	decode();
	return 0;
}
