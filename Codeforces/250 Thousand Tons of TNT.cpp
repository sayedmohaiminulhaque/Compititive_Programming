#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        long long int n,mx=0,i,j,k,g=-1,k2;
        cin>>n;
        long long int a[n],b[n];

        for(i=0; i<n; i++)
        {
            cin>>a[i];
            b[i]=0;
        }

        mx=*max_element(a,a+n)-*min_element(a,a+n);

        for(k=2; k<n; k++)
        {
            if(n%k==0)
            {
            g=-1;
            //cout<<k<<"\n";
                for(i=0; i<n;)
                {
                    g++;

                    for(j=i; j<i+k; j++)
                    {
                        b[g]=b[g]+a[j];
                    }

                    i=i+k;
                }
                k2=*max_element(b,b+(n/k))-*min_element(b,b+(n/k));

                if(mx<k2)
                {
                    mx=k2;
                }

                for(i=0; i<n; i++)
                {
                    b[i]=0;
                }
            }
        }

        cout<<mx<<"\n";


    }



    return 0;
}
