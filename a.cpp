#include<bits/stdc++.h>
using namespace std;
#define ll long long int

ll calc(vector<pair<ll,ll> >k,ll c,ll m)
{
    ll ballons = 0;
    for(int i=0;i<k.size();i++)
    {
        if(c<k[i].first*k[i].second)
        {
            ballons += (k[i].first-(c/k[i].second));
        }
    }
    if(ballons<=m)
    {
        return 1;
    }
    else if(ballons>m)
    {
        return -1;
    }
}

ll binary(vector<pair<ll,ll> >k,ll m)
{
    ll minx = LONG_LONG_MAX;
    vector<ll>tt;
    ll low =0;
    ll high = 1e18;
    ll mid;
    while(low<=high)
    {
        mid = (low+high)/2;
        ll aa = calc(k,mid,m);
        if(aa==-1)
        {
            low = mid+1;
        }
        else if(aa==1)
        {

            if(mid<minx)
            {
                minx = mid;
            }
            high = mid-1;

        }
    }
    //return *min_element(tt.begin(),tt.end());
    return minx;
}

int main()
{
    ll m,n;
    bool kata = false;
    cin>>n>>m;
    vector<ll>a(n);
    vector<ll>b(n);
    ll maxa = LONG_LONG_MIN,maxb=LONG_LONG_MIN;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]>maxa)
        {
            maxa = a[i];
        }
    }
    for(int i=0;i<n;i++)
    {
        cin>>b[i];
        if(b[i]>maxb)
        {
            maxb = b[i];
        }
    }
    vector<pair<ll,ll> >k;
    for(ll i=0;i<n;i++)
    {
        k.push_back(make_pair(a[i],b[i]));
    }
    if(maxa<=10&& maxb<=10)
    {
        kata = true;
    }
    ll ans = binary(k,m);
    cout<<ans<<endl;
    return 0;
}
