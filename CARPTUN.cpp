#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int test=0;test<t;test++)
	{
		int n;
		cin>>n;
		int N=n;
		vector<int>bhams;
		while(n>0)
		{
			int data;
			cin>>data;
			bhams.push_back(data);
			n--;
		}
		int c,d,s;
		cin>>c>>d>>s;
		sort(bhams.begin(),bhams.end());
		double result=(double)bhams[N-1]*(double)(c-1);
		printf("%.10lf\n",result);
	}
	return 0;
}
