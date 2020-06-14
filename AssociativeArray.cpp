#include<bits/stdc++.h>
using namespace std; 
#define ll long long int 



int main()
{
	ll q;
	map<ll,ll>a;
	cin>>q;
	while(q--)
	{
		ll opt;
		ll x;
		cin>>opt>>x;
		if(opt==0)
		{
			cin>>a[x];
		}
		else
		{
			if(a.count(x))cout<<a[x]<<endl;
			else cout<<"0"<<endl;
		}
	}
	
}
