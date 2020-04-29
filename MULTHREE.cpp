
// Problem : Multiple of 3
// Contest : CodeChef - DSA Learning Series - Contest 1
// URL : https://www.codechef.com/LRNDSA01/problems/MULTHREE
// Memory Limit : 256 MB
// Time Limit : 1000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

#include<bits/stdc++.h>
using namespace std;

void solve(){
	long long k;
	long long  d0,d1;
	cin>>k>>d0>>d1;
	long long c=d0+d1;
	long long s=((2*c)%10)+((4*c)%10)+((8*c)%10)+((6*c)%10);
	long long total=0;
	long long p=(k-3)/4;
	if(k==2){
		total=c;
	}
	else{
		total=c+c%10+(s*1LL*p);
		int remaining=(k-3)-4*p;
		int power=2;
		for(int i=1;i<=remaining;i++){
			total+=(power*c)%10;
			power=(power*2)%10;
		}
	}
	if(total%3==0){
		cout<<"YES"<<endl;
	}
	else{
		cout<<"NO"<<endl;
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
