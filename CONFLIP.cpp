#include<bits/stdc++.h>
using namespace std;
void solve(){
	int g;
	cin>>g;
	while(g--){
		int i,n,q;
		cin>>i>>n>>q;
		if(n%2==0){
			cout<<n/2<<endl;
		}
		else{
			if(q==i){
				cout<<n/2<<endl;
			}
			else{
				cout<<n/2+1<<endl;
			}
		}
	}
	
}

int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
}
