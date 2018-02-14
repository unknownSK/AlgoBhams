#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
for(int i=0;i<t;i++)
{
string s;
cin>>s;
int count =0;
for(int i=0;i<s.size()-1;i++)
{
if(s[i]!=s[(i+1)]) count++;
}
if(s[s.size()-1]!=s[0]) count++;
if(count<3) cout<<"uniform"<<endl;
else cout<<"non uniform"<<endl;
}
return 0;
}
