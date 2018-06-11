#include<bits/stdc++.h>
using namespace std;

struct bhams
{
    map<char,pair<int,bhams*> >bhamsie;
    map<char,vector<long long int> >bhamsv;
};

vector<string>ans;

void insertie(bhams *const &he , string const &strie , int ind)
{
    bhams* current = he ;
    int i = 0;
    while(i<strie.size())
    {
        if(current -> bhamsie.find(strie[i]) == current -> bhamsie.end())
        {
            current -> bhamsie[strie[i]] = make_pair(ind , new bhams());
            current -> bhamsv[strie[i]].push_back(ind);
        }
        if(ans[current -> bhamsie[strie[i]].first].compare(ans[ind])>0)
        {
            current -> bhamsv[strie[i]].push_back(ind);
        }
        current = current -> bhamsie[strie[i]].second;
        i++;
    }
}

bhams *he = new bhams();

void construction(int num)
{
    int i = 0;
    while(i<num)
    {
        insertie(he , ans[i] , i);
        i++;
    }
}

long long int ser(string sub , int ro)
{
    bhams *current = he ;
    vector<long long int>v;
    int j = 0;
    while(current)
    {
        if(current -> bhamsie.find(sub[j]) != current -> bhamsie.end())
        {
            if(current -> bhamsie[sub[j]].first < ro)
            {
                v = current -> bhamsv[sub[j]];
                current = current -> bhamsie[sub[j]].second;
            }
            else
            {
                break;
            }
        }
        else
        {
            break;
        }
        j++;
    }
    if(v.size() == 0)
    {
        return -1;
    }
    long long int a = v[0];
    int i =1;
    while(i<v.size())
    {
        if(v[i]< ro && ans[a].compare(ans[v[i]]) > 0)
        {
            a = v[i];
        }
        i++;
    }
    return a;
}

int main()
{
    int k;
    cin>>k;
    vector<int>ms(k);
    ms[0] = 0;
    int i=0;
    while( i < k)
    {
        string h;
        cin>>h;
        ans.push_back(h);
        if(i>0 && ans[ms[i-1]].compare(ans[i]) > 0)
        {
            ms[i] = i;
        }
        else if(i>0)
        {
            ms[i] = ms[i-1];
        }
        i++;
    }
    construction(k);
    int queries;
    cin>>queries;
    for(int test=0;test<queries;test++)
    {
        int ki;
        string sub;
        cin>>ki>>sub;
        long long int an = ser(sub,ki);
        if(an == -1)
        {
            cout<<ans[ms[ki-1]]<<endl;
        }
        else
        {
            cout<<ans[an]<<endl;
        }
    }

    return 0;
}
