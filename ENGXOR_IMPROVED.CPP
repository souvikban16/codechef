#include<bits/stdc++.h>

using namespace std;


int main()
{
	ios_base::sync_with_stdio(false);
	//~ cin.tie(NULL);
	int t,n,q;
	cin>>t;
	while(t--)
	{
		cin>>n>>q;
		int input;
		int even=0,odd=0;
		for(int i=0;i<n;i++)
		{
			cin>>input;
			if(__builtin_popcount(input)%2==0)
			{
				even++;
				
			}
			else
			{
				odd++;
			}
		}
		
		//~ for(int i=0;i<n;i++)
		//~ {
			//~ cout<<setcount(a[i])<<"\n";
			//~ if(__builtin_popcount(a[i])%2==0)
			//~ {
				//~ even++;
			//~ }
			//~ else
			//~ {
				//~ odd++;
			//~ }
		//~ }
		for(int i=1;i<=q;i++)
		{
			cin>>input;
			//~ cout<<setcount(input)<<endl;
			if(__builtin_popcount(input)%2==0)
			{
				cout<<even<<" "<<odd<<"\n";
			}
			else
			{
				cout<<odd<<" "<<even<<"\n";
			}
	}
	
}
	return 0;
}

	
		
