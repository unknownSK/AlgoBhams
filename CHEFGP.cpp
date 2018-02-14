#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
for(int q=0;q<t;q++)
{
string s;
int x,y;
cin>>s;
cin>>x>>y;
 
string a="",b="";
for(int v=0;v<s.size();v++)
{
if(s[v]=='a')a.append(1u,s[v]);
else b.append(1u,s[v]);
}
int k = a.size();
int l =b.size();
int i=0,j=0;
 
for(;;)
{
if(k>=l && i<x || j==y)
{
j=0;
if(k>0)
cout<<"a";
i++;
k--;
if(k==-1)
{
cout<<"*";
k++;
}
}
else if(k<l && j<y || i==x)
{
i=0;
if(l>0)
cout<<"b";
j++;
l--;
if(l==-1)
{
cout<<"*";
l++;
}
}
if(k==0 && l==0)
break;
 
}
 
cout<<endl;
}
return 0;
}