#include<stdio.h>
#include<iostream>

using namespace std;

int main()
{
	int t=0;
	cin>>t;
	for(int test=1;test<=t;test++)
	{
		int n=0;
		cin>>n;
		int map[n][n];
		char c;
		for (int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				cin>>c;
				if (c=='1')
					map[i][j]=1;
				else if(c=='0')
					map[i][j]=0;
			}
		}

		int counter=0;
		int subcounter=0;
		int tracker=1;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n-i;j++)
			{
				subcounter=0;
				for(int k=0;k<j;k++)
				{
					if (map[k][k]==1)
						subcounter++;
				}
				if (subcounter==tracker)
					counter++;

			}
			tracker++;
		}
		cout<<(counter+n)<<endl;
}
}
