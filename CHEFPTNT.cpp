#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
for(int test=0;test<t;test++)
{
int n,m,x,k;
cin>>n>>m>>x>>k;
long long even=0,odd=0;
char s;
for(int i=0;i<k;i++)
{
cin>>s;
if(s=='E') {even++;}
if(s=='O'){odd++;}
}
long long bhams =1;
for(bhams=1;bhams<m+1;bhams++)
{
if(bhams%2!=0)
{
if(odd>=x){n-=x; odd-=x;}
else if(odd<x){n-=odd; odd=0;}
}
if(bhams%2==0)
{
if(even>=x){n-=x;even-=x;}
else if(even<x){n-=even; even=0;}
}
if(n<=0){cout<<"yes"<<endl; break;}
}
if(n>0) {cout<<"no"<<endl;}
}
return 0;
}
