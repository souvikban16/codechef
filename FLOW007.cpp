#include "bits/stdc++.h"
using namespace std;



void solve() {
	int n;
	cin >> n;
	int res = 0;
	while (n != 0) {
		int w = n % 10;
		res = w + 10 * res;
		n = n / 10;
	}
	cout << res << endl;

}

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;

}
