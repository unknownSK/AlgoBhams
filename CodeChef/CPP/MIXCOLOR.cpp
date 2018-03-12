#include<bits/stdc++.h>
using namespace std;

int main()
{ int t;
scanf("%d",&t);
while(t--)
{ int n;
scanf("%d",&n);
vector<int> a(n);
//set<int> s;
//vector<int> f(n);
for(int i=0;i<n;i++)
scanf("%d",&a[i]);
/*for(int i=0;i<n;i++)
s.insert(a[i]);
set<int>::iterator it;*/
int c=0,x;
/*for(it=s.begin();it!=s.end();it++)
{ x =count(a.begin(),a.end(),*it);
 c+=x-1;
}*/
sort(a.begin(),a.end());
for(int i=1;i<n;i++)
{ if(a[i]==a[i-1])
   c++;
}
printf("%d\n",c);
}
return 0;
}
