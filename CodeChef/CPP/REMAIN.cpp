#include<bits/stdc++.h>
#include<boost/multiprecision/cpp_int.hpp>
using boost::multiprecision::cpp_int;
using namespace std;
int main()
{
int t;
cin>>t;
for(int test=0;test<t;test++)
{
cpp_int m,n;
cin>>n>>m;
cpp_int r = n%m;
if(r%2==0) cout<<"EVEN"<<endl;
else cout<<"ODD"<<endl;
}
return 0;
}
