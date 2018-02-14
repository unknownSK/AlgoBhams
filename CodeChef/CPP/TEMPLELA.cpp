#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int q=0;q<t;q++)
	{
		int n;
		cin>>n;
		vector<int>bhams(n);
		for(int i=0;i<n;i++)
		{
			cin>>bhams[i];
		}
	if(n%2==0) cout<<"no"<<endl;
	else
	{
		if(bhams[0]!=1||bhams[n-1]!=1)
		{
			cout<<"no"<<endl;
			//cout<<bhams[n-1];
		}
		else
		{
			int cen = n/2;
			int countm =0;
			for(int i=0;i<cen;i++)
			{
				if((bhams[i+1]-bhams[i]!=1)||(bhams[i+cen+1]-bhams[i+cen]!=-1))
				{
					countm++;
					break;
				}
			}
			if(countm==0) cout<<"yes"<<endl;
			else cout<<"no"<<endl;
		}
	}
	}
	return 0;
}
