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
    long long int b[n],i,j,k=0;
    for(i=0; i<n; i++)
    {
        cin>>b[i];
        if(i>0)
        {
            if(b[i]<b[i-1])
            {
                k++;
            }
        }
    }
    k=k+n;
    cout<<k<<"\n";
    for(i=0; i<n; i++)
    {
        if(i>0)
        {
            if(b[i]<b[i-1])
            {
                cout<<b[i]<<" ";
                cout<<b[i]<<" ";
            }
            else
            {
               cout<<b[i]<<" ";
            }
        }
        else
        {
            cout<<b[i]<<" ";
        }
    }
    cout<<"\n";
    }


    return 0;
}
