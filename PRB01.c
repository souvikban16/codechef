#include<stdio.h>

int primecheck(int n)
{
	if(n<=1)
	{
		return 0;
	}
	else if(n==2||n==3)
	{
		return 1;
	}
	else if(n%2==0 || n%3==0)
	{
		return 0;
	}
	for(int i=5;i*i<n;i+=6)
	{
		if(n%i==0||n%(2+i)==0)
		{
			return 0;
		}
	}
	return 1;
}

int main()
{
	int t;
	scanf("%d",&t);
	for(int test=1;test<=t;test++)
	{
		int n;
		scanf("%d",&n);
		if(primecheck(n))
		{
			printf("yes\n");
		}
		else
		{
			printf("no\n");
		}
	}
	return 0;
}
