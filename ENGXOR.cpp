#include<stdio.h>
#include<iostream>

using namespace std;

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
  cin>>t;
  for(int test=1;test<=t;test++)
  {


    cin>>n>>q;

    for(int i=0;i<n;i++)
    {
      cin>>a[i];
    }

    for(int i=1;i<=q;i++)
    {
      e=0;
      o=0;
      cin>>p;
      for(int j=0;j<n;j++)
      {
        if(binary(p^a[j])%2==0)
          e++;
        else
          o++;
      }
      cout<<e<<' '<<o<<endl;

    }

  }
  return 0;
}
