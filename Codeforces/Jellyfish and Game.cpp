#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        long long int n,m,k;
        cin>>n>>m>>k;
        long long int a[n],b[m],i,sum=0,sum1=0;

        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }

        for(i=0; i<m; i++)
        {
            cin>>b[i];
        }

        sort(a,a+n);
        sort(b,b+m);

        if(k%2==1)
        {
            if(a[0]<b[m-1])
            {
                swap(a[0],b[m-1]);
                sort(a,a+n);
                sort(b,b+m);
            }
        }

        else
        {

            if(a[0]<b[m-1])
            {
                swap(a[0],b[m-1]);
                sort(a,a+n);
                sort(b,b+m);
            }

            if(b[0]<a[n-1])
            {
                swap(b[0],a[n-1]);
                sort(a,a+n);
                sort(b,b+m);
            }
        }



        for(i=0; i<n; i++)
        {
            sum=sum+a[i];
        }

        cout<<sum<<"\n";


    }


    return 0;
}
