#include<stdio.h>
#include<iostream>

using namespace std;

int binary(int n)
{
  if(n==0)
  {
    return 1;
  }
  else{
    return 1+ binary(n & (n-1));
  }
}



int main()
{
  int n,q,t,p,e=0,o=0;
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

      cin>>p;
      for(int j=0;j<n;j++)
      {
        if(binary(p^a[j])%2==0)
          e++;
        else
          o++;
      }
      cout<<o<<' '<<e<<endl;
      e=0;
      o=0;

    }

  }
  return 0;
}
