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
vector<int>bhams(n);
for(int i=0;i<n;i++)
{
cin>>bhams[i];
}
int k=bhams[0];
for(int i=0;i<n;i++)
{
k=__gcd(k,bhams[i]);
}
if(k==1)
{
cout<<0<<endl;
}
else
{
cout<<-1<<endl;
}
}
return 0;
}
