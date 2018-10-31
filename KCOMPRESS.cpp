#include<bits/stdc++.h>
using namespace std;
int bsdk(vector<long long >v,bool vis[],long long n){
	for(int i=0;i<v.size();i++){
		if(v[i]==n&&!vis[i]){
			vis[i]=1;
			return i;
		}
	}
}
long long int bc(vector<long long int>bhams,long long int s)
{
    vector<long long int> v=bhams;long long int n=v.size();
    vector < pair < int ,int > > v1;
    for(int i=0;i<v.size();i++)
    v1.push_back({v[i],i});
    sort(v1.begin(),v1.end());
    for(int i=0;i<v.size();i++)
    {

        long long int z=v1[v[i]].second;set<int> s1;
        for(long long int j=max(0LL,z-s);j<=min(n-1,z+s);j++)
        {
            if(z!=j&&v[j]<=v[z])
                s1.insert(v[j]);
        }
        v[z]=s1.size()+1;
    }
    long long ans=0;
    for(int i=0;i<v.size();i++)ans+=v[i];
    return ans;
}


int main()
{
    int t;
    cin>>t;
    for(int test=0; test<t; test++)
    {
        long long int n,s,h=0,finalcountm=0;
        cin>>n>>s;
        vector<long long int>bhams(n);
        for(int i=0; i<n; i++)
        {
            cin>>bhams[i];
        }
        long long int ans =0,c;
        for(int i=0;i<n;i++)
        {
            c = bc(bhams,i);
           // cout<<"c "<<c<<" k "<<i<<endl;
            if(c<=s)
            {
                ans++;
            }
        }
       // cout<<endl;
        cout<<ans<<endl;
    }
    return 0;
}
