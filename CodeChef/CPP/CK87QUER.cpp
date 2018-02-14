#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
for(int q=0;q<t;q++)
{
long long k;
long long countm =0;
cin>>k;
int b=1;
while(k-b>0&&b<701)
{
long long r = sqrt(k-b);
countm = countm + r;
b++;
}
cout<<countm<<endl;
}
return 0;
}
