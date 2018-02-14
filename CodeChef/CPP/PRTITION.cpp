#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
int test;
cin>>test;
while(test--)
{
ll x,n;
cin>>x>>n;
ll sum = (n*(n+1))/2 -x;
if(sum%2==1||n==2||n==3)
{
cout<<"impossible"<<endl;
continue;
}
sum/=2;
char arr[1000000];
for(int i=1;i<=n;i++)
{
arr[i]='0';
}
ll n1 =n;
arr[x]='2';
while(sum>0&&n1>0)
{
if(n1<=sum&&sum-n1!=x&&n1!=x) {sum-=n1; arr[n1]='1';}
n1--;
}
ll x1 = x;
if(sum!=0)
{ cout<<"impossible"<<endl; continue;}
arr[x]='2';
for(int i=1;i<=n;i++)
{
cout<<arr[i];
}
cout<<endl;
}
return 0;
}
