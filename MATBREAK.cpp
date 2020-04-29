
// Problem : Matrix Decomposition
// Contest : CodeChef - April Cook-Off 2020 Division 2
// URL : https://www.codechef.com/COOK117B/problems/MATBREAK
// Memory Limit : 256 MB
// Time Limit : 1000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

#include<bits/stdc++.h>
#include<math.h>
using namespace std;
const unsigned long long m=1e9+7;
unsigned long long  power(unsigned long long x, unsigned long long  y) 
{ 
    unsigned long long  temp; 
    if( y == 0) 
        return 1; 
    temp = power(x, y/2); 
    if (y%2 == 0) 
        return (temp*temp)%m; 
    else
        return (((x*temp)%m)*temp)%m; 
} 
void solve(){
	int n,a;
	cin>>n>>a;
	int base=1;
	//const long long  m=1e9+7;
	unsigned long long ans=0;
	unsigned long long p=0;
	for (int i=1;i<=n;i++){
		base=2*i-1;
		p=power(a,base);
		a=(a*p)%m;
		ans=(ans+p)%m;
	}
	cout<<ans%m<<endl;
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
