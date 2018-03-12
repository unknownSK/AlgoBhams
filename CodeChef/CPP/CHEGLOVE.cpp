#include<bits/stdc++.h>
using namespace std;

int main()
{ int t;
cin >> t;
while(t--)
{
int n;
 cin >> n;
 vector<int> l(n);
 vector<int> s(n);
 for(int i=0;i<n;i++)
 cin >> l[i];
 for(int i=0;i<n;i++)
 cin >> s[i];
 int c1=0;int c2=0;
 for(int i=0;i<n;i++)
 { if(s[i]<l[i])
 { c1=1;
 break;
 }
 }
 for(int i=0;i<n;i++)
 { if(s[n-i-1]<l[i])
 { c2=1;
 break;
 }
 }
 if(c1==1&&c2==1)
 cout << "none" << endl;
 else if(c1==1)
 cout << "back"<<endl;
 else if(c2==1)
 cout << "front" << endl;
 else
 cout << "both" << endl;
  }
  return 0;
}
