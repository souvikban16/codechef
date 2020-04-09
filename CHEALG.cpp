#include<bits/stdc++.h>
using namespace std;

void solve()
{
  //~ int n;
  char s[1000];
  scanf("%s",s);
  printf("%s\n",s);
  int counter=0;
  int ol=0;
  for(ol;s[ol]!='\0';ol++);
  int freq=1;
  for(int i=0;i<ol;i++)
  {
	  if(s[i]==s[i+1])
	  {
		  cout<<s[i]<<endl;
		  freq++;
		  continue;
	  }
	  else
	  {
		  counter+=freq+1;
		  freq=1;
	  }
  }
  cout<<ol<<" "<<counter<<endl;
}

int main()
{
  ios_base::sync_with_stdio(false);
  cout.tie(NULL);
  cin.tie(NULL);
  int t;
  cin>>t;
  while(t--){
    solve();  
  }
  
  return 0;
}

