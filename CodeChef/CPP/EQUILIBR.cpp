#include<bits/stdc++.h>
using namespace std;


vector<long long int> euc(long long int a,long long int b)
{
    long long int sn = 0;
    long long int so = 1;
    long long int tn = 1;
    long long int to = 0;
    long long int rn = b;
    long long int ro = a;
    for(;;)
    {
        if(rn!=0)
        {
            long long int q = ro/rn;
            long long int temp = rn;
            rn = ro - q*rn;
            ro = temp;
            temp = sn;
            sn = so - q*sn;
            so = temp;
            temp = tn;
            tn = to - q*tn;
            to = temp;
        }
        else
        {
            break;
        }
    }

    vector<long long int> result;
    result.push_back(so);
    return result;
}

long long int dranzer(long long int a,long long int b)
{
    vector<long long int>bhg = euc(a,b);
    long long int x = bhg[0];
    if(x<0)
    {
        x+=b;
    }
    return x;
}

long long int powweerr(long long int x,long long int y,long long int mod)
{
    long long int res =1;
    x = x%mod;
    for(;;)
    {
        if(y>0)
        {
            if(y%2!=0)
            {
                res = (res*x)%mod;
            }
            y = y/2;
            x = (x*x)%mod;
        }
        else
        {
            break;
        }
    }
    return res;
}

long long int take_modulo(long long int num,long long int den,long long int mod)
{
    return ((num%mod)*(den%mod))%mod;
}

long long int compute_num(long long int pp,long long int n,long long int mod)
{
    return pp-n;
}

int main()
{
    long long int n,k;
    cin>>n>>k;
    long long int mod = 1000000007;
    long long int pp = powweerr(2,n-1,mod);
    long long int num = compute_num(pp,n,mod);
    long long int den = dranzer(pp,mod);
    long long ans = take_modulo(num,den,mod);
    cout<<ans<<endl;
    return 0;
}
