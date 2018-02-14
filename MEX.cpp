#include<bits/stdc++.h>
using namespace std;
int main ()
{
int t;
cin>>t;
for(int m=0;m<t;m++)
{
int n,k;
cin>>n>>k;
vector <int> arr(n);
for(int i=0;i<n;i++)
cin>>arr[i];
sort(arr.begin(),arr.begin()+n);
arr.erase( unique( arr.begin(), arr.end() ), arr.end() );
n=arr.size();
int u=0,v=0;
while(k>-1)
{
if(arr[v]==u) { if(v<n) { v++; } }
else { k--; }
u++;
}
cout<<u-1<<endl;
}
return 0;
}