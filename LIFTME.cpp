
// Problem : Lift Requests
// Contest : CodeChef - April Cook-Off 2020 Division 2
// URL : https://www.codechef.com/COOK117B/problems/LIFTME
// Memory Limit : 256 MB
// Time Limit : 1000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n,q;
	cin>>n>>q;
	long long int dist=0;
	int last=0;
	for(int i=0;i<q;i++){
		int f,d;
		cin>>f>>d;
		dist+=abs(f-last);
		dist+=abs(d-f);
		last=d;
		
	}
	cout<<dist<<endl;
}


int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}
