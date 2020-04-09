	#include "bits/stdc++.h"
	using namespace std;

	void solve() {
		
		int x,k;
		int counter=0;
		cin>>x>>k;
		for(int i=2;i<=x;i++){
			if(x%i==0){
				counter++;
			}
		}
		if(counter>=k){
			cout<<1<<endl;
		}
		else{
			cout<<0<<endl;
		}
	}


	int main()
	{
		ios_base::sync_with_stdio(false);
		cout.tie(NULL);
		cin.tie(NULL);
		int t;
		cin >> t;
		while (t--) {
			solve();
		}
		return 0;

	}
