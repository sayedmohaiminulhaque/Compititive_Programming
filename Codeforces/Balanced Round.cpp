#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n,k;
        cin>>n>>k;
        long long int a[n],i,sum=1,m=1;
        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        for(i=0; i<n-1; i++)
        {
            if(a[i+1]-a[i]<=k)
            {
                sum++;
                if(sum>m)m=sum;
            }
            else
            {
                if(m>=sum)
                {
                    sum=1;
                }
                else
                {
                    m=sum;
                    sum=1;
                }
            }
        }
        cout<<n-m<<"\n";

    }

    return 0;
}
