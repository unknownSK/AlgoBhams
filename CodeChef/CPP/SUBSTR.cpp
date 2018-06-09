#include<bits/stdc++.h>
using namespace std;

vector<string>danzer(string s)
{
int len = s.size();
vector<string>bhams;
for(int i=0;i<len;i++)
{
for(int j=1;j<=len-i;j++)
{
bhams.push_back(s.substr(i,j));
}
}
return bhams;
}

int main()
{
int t;
cin>>t;
for(int test=0;test<t;test++)
{
string s;
int k;
int kont =0;
cin>>s>>k;
vector<string>b = danzer(s);
for(int i=0;i<b.size();i++)
{
vector<int>bh(26); int co=0;
for(int j=0;j<b[i].size();j++)
{

bh[(int)b[i][j]-97]++;
}
int flag =0;
set<int>check;
for(int j=0;j<26;j++)
{
if(bh[j]!=0)
{
co++;
check.insert(bh[j]);
}
}
if(co>=k && check.size()==1)
{ kont++;}
}
cout<<kont<<endl;
}
return 0;
}
