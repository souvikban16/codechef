	#include "bits/stdc++.h"
	using namespace std;

	void solve() {
		int k,x;
		cin>>x>>k;
		int counter=0;
		while(x%2==0){
			x=x/2;
			counter++;
		}
		for(int i=3;i*i<=x;i+=2){
			while(x%i==0){
				counter++;
				x=x/i;
			}
		}
		//~ cout<<counter<<endl;
		if(x>1) counter++;
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
