#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n,i,sum=0;
        cin>>n;
        if(n%2==1)
        {
            cout<<1<<"\n";
        }
        else if(n==2)
        {
            cout<<2<<"\n";
        }
        else
        {
            for(i=1; i<n; i++)
            {
                if(n%i!=0)
                {
                    cout<<sum<<"\n";
                    break;
                }
                else
                {
                    sum=sum+1;
                }
            }
        }
    }
    return 0;
}
