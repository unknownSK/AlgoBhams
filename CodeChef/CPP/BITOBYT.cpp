#include<bits/stdc++.h>
using namespace std;
long long int a[1605],b[1605],c[1605];
int main()
{
    a[0]=1;

    long long int k =0;
    for(int i=1;i<1601;i++)
    {
        k++;
        a[i]=a[i-1];
           c[i]=c[i-1];
              b[i]=b[i-1];
        if(k==3)
        {
            b[i]=a[i-1];
            a[i]=0;
        }
        else if(k==11)
        {
            c[i]=b[i-1];
            b[i]=0;
        }
        else if(k==27)
        {
            a[i]=2LL*c[i-1];
            k=0;
            c[i]=0;
        }
    }

    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;

cout<<a[n]<<" "<<b[n]<<" "<<c[n]<<endl;

    }
    return 0;
}
