
// Problem : Isolation Centers
// Contest : CodeChef - May Challenge 2020 Division 2
// URL : https://www.codechef.com/MAY20B/problems/CORUS
// Memory Limit : 256 MB
// Time Limit : 1000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

#include<bits/stdc++.h>
#include<vector>
#include<string>
using namespace std;

void solve(){
	int n;
	int q;
	cin >>n >>q;
	string s;
	cin >> s;
	int flag[n];
	unsigned long long ans = 0;
	long long current = 0;
	int unique=0;
	
	memset(flag, 0 , sizeof(flag));
	current = 0;
	vector<int> freq;
	//vector<int>::iterator;
	for(int j = 0; j<n;j++){
		//current = 0;
		
		if(flag[j] == 0){
			unique++;
			for(int k = j; k<n;k++){
				if(s[j]==s[k]){
					current++;
					flag[k]=1;
				}
			}
			freq.push_back(current);
			current =0;
		}
		
	}

	for(int i =0; i<q;i++){
		ans = 0;
		long long  temp = 0;
		cin >>temp;
		
		for(int i= 0; i < unique; i++){
			if(freq[i] > temp){
				ans+=freq[i] -temp;
			}
		}
		cout<< ans <<"\n";
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
