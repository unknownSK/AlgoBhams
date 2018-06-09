#include<bits/stdc++.h>
using namespace std;

void multiply(long long int F[2][2],long long int M[2][2])
{
long long int x =  (F[0][0]%1000000007*M[0][0]%1000000007)%1000000007 + (F[0][1]%1000000007*M[1][0]%1000000007)%1000000007;
  long long int y =  (F[0][0]%1000000007*M[0][1]%1000000007)%1000000007 + (F[0][1]%1000000007*M[1][1]%1000000007)%1000000007;
  long long int z =  (F[1][0]%1000000007*M[0][0]%1000000007)%1000000007 + (F[1][1]%1000000007*M[1][0]%1000000007)%1000000007;
  long long int w =  (F[1][0]%1000000007*M[0][1]%1000000007)%1000000007 + (F[1][1]%1000000007*M[1][1]%1000000007)%1000000007;

  F[0][0] = x;
  F[0][1] = y;
  F[1][0] = z;
  F[1][1] = w;
}

void power(long long int F[2][2] , long long int n)
{
if( n == 0 || n == 1)
      return ;
  long long int M[2][2] = {{1,1},{1,0}};

  power(F, n/2);
  multiply(F, F);

  if (n%2 != 0)
     multiply(F, M);
}

long long int fib(long long int n)
{
long long int F[2][2] = {{1,1},{1,0}};
if(n==0)
{
return 0;
}
if(n==-1)
{
return 1;
}
power(F,n-1);
return F[0][0];
}

int main()
{
int t;
cin>>t;
for(int test=0;test<t;test++)
{
long long int m,n;
cin>>m>>n;
vector<long long int>bhams(m);
long long int sumb=0,sumd=0;
for(int i=0;i<m;i++)
{
cin>>bhams[i];
sumb = sumb%1000000007 + bhams[i]%1000000007;
}
vector<long long int>dranzer(m);
for(int i=0;i<m;i++)
{
cin>>dranzer[i];
sumd = sumd%1000000007 + dranzer[i]%1000000007;
}
//cout<<fib(0)<<" "<<fib(1)<<" "<<fib(-1)<<endl;
long long int res = ((fib(n-2)%1000000007*sumb%1000000007)%1000000007 + (fib(n-1)%1000000007*sumd%1000000007)%1000000007)%1000000007;
res = (res%1000000007*m%1000000007)%1000000007;
cout<<res%1000000007<<endl;
}
return 0;
}
