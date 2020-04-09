#include<bits/stdc++.h>
using namespace std;

void solve()
{
  int n,a,b,c,d,p,q,y;
  cin>>n>>a>>b>>c>>d>>p>>q>>y;
  int arr[n];
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  a=arr[a-1];

  b=arr[b-1];
  c=arr[c-1];
  d=arr[d-1];
  //~ cout<<a<<" "<<b<<" "<<c<<" "<<d;
  int walk=abs(a-b)*p;
  //~ cout<<walk<<endl;
  int temp=abs(c-a)*p;
  //~ cout<<temp<<endl;
  int train=abs(d-c)*q+abs(d-b)*p+y;

  if(walk<train)
  {
	  cout<<walk<<endl;
  }
  else
  {
	  if(temp<=y)
	  {
		  cout<<train<<endl;
	  }
	  else
	  {
		  cout<<walk<<endl;
	  }
  }
  
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin>>t;
  while(t--){
    solve();  
  }
  
  return 0;
}
