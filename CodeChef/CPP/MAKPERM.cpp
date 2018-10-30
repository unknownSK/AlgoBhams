#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
	// your code goes here
	int t; cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		set<ll>bhams;
		for(int i=0;i<n;i++)
		{
			ll hh;
			cin>>hh;
			bhams.insert(hh);
		}
		set<ll>::iterator it;
		ll countm=0;
		ll ans = n - bhams.size();
		for(it=bhams.begin();it!=bhams.end();it++)
		{
			if(*it>n) countm++;
		}
		cout<<ans+countm<<endl;
	}
	return 0;
}
