
#include <bits/stdc++.h>
#include <vector>
using namespace std;
bool isprime(int n){
	if(n<=1) return false;
	if(n==2 || n==3) return true;
	if(n%2==0 || n%3==0) return false;
	for(int i=5;i*i<n;i+=6){
		if(n%i==0 || n%(i+2)==0){
			return false;
		}
	}
	return true;
}

void solve() {
	int n;
	cin>>n;
	n=n+1;
	std::vector<vector<int>> v(n,{1});
	int flag[n];
	memset(flag,0,sizeof(flag));
	//v[0].push_back(1);
	int total=0;
	int counter=1;
	for(int i=2;i<n;i++){
		if(flag[i]==0){
			total++;
			counter=0;
			for(int j=i;j<n;j+=i){
				//cout<<j<<" ";
				if(flag[j]==0){
					flag[j]=1;
					v[counter].push_back(j);	
				//cout<<j<<endl;
				counter++;
			}
			}
			//cout<<endl;
			//total++;
		}
	}
	if(!isprime(n-1)){
		v.push_back({n-1});
		total++;
	}
	
	cout<<total-1<<endl;
	for(int i=0;i<total;i++){
		for(auto j:v[i]){
			cout<<j<<" ";
		}
		cout<<endl;
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
