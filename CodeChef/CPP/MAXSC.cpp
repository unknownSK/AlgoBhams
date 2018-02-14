#include<bits/stdc++.h>
using namespace std;
int main()
{
long long t;
cin>>t;
for(long long l=0;l<t;l++)
{
long long n;
cin>>n;
long long sum=0;
long long maxie =0;
vector<vector<long long> >bhams;
for(long long i=0;i<n;i++)
{
vector<long long>m;
for(long long j=0;j<n;j++)
{
long long data;
cin>>data;
m.push_back(data);
}
sort(m.begin(),m.end());
bhams.push_back(m);
}
for(int r = n-1;r>=0;r--)
{
if(r==n-1){
maxie = bhams[r][n-1];
sum+=maxie;
}
else{
vector<long long > v;
for(long long j=n-1;j>=0;j--)
{
if(bhams[r][j]<maxie)
v.push_back(bhams[r][j]);
}
if(v.size()==0) {sum=-1;break;}
else {maxie=*max_element(v.begin(),v.end()); sum+=maxie;}
}
}
cout<<sum<<endl;
}
return 0;
}
