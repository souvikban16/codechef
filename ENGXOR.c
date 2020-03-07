#include<stdio.h>





int binary(int x)
{
  if (x==1)
  {
    return 1;
  }
  else
  {
    return x%2 + binary(x/2);
  }
}


int main()
{
  int n,q,t,p,e,o;
  int a[100000];
  scanf("%d",&t);
  for(int test=1;test<=t;test++)
  {

    scanf("%d %d",&n,&q);

    for(int i=0;i<n;i++)
    {
      scanf("%d",&a[i]);
    }

    for(int i=1;i<=q;i++)
    {
      e=0;
      o=0;
      scanf("%d",&p);
      for(int j=0;j<n;j++)
      {
        if(binary(p^a[j])%2==0)
          e++;
        else
          o++;
      }
      printf("%d %d",e,o);

    }

  }
  return 0;
}
