#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n,m,countm=0;
        cin>>n>>m;
        vector<int>bhams(n);
        for(int i=0;i<n;i++)
        {
            cin>>bhams[i];
        }
        for(int i=0;i<n;i++)
        {
            if(bhams[i]%m==0)
            {
                countm++;
            }
        }
        long long int ans = 1;
        for(int i=0;i<countm;i++)
        {
            ans *= 2;
        }
        cout<<ans-1<<endl;
    }
    return 0;
}
