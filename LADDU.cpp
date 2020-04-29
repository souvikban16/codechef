
// Problem : Laddu
// Contest : CodeChef - DSA Learning Series - Contest 1
// URL : https://www.codechef.com/LRNDSA01/problems/LADDU
// Memory Limit : 256 MB
// Time Limit : 1000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n;
	cin>>n;
	string origin;
	cin>>origin;
	long long total=0;
	for(int i=1;i<=n;i++){
		string temp;
		cin>>temp;
		if(temp=="CONTEST_WON"){
			int nn;
			cin>>nn;
			if(nn<20)
				total+=300+(20-nn);
			else total+=300;
		}
		else if(temp=="TOP_CONTRIBUTOR"){
			total+=300;
		}
		else if(temp=="BUG_FOUND"){
			int nn;
			cin>>nn;
			total+=nn;
		}
		else if(temp=="CONTEST_HOSTED"){
			total+=50;
		}
	}
	if(origin=="INDIAN"){
		cout<<total/200<<endl;
	}
	else{
		cout<<total/400<<endl;
	}
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
