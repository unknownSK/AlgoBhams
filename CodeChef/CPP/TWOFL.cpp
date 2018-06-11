#include<bits/stdc++.h>
using namespace std;

const int N = 2001 , M = 2001;
int bhams[N][M];
int n,m;
bool travel[N][M]= {false};

bool safe(int i,int j,int a ,int b)
{
    return (i>=0)&&(j>=0)&&(i<n)&&(j<m)&&(!travel[i][j])&&(bhams[i][j]==a || bhams[i][j]==b);
}

void dfs_visit(int i , int j , int a ,int b,int &countm)
{
    travel[i][j] = true;
    static int rown[] = {-1,0,0,1};
    static int coln[] = {0,-1,1,0};
    int k=0;
    while(k<4)
    {
        if(safe(i+rown[k],j+coln[k],a,b))
        {
       // cout<<"visited"<<endl;
            countm++;
            dfs_visit(i+rown[k],j+coln[k],a,b,countm);
        }
        k++;
    }
}

int res(int x,int y,int countm)
{
int ans = INT_MIN;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if((bhams[i][j] == x || bhams[i][j] == y)&&(!travel[i][j]))
            {
                countm = 1;
                dfs_visit(i,j,x,y,countm);
               // cout<<countm<<endl;
               ans = max(ans,countm);
            }
        }
    }
    return ans;
}

int main()
{
    cin>>n>>m;
    vector<int>original;
    int countm , ans = INT_MIN,answer;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>bhams[i][j];
            original.push_back(bhams[i][j]);
        }
    }
    sort(original.begin(),original.end());
    original.erase(unique(original.begin(),original.end()),original.end());
    if(original.size()==1)
    {
        cout<<n*m<<endl;
    }
    else
    {
    for(int i=0;i<original.size();i++)
    {
        for(int j=i;j<original.size();j++)
        {
            memset(travel,false,sizeof(travel));
            int answer = res(original[i],original[j],countm);
            ans = max(ans,answer);
            //cout<<answer<<" "<<i<<" "<<j<<endl;
        }
    }
    cout<<ans<<endl;
    }
    return 0;

}
