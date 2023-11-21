#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        long long int a,b,n;
        cin>>a>>b>>n;
        long long int x[n],i;

        for(i=0; i<n; i++)
        {
            cin>>x[i];

            if(x[i]+1>a)
            {
                b=b+a-1;
            }

            else
            {
                b=b+x[i];
            }
        }

        cout<<b<<"\n";
    }


    return 0;
}
