#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n,k,x,sum=0,i,sum2=0,sum3=0,sum1=0,j;
        cin>>n>>k>>x;
        sum3=(n*(n+1))/2;
        sum1=((n-k)*(n-k+1))/2;
        sum2=sum3-sum1;
        sum=(k*(k+1))/2;

        if(x<sum)
        {
            cout<<"NO\n";
        }
        else if(x>sum2)
        {
            cout<<"NO\n";
        }
        else
        {
            cout<<"YES\n";
        }

    }


return 0;
}
