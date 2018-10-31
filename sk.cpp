#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define lld long double
bool func2(pair<ll,ll> p1,pair<ll,ll> p2){
    if(p1.second<p2.second || (p1.second==p2.second))
        return true;
    return false;
}
int main()
{
     ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll count,n,q,low,high,mid,y1,y2;
    lld disq;
    cin>>n>>q;
    vector<pair<ll,ll> > disvec,disvec2;
    vector<ll>bhams;
    ll rad[n],x[n],y[n],i,j,k;
    pair<ll,ll> d;
    for(i=0;i<n;i++)
        cin>>x[i]>>y[i]>>rad[i];

    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            disq=sqrt( (x[i]-x[j])*(x[i]-x[j]) + (y[i]-y[j])*(y[i]-y[j]) );
            bhams.push_back(disq);
            if(disq>= rad[i] + rad[j])
            d=make_pair(ceil(disq-rad[i]-rad[j]),floor(disq+rad[i]+rad[j]));
            else if(disq>= abs(rad[i]-rad[j]))
            d=make_pair(0,floor(disq+rad[i]+rad[j]));
            else
            d=make_pair(ceil(abs(rad[i]-rad[j])-disq),floor(disq+rad[i]+rad[j]));
            disvec.push_back(d); disvec2.push_back(d);
        }
    }
      sort(disvec.begin(),disvec.end());
    sort(disvec2.begin(),disvec2.end(),func2);
    vector<ll>bhams2;
    for(i=0;i<q;i++){
        cin>>k;
        low=0; high=n*(n-1)/2 -1;
        while(low<=high){
            mid=low + (high-low)/2;
            bhams2.push_back(mid);
            if(disvec[mid].first<=k && mid<n*(n-1)/2-1 && disvec[mid+1].first>k ) break;
            else if(disvec[mid].first>k)   high=mid-1;
            else      low=mid+1;
        }   if(disvec[0].first>k) mid=-1;
        y1=mid+1;
        low=0;  high=n*(n-1)/2 -1;
         while(low<=high){
            mid=low + (high-low)/2;
            if(disvec2[mid].second>=k && mid>0 && disvec2[mid-1].second<k) break;
            else if(disvec2[mid].second<k)   low=mid+1;
            else      high=mid-1;
        }  if(disvec2[n*(n-1)/2-1].second<k) mid=n*(n-1)/2;
        y2=n*(n-1)/2 - mid;
        vector<ll>bhams3;
        for(int i=0;i<10;i++)
        {
            bhams3.push_back(i*i);
        }
        sort(bhams3.begin(),bhams3.end());
        cout<<y1+y2-n*(n-1)/2<<endl;
    }
    return 0;
}
