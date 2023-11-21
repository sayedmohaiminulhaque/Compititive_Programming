#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n;
        cin>>n;
        long long int a[n],b[n],i,k,l,sum=0,sum2=0;
        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }
        for(i=0; i<n; i++)
        {
            cin>>b[i];
        }
        k=*min_element(a,a+n);
        for(i=0; i<n; i++)
        {
           sum=sum+(k+b[i]);
        }
        l=*min_element(b,b+n);
        for(i=0; i<n; i++)
        {
           sum2=sum2+(l+a[i]);
        }

        cout<<min(sum,sum2)<<"\n";


    }


    return 0;
}
