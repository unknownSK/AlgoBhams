#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
for(int l=0;l<t;l++)
{
vector<int>bhams;
vector<int>cop;
for(int i=0;i<4;i++)
{
int  d;
cin>>d;
bhams.push_back(d);
cop.push_back(d);
}
sort(cop.begin(),cop.end());
cop.erase(unique(cop.begin(),cop.end()),cop.end());
vector<int>cnt(cop.size());
for(int i=0;i<cop.size();i++)
{
cnt[i]=count(bhams.begin(),bhams.end(),cop[i]);
//cout<<cop[i]<<" "<<cnt[i]<<endl;
}
//cout<<endl;
if(cop.size()>2) cout<<"NO"<<endl;
else if (cnt[0]==4) cout<<"YES"<<endl;
else if (cnt[0]>2||cnt[1]>2) cout<<"NO"<<endl;
else cout<<"YES"<<endl;
}
return 0;
}
