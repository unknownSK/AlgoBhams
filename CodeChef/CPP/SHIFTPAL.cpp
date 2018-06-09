#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
for(int test=0;test<t;test++)
{
string s;
cin>>s;
vector<char>k;
fo(int i=0;i<s.size()z)

int count=0;
int spp = s.length();
if(spp==1)
{
cout<<0<<endl;
}
else
{
for(int k=0;k<spp;k++)
{
char bhams[spp];
for(int i=0;i<spp;i++)
{
bhams[i] = s[(i+k)%spp];
}
string kp(bhams);
string mp = kp;
reverse(mp.begin(),mp.end());
if(mp==kp){count++;}
}
cout<<count<<endl;
}
}
return 0;
}
