#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
for(int h=0;h<t;h++)
{
string s;
cin>>s;
int countm=0;
if(s.size()>3)
{
for(int i=0;i<s.size()-3;i++)
{
vector<char>bhams;
bhams.push_back(s[i]);
bhams.push_back(s[i+3]);
bhams.push_back(s[i+1]);
bhams.push_back(s[i+2]);
sort(bhams.begin(),bhams.end());
if(bhams[0]=='c'&&bhams[1]=='e'&&bhams[2]=='f'&&bhams[3]=='h')
{countm++; }
}
if(countm>0) {cout<<"lovely"<<" "<<countm<<endl;}
else cout<<"normal"<<endl;
}
else
cout<<"normal"<<endl;
}
return 0;
}
