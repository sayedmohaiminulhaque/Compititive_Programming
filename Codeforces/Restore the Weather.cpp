#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n],b[n],i,c[n],d[n];

    for(i=0; i<n; i++)
    {
        cin>>a[i];
        d[i]=a[i];
    }

    for(i=0; i<n; i++)
    {
        cin>>b[i];
    }

    sort(a,a+n);
    sort(b,b+n);

    for(i=0; i<n; i++)
    {
        c[a[i]]=b[i];
    }

    for(i=0; i<n; i++)
    {
        cout<<c[d[i]]<<" ";
    }


    return 0;
}
