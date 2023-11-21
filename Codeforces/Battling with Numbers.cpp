#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int lcm(long long int, long long int);
    long long int gcd(long long int, long long int);
    long long int n;
    cin>>n;
    long long int a[n],b[n],p=1,q=1;
    for(long long int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(long long int i=0; i<n; i++)
    {
        cin>>b[i];
        q=q*pow(a[i],b[i]);
    }
    long long int x=q;
    long long int m;
    cin>>m;
    long long int c[m],d[m];
    for(long long int i=0; i<m; i++)
    {
        cin>>c[i];
    }
    for(long long int i=0; i<m; i++)
    {
        cin>>d[i];
        p=p*pow(c[i],d[i]);
    }
    long long int y=p;
    long long int sum=0;
    long long int t=1;

        while(q!=1)
        {
            t++;
            if(lcm(p,q)==x && gcd(p,q)==y%998244353)
            {
                sum=sum+1;
                p=y*t;
                q=x/t;
                //cout<<p<<" "<<q<<endl;
            }
            else
            {
                p=y*t;
                q=x/t;
            }
        }

    cout<<sum;



    return 0;
}

long long int gcd(long long int m, long long int n)
{
    long long int r = 0, a, b;
    a = (m > n) ? m : n;
    b = (m < n) ? m : n;
    r = b;
    while (a % b != 0)
    {
        r = a % b;
        a = b;
        b = r;
    }
    return r;
}
long long int lcm(long long int m,long long int n)
{
    long long int a;
    a = (m > n) ? m: n;
    while (true)
    {
        if (a % m == 0 && a % n == 0)
            return a;
        ++a;
    }
}
