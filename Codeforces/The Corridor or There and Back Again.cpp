#include<bits/stdc++.h>
using namespace std;

int main()
{
int t;
cin>>t;
while(t--)
{
int n;
    cin>>n;
    int d[n],s[n],i,k,r=1000;
    for(i=0; i<n; i++)
    {
    cin>>d[i]>>s[i];
    }
    for(i=0; i<n; i++)
    {
    if(s[i]%2==1)
    {
    k=d[i]+(s[i]/2);
     if(k<r)
     {
     r=k;
     }
     else
     {
     r=r;
     }
    }
    else
    {
    k=d[i]+(s[i]/2)-1;
     if(k<r)
     {
     r=k;
     }
     else
     {
     r=r;
     }

    }

    }
    cout<<r<<"\n";

}
 return 0;
}
