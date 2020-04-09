
#include<bits/stdc++.h>
using namespace std;

void solve()
{
  int a,b;
  cin>>a>>b;
  int a1,a2,b1,b2;
  
  //a1 a2
  //b1 b2
  a1=a/10;a2=a%10;
  b1=b/10;b2=b%10;
  //~ cout<<a1<<" "<<a2<<endl;
  //~ cout<<b1<<" "<<b2<<endl;
  if(a1==a2 && b1==b2){
      cout<<a+b<<endl;
  }
  else if(a1==0 && b1==0){
	  cout<<a+b<<endl;
  }
  else{
	  if(a1==b1){
		  int m=max(a2,b2);
		  int n=min(a2,b2);
		  int sum=(m*10+n)+a1*10+b1;		  
		  cout<<max(sum,a+b)<<endl;
	  }
		  
	  else if(a1==0){
		  if(a2>b1){
			  cout<<(a2*10+b2+b1)<<endl;
		  }
		  else{
			  cout<<(a+b)<<endl;
		  }
	  }
	  else if(b1==0){
		  if(b2>a1){
			  cout<<(b2*10+a1+a2)<<endl;
		  }
		  else{
			  cout<<a+b<<endl;
		  }
	  }
	  else{
		  if(b2>a1){
			  cout<<(b2*10+a2)+(b1*10+a1)<<endl;
		  }
		  else if(a2>b1){
			  cout<<(a2*10+b2)+(a1*10+b1)<<endl;
		  }
		  else{
			  cout<<a+b<<endl;
		  }
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


