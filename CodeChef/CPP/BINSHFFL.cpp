#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
for(int test=0;test<t;test++)
{
long long int a,b;
cin>>a>>b;
if(b==a)
{
cout<<0<<endl;
}
else if(b==0 ||(a!=0 && b==1))
cout<<-1<<endl;
else
{
b--;
int a1 = __builtin_popcountll(a);
int b1 = __builtin_popcountll(b);

if(a1>b1)
{
cout<<2<<endl;
}
else
{
cout<<(b1-a1)+1<<endl;
}
}
}
return 0;
}
