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
vector<long long int>bhams(n);
vector<long long int>bhams2;
for(int i=0;i<n;i++)
{
cin>>bhams[i];
bhams2.push_back(2*bhams[i]);
}
long long int ans =0;
for(int i=0;i<n;i++)
{
ans = ans ^ bhams2[i];
}
cout<<ans<<endl;
}
return 0;
}
