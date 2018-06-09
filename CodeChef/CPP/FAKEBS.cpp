#include<bits/stdc++.h>
using namespace std;

vector<long long int>copyVector (vector<long long int>a,long long int n)
{
vector<long long int>copi(n+1);
for(int i=1;i<=n;i++)
{
copi[i] = a[i];
}
return copi;
}

int main()
{
int t;
cin>>t;
map<long long int , long long int>mapi;
for(int test=0;test<t;test++)
{
long long int n,q;
cin>>n>>q;
vector<long long int>bhams(n+1),dranzer(n+1);
for(int i=1;i<=n;i++)
{
cin>>bhams[i];
}
dranzer = copyVector(bhams,n);
//copyVector(dranzer,bhams,n);
//for(int i=1;i<=n;i++)
//{
//cout<<bhams[i]<<" "<<dranzer[i]<<endl;
//}
sort(dranzer.begin()+1,dranzer.end());
for(int i=1;i<=n;i++)
{
long long int left=1,right = n,middle;
while(left<=right)
{
middle=(left+right)/2;
if(dranzer[middle]==bhams[i])
{
break;
}
else if(dranzer[middle]<bhams[i])
{
left = middle+1;
}
else
{
right = middle-1;
}
}
long long int xmas = middle;
left =1 , right = n;
long long int h1=0;
long long int h2 =0;
long long int h3=0;
long long int h4=0;
while(left<=right)
{
middle =(left+right)/2;
if(bhams[i]==bhams[middle])
{
break;
}
else if(bhams[middle]>bhams[i]&&middle<i)
{
left = middle+1;
h1++;
}
else if(bhams[middle]<bhams[i]&&i<middle)
{
right = middle -1;
h2++;
}
else if(i<middle)
{
right = middle-1;
h4++;
}
else if(i>middle)
{
left = middle +1;
h3++;
}
}
long long int c1;
long long int c2;
c1 = xmas-1;
c2 = n-xmas;
if(h1<=c1-h3&&h2<=c2-h4)
{
mapi[bhams[i]]=min(h1,h2)+abs(h2-h1);
}
else
{
mapi[bhams[i]]=-1;
}
}
for(int query=0;query<q;query++)
{
long long int subject;
cin>>subject;
cout<<mapi[subject]<<endl;
}
}
return 0;
}
