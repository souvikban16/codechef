#include "bits/stdc++.h"
using namespace std;


void solve() {
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int counter=1;
	for(int i=1;i<n;i++){
		if(arr[i]>arr[i-1]){
			arr[i]=arr[i-1];
			continue;
		}
		counter++;
	}
	cout<<counter<<endl;

}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;

}