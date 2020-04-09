#include<bits/stdc++.h>

using namespace std;

int tricheck(int a,int b,int c)
{
	if(a+b+c==180)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	int t=0;
	cin>>t;
	for(int i=1;i<=t;i++)
	{
		int a,b,c;
		cin>>a>>b>>c;
		if(tricheck(a,b,c))
		{
			cout<<"YES"<<"\n";
		}
		else
		{
			cout<<"NO"<<"\n";
		}
	}
	return 0;
}

	
