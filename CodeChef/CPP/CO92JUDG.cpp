#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int test=0;test<t;test++)
    {
        int n;
        cin>>n;
        long long int sum1=0,sum2=0;
        vector<int>bhams(n);
        vector<int>frooty(n);
        for(int i=0;i<n;i++)
        {
            cin>>bhams[i];
            sum1+=bhams[i];
        }
        for(int j=0;j<n;j++)
        {
            cin>>frooty[j];
            sum2+=frooty[j];
        }
        sum1-=*max_element(bhams.begin(),bhams.end());
        sum2-=*max_element(frooty.begin(),frooty.end());
        if(sum1>sum2)
        {
            cout<<"Bob"<<endl;
        }
        else if(sum1==sum2)
        {
            cout<<"Draw"<<endl;
        }
        else
        {
            cout<<"Alice"<<endl;
        }

    }
    return 0;
}
