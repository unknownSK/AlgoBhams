#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin>>t;
    for(int test=0;test<t;test++)
    {
        int n,m;
        scanf("%d%d" , &n , &m);
        int bhams[n][m];
        for(int i=0;i<n;i++)
        {

            for(int j=0;j<m;j++)
            {
                cin>>bhams[i][j];
            }

        }
        bool frooty = false;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(bhams[i][j] == -1)
                {
                    int frooty2 = 1;
                    if(i-1 >= 0)
                    {
                        frooty2 = max(frooty2 , bhams[i-1][j]);
                    }
                    if(j-1 >= 0)
                    {
                        frooty2 = max(frooty2 , bhams[i][j-1]);
                    }
                    bhams[i][j] = frooty2;
                }
                else
                {
                    if(i-1 >= 0 && bhams[i-1][j] > bhams[i][j])
                    {
                        frooty = true;
                    }
                    if(j-1 >=0 && bhams[i][j-1] > bhams[i][j])
                    {
                        frooty = true;
                    }
                }
            }
        }
        if(frooty == true)
        {
            cout<<"-1\n";
        }
        else
        {
            for(int i=0;i<n;i++)
            {
                for(int j=0 ;j<m;j++)
                {
                    cout<<bhams[i][j]<<" ";
                }
                cout<<endl;
            }
        }
    }
    return 0;
}
