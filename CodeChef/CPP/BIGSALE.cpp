#include<bits/stdc++.h>
using namespace std;

int main()
{ int t;
cin >> t;
while(t--)
{ int n;
cin >> n;
vector<int> p(n);
vector<int> q(n);
vector<int> d(n);
double l=0.0;
for(int i=0;i<n;i++)
{ cin >> p[i] >> q[i] >> d[i];
}

for(int i=0;i<n;i++)
{ float x=0.0,y=0.0;
 x=p[i]+(p[i]*d[i])/100;
 y=x-(x*d[i])/100;
 cout << p[i]-y << endl;
 l+=(p[i]-y)*q[i];
}
cout << l << endl;
}
return 0;
}
