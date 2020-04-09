#include<stdio.h>
int max(int a,int b)
{
	if(a>b)
	{
		return a;
	}
	else
	{
		return b;
	}
}

void solve()
{
	int n;
	scanf("%d",&n);
	int arr[25000];
	int s[1000];
	for(int i=0;i<n;i++)
	{
		int l=scanf("%[^\n]%*c",s);
		arr[i]=(int)(s[l-1]);
	}
	for(int i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	int zeroes=0;
	int ones=0;
	for(int i=0;i<n;i++)
	{
		if(arr[i]==0)
		{
			zeroes++;
		}
		else
		{
			ones++;
		}
	}
	if(max(ones,zeroes)%2==0)
	{
		printf("%d",max(ones,zeroes));
	}
	else
	{
		printf("%d",max(ones,zeroes)+1);
	}
}
int main()
{
	int t=0;
	scanf("%d",&t);
	while(t--)
	{
		solve();
	}
	return 0;
}
