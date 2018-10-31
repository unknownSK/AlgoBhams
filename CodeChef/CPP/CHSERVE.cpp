#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int p,q,r;
        cin>>p>>q>>r;
        long long int ans = p+q;
        ans /= r;
        if(ans%2==0)
        {
            cout<<"CHEF"<<endl;
        }
        else
        {
            cout<<"COOK"<<endl;
        }
    }
    return 0;
}
