#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		ll n,k;
		cin>>n>>k;
		vector<ll>bhams(n);
		for(int i=0;i<n;i++)
		{
			cin>>bhams[i];
		}
		string s="";
		for(int i=0;i<n;i++)
		{
			if(bhams[i]<=k)
			{
				s+="1";
				k-=bhams[i];
			}
			else
			{
				s+="0";
			}
		}
		cout<<s<<endl;
	}
	return 0;
}
