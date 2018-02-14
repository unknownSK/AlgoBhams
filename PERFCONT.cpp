#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
 
cin>>t;
for(int i=0;i<t;i++)
{
int count1=0,count2=0;
int n,p;
cin>>n>>p;
int arr[n];
for(int j=0;j<n;j++)
{
cin>>arr[j];
if(arr[j]<=p/10)
{
count2++;
}
else if(arr[j]>=p/2)
{
count1++;
}
}
if(count1==1&&count2==2)
cout<<"yes"<<endl;
else
cout<<"no"<<endl;
 
}
return 0;
}