#include "bits/stdc++.h"
using namespace std;



void solve() {
	string s;
	cin >> s;
	int l;
	for (l = 0; s[l] != '\0'; l++);
	//cout<<l<<endl;
	int m = l / 2;
	char left[m];
	char right[m];
	for (int i = 0; i < m; i++) {
		left[i] = s[i];
		//cout<<left[i]<<endl;
	}
	if (l % 2 != 0) {
		for (int j = m + 1; j < l; j++) {
			right[j] = s[j];
			//cout<<right[j]<<endl;
		}
	}
	else {
		for (int j = m; j < l; j++) {
			right[j] = s[j];
			//cout<<right[j]<<endl;
		}

	}
	int flag = 0;
	char now;
	for (int i = 0; i < m; i++) {
		int lcount = 0;
		now = left[i];
		for (int j = 0; j < m; j++) {
			if (now == left[j]) {
				lcount++;
			}
		}
		int rcount = 0;
		if (l % 2 != 0) {
			for (int j = m + 1; j < l; j++) {
				if (now == right[j]) {
					rcount++;
				}
			}
		}
		else {
			for (int j = m; j < l; j++) {
				if (now == right[j]) {
					rcount++;
				}
			}

		}
		//cout<<lcount<<" "<<rcount<<endl;
		if (lcount == rcount) {
			flag = 1;
		}
		else {
			flag = 0;
			break;
		}
	}
	//cout<<flag<<endl;
	if (flag == 1) {
		cout << "YES" << endl;
	}
	else {
		cout << "NO" << endl;
	}



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
