
// Problem : Coronavirus Spread
// Contest : CodeChef - May Challenge 2020 Division 2
// URL : https://www.codechef.com/MAY20B/problems/COVID19
// Memory Limit : 256 MB
// Time Limit : 1000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

#include<bits/stdc++.h>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

void solve(){
	int n;
	cin >> n;
	int arr[n];
	
	for(int i=0; i<n;i++){
		cin>>arr[i];
	}
	
	int zeroes,ones;
	zeroes = 0;
	ones = 0;
	int diff[n];
	for(int i=0 ; i < n-1 ;i++){
		int temp =arr[i+1] -arr[i];
		if(temp <=2){
			ones++;
			diff[i]=1;
		}
		else{
			zeroes ++;
			diff[i] =0;
		}
 	}
 	diff[n-1] = 0;
 	
 	if(zeroes == 0){
 		cout << n <<" " << n <<endl;
 	}
 	else if(ones == 0){
 		cout << 1 <<" " << 1 <<endl;
 	}
 	else{
 		int max = INT_MIN;
 		int min = INT_MAX;
 		vector<int> dist;
 		vector<int>::iterator itr;
 		int count = 1;
 		for(int i = 0;i<n;i++){
 			if(diff[i] == 0){
 				if(count != 0)	dist.push_back(count);
 			count =1;
 			}
 			else{
 				count ++;
 			}

 		}

		
 		sort(dist.begin(),dist.end());
 		cout<< *(dist.begin())   <<" "<< *(dist.end() - 1)  <<endl;
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
