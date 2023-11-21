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
        int a[2*n];

        for(int i=0; i<2*n; i++)
        {
            cin>>a[i];
        }

        int sum=0;
        sort(a,a+(2*n));

        for(int i=0; i<n-1; i++)
        {
            sum =sum+abs(a[i]-a[i+1]);
        }

        for(int i=n; i<(2*n)-1; i++)
        {
            sum =sum+abs(a[i]-a[i+1]);
        }

        cout<<sum<<"\n";

        for(int i=0; i<n; i++)
        {
            cout<<a[i]<<" "<<a[(2*n)-1-i]<<"\n";
        }

    }



    return 0;
}
