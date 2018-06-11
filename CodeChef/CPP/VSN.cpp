#include<bits/stdc++.h>
using namespace std;

double dist(double a,double b,double c,double d,double e,double f,double g,double h,double i,double j,double k,double l,double t)
{
    double qx = d + (t*g);
    double qy = e + (t*h);
    double qz = f + (t*i);
    double disti = ((qx - a)*(j-a) + (qy-b)*(k-b) + (qz-c)*(l-c))/((qx-a)*(qx-a) + (qy-b)*(qy-b) + (qz-c)*(qz-c));
    double a1 = (qx-a)*disti + a - j;
    double b1 = (qy-b)*disti + b - k;
    double c1 = (qz-c)*disti + c - l;
    return sqrt(a1*a1 + b1*b1 + c1*c1);
}

int main()
{
    int t;
    cin>>t;
    for(int test=0;test<t;test++)
    {
        double a,b,c,d,e,f,g,h,i,j,k,l,m;
        cin>>a>>b>>c>>d>>e>>f>>g>>h>>i>>j>>k>>l>>m;
        double low = 0 , high = 1000000000;
        double mid;
        while(low<=high)
        {
            mid = (high+low)/2;
            double distance = dist(a,b,c,d,e,f,g,h,i,j,k,l,mid);
            if(distance == m)
            {
                break;
            }
            else if(distance>m)
            {
                high = mid - 0.0000000001;
            }
            else
            {
                low = mid + 0.0000000001;
            }
        }
        printf("%.10lf\n" , mid);
    }
    return 0;
}
