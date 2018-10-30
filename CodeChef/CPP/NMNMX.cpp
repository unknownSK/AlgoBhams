#include<bits/stdc++.h>
using namespace std;
const long long int mod = 1000000007;
long long int fact[5001][5001] = {0};

long long int min(long long int a,long long int b)
{
    if(a>b)
    {
        return b;
    }
    else
    {
        return a;
    }
}

//Reference Taken From GeeksForGeeks
long long int power(long long int x,long long int y,long long int p)
{
    long long int res =1;
    x = x % p;
    while(y>0)
    {
        if(y&1)
        {
            res = (res*x)%p;
        }
        y = y>>1;
        x = (x*x)%p;
    }
    return res;
}

int main()
{
    //Reference Taken From GeeksForGeeks
    long long int h1,h2;
    for(h1=0;h1<5001;h1++)
    {
        for(h2=0;h2<=min(h1,5001);h2++)
        {
            if(h2==0 || h2==h1)
            {
                fact[h1][h2]=1;
            }
            else
            {
                fact[h1][h2] = (fact[h1-1][h2-1]%(mod-1) + fact[h1-1][h2]%(mod-1))%(mod-1);
            }
        }
    }
    int t;
    cin>>t;
    while(t--)
    {
        long long int n,k;
        cin>>n>>k;
        vector<long long int>dranzer(n);
        for(int i=0;i<n;i++)
        {
            cin>>dranzer[i];
        }
        sort(dranzer.begin(),dranzer.end());
        long long int ans = 1;
        long long int total = fact[n-1][k-1];
        for(int i=1;i<dranzer.size()-1;i++)
        {
            long long int d =0;
            for(int j =1;j<k-1;j++)
            {
                d += fact[i][j]*fact[n-i-1][k-j-1];
                d = d%(mod-1);
            }
            ans = (ans*power(dranzer[i],d,mod))%mod;
        }
        cout<<ans%mod<<endl;

    }
    return 0;
}
