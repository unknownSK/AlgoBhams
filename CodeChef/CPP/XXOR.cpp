#include<bits/stdc++.h>
using namespace std;

string d_b(int y)
{ int i=0;string s="";
for(int j=0;j<32;j++)
{ long long int x=pow(2,j);
char ch;
//char ch=(max/x)%2-48;
if((y/x)%2==1)
ch='1';
else
ch='0';
s=ch+s;
}
return s;
}
int main()
{ int n,q;
cin >> n >> q;
vector<int> v(n+1);
for(int i=1;i<=n;i++)
cin >> v[i];
vector<string> s(n+1);
int co[n+1][32];
int cz[n+1][32];
//int cz[32];
for(int i=0;i<=n;i++)
{for(int j=0 ;j<32;j++)
{ co[i][j]=0;
 cz[i][j]=0;
}
}

for(int i=1;i<=n;i++)
{s[i]=d_b(v[i]);
//cout << s[i] << endl;
for(int j=31;j>=1;j--)
{ if(s[i][j]=='0')
 {cz[i][j]=cz[i-1][j]+1;
 co[i][j]=co[i-1][j];
 }
 else
{ co[i][j]=co[i-1][j]+1;
cz[i][j]=cz[i-1][j];}
}
}


while(q--)
{ int l,r;
cin >> l >> r;
long long int max=0;

string d="";
for(int j=31;j>=1;j--)
{ long long int o=co[r][j]-co[l][j];
  long long int z=cz[r][j]-cz[l][j];
  if(s[l][j]=='0')
  z++;
  if(s[l][j]=='1')
  o++;
  if(z>o)
  d='1'+d;
  else
  d='0'+d;
//  cout << z << " " << o << endl;
}
long long int x=0;
for(int i=0;i<31;i++)
{  unsigned long long int ans=((int)d[i]-48)*pow(2,30-i);
x+=ans;
}


cout << x << endl;

}
return 0;
}








