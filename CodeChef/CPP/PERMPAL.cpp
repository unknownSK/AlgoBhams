#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
int countm=0;
for(int test=0;test<t;test++)
{
string s;
cin>>s;
vector<int>bhams[26];
int index;
for(int i=0;i<s.size();i++)
{
bhams[int(s[i])-97].push_back(i+1);
}
for(int i=0;i<26;i++)
{
if(bhams[i].size()%2!=0) {countm++; index = i;}
}
if(countm>1) {cout<<-1;}
else
{
for(int i=0;i<26;i++)
{

if(bhams[i].size()>0 && (bhams[i].size()%2)==0)
{
for(int j=0;j<bhams[i].size()/2;j++)
{
cout<<bhams[i][j]<<" ";
}
}
}
if(countm>0)
{ for(int i=0;i<bhams[index].size();i++)
{
cout<<bhams[index][i]<<" ";
} }
for(int i=25;i>=0;i--)
{
if(bhams[i].size()>0&&bhams[i].size()%2==0)
{
for(int j=bhams[i].size()-1;j>=bhams[i].size()/2;j--)
{
cout<<bhams[i][j]<<" ";
}
}
}
}
cout<<endl;
countm=0;
}

return 0;
}
