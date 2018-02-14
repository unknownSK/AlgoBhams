#include<bits/stdc++.h>
using namespace std;

long long kadame(vector<long long>a ,long long size )
{
long long max_so_far =INT_MIN , max_ending_here=0,t=0;
for(long long i=0;i<size;i++)
{
max_ending_here = max(max_ending_here + a[i], t);
    max_so_far = max(max_ending_here, max_so_far);
}
return max_so_far;
}

int main()
{
int t; cin>>t;
for(int test =0;test<t;test++)
{
long long n,k; cin>>n>>k; vector<long long>bhams; long long sum=0,positive=0,negative =0;
for(int i=0;i<n;i++)
{int data; cin>>data; bhams.push_back(data); sum = sum + data;
if(data>=0) positive++;
else negative++; }

if(n==3)
{
vector<long long>frooty;
for(int i=0;i<k;i++)

{
frooty.insert(frooty.end(),bhams.begin(),bhams.end());
}
cout<<kadame(frooty,frooty.size())<<endl;
}
else{
if(positive==0){cout<<*max_element(bhams.begin(),bhams.end())<<endl; }
else if(negative==0) {cout<<sum*k<<endl;}
else
{
if(sum<=0){
vector<long long>frooty;
frooty.insert(frooty.end(),bhams.begin(),bhams.end()); frooty.insert(frooty.end(),bhams.begin(),bhams.end());
long long result = kadame(frooty , frooty.size());
cout<<result<<endl;
}
else{
if(k<3) {vector<long long>frooty;
for(int m=0;m<k;m++)
{
frooty.insert(frooty.end(),bhams.begin(),bhams.end());
}
long long result = kadame(frooty , frooty.size());
cout<<result<<endl;}

else{
long long fsum=0,fmax=INT_MIN,bsum=0,bmax=INT_MIN;
for(int i=0;i<bhams.size();i++)
{
fsum+=bhams[i];
if(fmax<fsum) fmax = fsum;
bsum += bhams[bhams.size()-1-i];
if(bmax<bsum) bmax = bsum;
}
long long result = bmax+fmax+((k-2)*sum);
cout<<result<<endl;
}
}
}
}
}
return 0;
}
