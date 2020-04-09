#include <bits/stdc++.h>

using namespace std;

void solve()
{
	int r,c;
	cin>>r>>c;
	if(r==1 && c==1)
	{
		cout<<"23"<<endl;
		cout<<"3 3\n2 4\n1 3\n3 1\n5 3\n2 6\n1 5\n5 1\n7 3\n2 8\n1 7\n7 1\n8 2\n7 3\n8 4\n4 8\n3 7\n6 4\n8 6\n6 8\n5 7\n6 6\n8 8\n"<<endl;
	}
	else
	{
		int j=(r+c)/2;
		cout<<"25"<<endl;
		cout<<j<<" "<<j<<"\n1 1\n3 3\n2 4\n1 3\n3 1\n5 3\n2 6\n1 5\n5 1\n7 3\n2 8\n1 7\n7 1\n8 2\n7 3\n8 4\n4 8\n3 7\n6 4\n8 6\n6 8\n5 7\n6 6\n8 8\n"<<endl;
}
}

int main()
{
  int t;

  cin>>t;
  while(t--)
  {
	  solve();
  }
  return 0;
}

