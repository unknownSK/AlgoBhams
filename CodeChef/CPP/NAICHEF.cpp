#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
for(int test=0;test<t;test++)
{
int a,b,c;
cin>>a>>b>>c;
vector<int>bhams(a);
for(int i=0;i<a;i++)
{
cin>>bhams[i];
}
float res1 = count(bhams.begin(),bhams.end(),b);
//cout<<res1<<endl;
float res2 = count(bhams.begin(),bhams.end(),c);
//cout<<res2<<" "<<a<<endl;
//cout<<b/a<<" "<<c/a<<endl;
float res = (res1/(float)a)*(res2/(float)a);
printf("%.6f\n",res);
}
return 0;
}
