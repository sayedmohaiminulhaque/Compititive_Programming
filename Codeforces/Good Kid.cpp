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
        long long int a[n],k,m=1;
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        k=*min_element(a,a+n);

        for(int i=0; i<n; i++)
        {
            if(a[i]==k)
            {
                a[i]=a[i]+1;
                break;
            }
        }
        for(int i=0; i<n; i++)
        {
            m=m*a[i];
        }

        cout<<m<<"\n";
    }

    return 0;
}
