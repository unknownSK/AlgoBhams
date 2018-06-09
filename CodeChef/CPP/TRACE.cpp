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
int bhams[n][n];
for(int i=0;i<n;i++)
{
for(int j=0;j<n;j++)
{
cin>>bhams[i][j];
}
}
int sum = INT_MIN;
for(int i=0;i<n;i++)
{
for(int j=0;j<n;j++)
{
int sumb=0;
int k=i,l=j;
while(k<n && l<n)
{
sumb+=bhams[k][l];
k++;
l++;
}
if(sumb>sum) { sum = sumb; }
}
}
cout<<sum<<endl;
}
return 0;
}
