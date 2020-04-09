#include<bits/stdc++.h>
using namespace std;

void solve()
{
	int n;
	cin>>n;
	int arr[50000];
	if(n==1)
	{
		cin>>arr[0];
		cout<<arr[0]<<"\n";
		return;
	}
	else
	{
			for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int min=arr[0];
	for(int j=0;j<n;j++)
	{
		if(min>arr[j])
		{
			min=arr[j];
		}
	}
	//~ cout<<"minimum="<<min<<endl<<"\n";
	cout<<min*(n-1)<<"\n";
}
}
	
		
	

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
		solve();
	}
	return 0;
}

	
