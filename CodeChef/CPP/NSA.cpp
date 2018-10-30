    #include<bits/stdc++.h>

    using namespace std;
    #define ll long long

    ll dranzer[26],dranzern[26],dranzerpre[26];


    int main()
    {
        ll t;
        cin>>t;
        string s;
        for(long long int test=0;test<t;test++)
        {
            memset(dranzern,0,sizeof(dranzern));
            memset(dranzer,0,sizeof(dranzer));
            memset(dranzerpre,0,sizeof(dranzerpre));
            cin>>s;
            //mem_clear();
            vector<char>dranzerie;
            for(int i=0;i<s.size();i++)
            {
                dranzerie.push_back(s[i]);
            }
            sort(dranzerie.begin(),dranzerie.end());
            ll n = s.size();
            ll bhinv[s.size()],ttl=0;
            ll im=0;
            while(im<s.size())
            {
                dranzern[s[im]-'a']++;
                bhinv[im]=0;
                ll jc=0;
                while(jc<(s[im]-'a'))
                {
                    bhinv[im] += dranzern[jc];
                    jc++;
                }
                im++;
            }
            ll last=dranzern[25];
            memset(dranzern,0,sizeof(dranzern));
            memset(dranzer,0,sizeof(dranzer));
            memset(dranzerpre,0,sizeof(dranzerpre));
           // mem_clear();
            ll i1 = s.size()-1;
            while(i1>-1)
            {
                dranzern[s[i1]-'a']++;
                ll jn = s[i1]-'a'+1;
                while(jn<=25)
                {
                    bhinv[i1] += dranzern[jn];
                    jn++;
                }
                i1--;
            }
            for(ll i=0; i<n; i++)
                ttl += bhinv[i];
            vector<long long int>ans;
            ll cost;
            for(ll i=0; i<n; i++)
            {
                dranzern[s[i]-'a']--;
                ll sum=0,ps=0;
                ll j2=0;
                while(j2<26){
                    ps+=dranzern[j2]; j2++;} j2=0;
                while(j2<26)
                {
                    ps -= dranzern[j2];
                    cost =(ttl+2*(sum+ps-bhinv[i]))/2+abs(int(s[i]-'a')-j2);
                    ans.push_back(cost);
                    sum += dranzer[j2];
                    j2++;
                }
                dranzer[s[i]-'a']++;
            }
            //sort(ans.begin(),ans.end());
            //cout<<ans[0]<<endl;
            cout<<*min_element(ans.begin(),ans.end())<<endl;
        }
    }
