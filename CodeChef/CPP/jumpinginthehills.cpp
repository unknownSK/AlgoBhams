#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n,u,d;
		cin >> n >> u >> d;
		vector<int> h(n);
		for(int i=0;i<n;i++)
		cin >> h[i];
		int i=0,c=0;
		for(i=1;i<n;i++)
		{ 
		  if(h[i]-h[i-1]>u)
		  break;
		  else if(h[i-1]-h[i]>d&&c!=0)
		  break;
		  else if(h[i-1]-h[i]>d)
		  c++;	
		}
		cout << i << endl;
	}
	return 0;
}
