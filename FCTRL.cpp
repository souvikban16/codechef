#include "bits/stdc++.h"
using namespace std;

void solve() {
	int n;
	cin>>n;
	int temp=5;
	int ans=0;
	while(n/temp!=0){
		ans=ans+(n/temp);
		//cout<<n/temp<<endl;
		temp*=5;
		
	}
	
	cout<<ans<<endl;
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

