#include<bits/stdc++.h>
using namespace std;

vector<long long int>bhams;

void bhamsie()
{
    long long int i=1;
    bhams.push_back(i);
    long long int counter = 2;
    while(i<1000000001)
    {
        i+=counter;
        counter++;
        bhams.push_back(i);
    }
}

int main()
{
    int t;
    cin>>t;
    bhamsie();
    for(int test=0;test<t;test++)
    {
        int time=0;
        long long int h;
        cin>>h;
        if(h==1)
        {
            cout<<1<<endl;
        }
        else
        {
        vector<long long int>::iterator frooty2;
        frooty2 = lower_bound(bhams.begin(),bhams.end(),h);
        long long int frooty = (frooty2 - bhams.begin());
        if(h>(bhams[frooty-1]+bhams[frooty])/2)
        {
            time += frooty;
            time += bhams[frooty]-h;
        }
        else
        {
            time += frooty-1;
            time += h-bhams[frooty-1];
        }
        cout<<time+1<<endl;
        }
    }
    return 0;
}
