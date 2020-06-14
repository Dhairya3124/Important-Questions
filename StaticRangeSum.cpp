#include<bits/stdc++.h>
using namespace std; 
#define ll long long int 
int main()
{
	ll n,q;
	cin>>n>>q;
	 vector<ll>arr(n);
	for(ll i=0;i<n;i++)cin>>arr[i];
	partial_sum(arr.begin(),arr.end(),arr.begin());
	
	while(q--)
	{
		ll l,r;
		cin>>l>>r;
		if(l==0)cout<<arr[r-1]<<endl;
		else cout<<arr[r-1]-arr[l-1]<<endl;
		
	}
	
}
