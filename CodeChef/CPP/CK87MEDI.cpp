#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
for(int q =0;q<t;q++)
{
int n,k;
cin>>n>>k;
vector<int>bhams(n);
for(int i=0;i<n;i++)
cin>>bhams[i];
int z = *max_element(bhams.begin(),bhams.end());
for(int i=0;i<k;i++)
bhams.push_back(z+1);
sort(bhams.begin(),bhams.end());
//for(int i=0;i<bhams.size();i++)
cout<<bhams[bhams.size()/2]<<endl;
}


return 0;
}
