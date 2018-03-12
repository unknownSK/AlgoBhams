#include<bits/stdc++.h>
using namespace std;

int main()
{ int t;
cin >> t;
while(t--)
{ int n;
cin >> n;
vector<int> s(n);
//vector<long long int>sf(n);long long int sum=0;
for(int i=0;i<n;i++)
{ cin >> s[i];
// sum+=s[i];
// sf[i]=sum;
}
vector<int> v(n,0);
//sort(s.begin(),s.end());
for(int i=0;i<n;i++)
{
long long int fs=0,bs=0;
 for(int j=i+1;j<n;j++)
 { if(fs<=s[i])
   { v[j]++;

   }
   else
   break;
   fs+=s[j];
 }
 for(int j=i-1;j>=0;j--)
 {  if(bs<=s[i])
   { v[j]++;

   }
   else
   break;
    bs+=s[j];
 }
}

//cout << v[0]-1<< " ";
for(int i=0;i<n; i++)
{
cout << v[i]<< " " ;
}
cout << endl;
//cout << v[n-1]-1 << endl;
}
return 0;
}
