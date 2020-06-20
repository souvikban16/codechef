	
	// Problem : Triple Sort
	// Contest : CodeChef - May Challenge 2020 Division 2
	// URL : https://www.codechef.com/MAY20B/problems/TRPLSRT
	// Memory Limit : 256 MB
	// Time Limit : 1000 ms
	// Powered by CP Editor (https://github.com/cpeditor/cpeditor)
	
	#include<bits/stdc++.h>
	#include<vector>
	#include<string>
	using namespace std;
	
	void solve(){
		int n;
		int k;
		cin >> n >>k;
		int arr[n];
		int temp[n];
		for(int i = 0; i < n;i++ ){
			cin >> arr[i];
			temp[i] =arr[i];
		}
		sort(temp,temp+n);
		
		vector<int> unsorted;
		vector<vector<int>> ans;
		for(int i =0; i<n;i++){
			for(int j = 0; j<n;j++ ){
				if(temp[j]!=arr[j] ){
					unsorted.push_back(j);
					//cout << j <<endl;
					//this vector has the index;
				}
			}
			if(unsorted.size() < 3  ){
				break;
			}
			else{
				int a = unsorted[0];
				int c = *(unsorted.end() -1);
				unsorted.pop_back();
				int b =*(unsorted.end() - 1);
				unsorted.pop_back();
				//cout << arr[a] <<arr[b] <<arr[c]<<endl;
				//swapping ;
				int temp = arr[b];
				arr[b] = arr[a];
				int temp2 = arr[c];
				arr[c] = temp;
				arr[a] = temp2;
				//cout << arr[a] <<arr[b] <<arr[c]<<endl;				
				
				unsorted.clear();
				ans.push_back({arr[a],arr[b],arr[c]});
				//cout << arr[a] <<" "<< arr[b] <<" "<<arr[c]<<endl;
			}
		}
		
		int flag = 1;
		
		for(int i =0; i<n;i++){
			if(arr[i]!=temp[i]){
				flag = 0;
				break;
			}
		}
		if(flag == 1 && k >=ans.size()){
			//cout <<"correct"<<endl;
			//for(int i =0;i<n ;i++){
			//	cout << arr[i]<<endl;
			//}
			//printing actual answers:
			int counter = 0;
			cout<<ans.size()<<"\n";
			for(int i = 0; i < ans.size(); i++){
				cout << ans[i][0]<<" "<<ans[i][1]<<" "<<ans[i][2]<<"\n";
			}
		}
		else{
			cout << -1 <<endl;
		}
			for(int i =0;i<n ;i++){
				cout << arr[i]<<endl;
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
	