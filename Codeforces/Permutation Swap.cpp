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
        int a[n],k=0;

        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }

        for(int i=0; i<n; i++)
        {
            if(a[i]!=i+1)
            {
                for(int j=i; j<n; j++)
                {
                    if(a[j]==i+1 || j+1==a[i])
                    {
                        if(k<(j-i))
                        {
                            k=(j-i);
                        }
                    }
                }
            }
        }

        cout<<k<<"\n";


    }

    return 0;
}
