#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       // multiset<long long int>s;
        long long int n,k=0;
        cin>>n;
        long long int a[n],i,sum=0, sum1=0;
        for(i=0; i<n; i++)
        {
            cin>>a[i];
           // s.insert(a[i]);
            if(a[i]==1)
            {
                sum1++;
            }
            else if(a[i]>=n)
            {
                k=1;
            }
            else
            {
               sum=sum+a[i];
            }

        }
        if(n==1)
        {
            cout<<"NO\n";
        }
        else if(k==1)
        {
            cout<<"YES\n";
        }
        else if(sum1==n)
        {
            cout<<"NO\n";
        }
        else if(sum1==0)
        {
            cout<<"YES\n";
        }
        else if(sum<n)
        {
        cout<<"NO\n";
        }
        else
        {
        cout<<"YES\n";
        }

        //s.clear();

    }


    return 0;
}
