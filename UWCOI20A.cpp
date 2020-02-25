#include <stdio.h>

#include<iostream>

using namespace std;

int main()
{
	int t=0;
	cin>>t;
	for (int test=1;test<=t;t++)
	{
		int n=0;
		cin>>n;
		int arr[n];
		int max=0;
		for (int i=0;i<n;i++)
		{
			cin>>arr[i];
			if (max<arr[i])
				max=arr[i];

		}
		cout<<max<<endl;



	}
	return 0;

}