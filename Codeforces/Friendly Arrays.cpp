#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int m,n,xmx,xmn,tmx,tmn;
        cin>>n>>m;
        long long int a[n],b[m],c[n];
        for(long long int i=0; i<n; i++)
        {
            cin>>a[i];
            if(i>0)
            {
                xmx=a[i-1]^a[i];
                xmn=xmx;

            }
            else
            {
                xmx=a[i];
                xmn=xmx;
            }
        }
        for(long long int i=0; i<m; i++)
        {
            cin>>b[i];
            for(long long int j=0; j<n; j++)
            {
                c[j]=a[j]|b[i];
                if(j>0)
                {
                    tmx=c[j-1]^c[j];
                    tmn=tmx;
                }
                else
                {
                    tmx=c[j];
                    tmn=tmx;
                }
            }
            if(tmx>xmx)
            {
                xmx=tmx;
            }
            else if(tmn<xmn)
            {
                xmn=tmn;
            }
        }
        cout<<xmn<<" "<<xmx<<"\n";


    }

    return 0;
}
