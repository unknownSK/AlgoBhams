#include<bits/stdc++.h>
using namespace std;
int main()
{ int t;
 cin >> t;
 while(t--)
 { int n,h;
  cin >> n >> h;
  vector<long long int> a(n);
  for(int i=0;i<n;i++)
  cin >> a[i];
  long long int m=*max_element(a.begin(),a.end());

 // int s=h-n;
int l=1;
int hi=m;
long long int mid;
int c=0;
  while(l<hi)
  {  mid=(l+hi)/2;
 long long  int s=0;
    for(int i=0;i<n;i++)
    { s+= ceil((double(a[i]))/mid);
    }
  if(s<=h)
  { hi=mid;
  }
  else if(s>h)
  l=mid+1;

  }
  mid=(l+hi)/2;
 // int x=binarysearch(l,hi,h,a);
  cout <<  mid << endl;
 }
return 0;
}

