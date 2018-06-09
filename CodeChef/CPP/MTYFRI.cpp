#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int test=0; test<t; test++)
    {
        int n,k;
        cin>>n>>k;
        vector<int>bhams;
        vector<int>dranzer;
        int sumb=0;
        int sumd=0;
        for(int i=0; i<n; i++)
        {
            int data;
            cin>>data;
            if(i%2==0)
            {
                dranzer.push_back(data);
                sumd+=data;
            }
            else
            {
                bhams.push_back(data);
                sumb+=data;
            }
        }

        if(sumb>sumd)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            sort(bhams.begin(),bhams.end());
            sort(dranzer.begin(),dranzer.end());
            int m=dranzer.size()-1,n=0,flag=0;
            for(int i=0;i<k;i++)
            {
            if(dranzer[m]>bhams[n])
            {
            sumd=sumd-dranzer[m]+bhams[n];
            sumb=sumb-bhams[n]+dranzer[m];
            //cout<<dranzer[m]<<" "<<bhams[n]<<" : ";
            swap(dranzer[m],bhams[n]);
            //cout<<dranzer[m]<<" "<<bhams[n]<<endl;
            }
            m--;
            n++;
            if(n==bhams.size()-1||m==0)
            {
            sort(bhams.begin(),bhams.end());
            sort(dranzer.begin(),dranzer.end());
            m=dranzer.size()-1;
            n=0;
            }
            if(sumb>sumd)
            {
            flag=1;
            break;
            }
            }
            if(flag==0)
            {
            cout<<"NO"<<endl;
            }
            else
            {
            cout<<"YES"<<endl;
            }
        }
        }
        return 0;
    }
