#include<bits/stdc++.h>
using namespace std;
int main ()
{
int n,m;
cin>>m;
for(int k=0;k<m;k++)
{
cin>>n;
for(int i=0;i<n-1;i++)
{
if(i<n-92681)
cout<<1<<" ";
else
cout<<i+92682-n<<" ";}
cout<<92681-(n-92681);
cout<<endl;
}
return 0;
}
 