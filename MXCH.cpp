#include<stdio.h>

void solve()
{
	int n,k;
	scanf("%d%d",&n,&k);
	//~ int arr[100000];
	int counter=1;
	while(k--)
	{
		//~ printf("k=%d",k);
		printf("%d ",counter++);
		
	}
	while(n>=counter)
	{
		printf("%d ",n--);
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
