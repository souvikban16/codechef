
#include <bits/stdc++.h>
using namespace std;
void solve() {
	int n;
	cin>>n;
	if(n<=2){
		cout<<1<<endl;
		cout<<n<<" ";
		for(int i=1;i<=n;i++){
			cout<<i;
		}
		cout<<endl;
	}
	else{
		cout<<n/2<<endl;
		cout<<"3 1 2 3"<<endl;
		for(int i=4;i<=n;i+=2){
			if(i!=n)
				cout<<"2 "<<i<<" "<<i+1<<endl;
			else{
				cout<<"1 "<<i<<endl;
			}
		}
		
	}
	
			
}


int main()
{
	ios_base::sync_with_stdio(false);
	//cout.tie(NULL);
	//cin.tie(NULL);
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;

}
