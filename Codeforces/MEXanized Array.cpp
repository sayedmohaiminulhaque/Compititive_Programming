#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k;
    cin>>k;
    while(k--)
    {
        int n,k,x,sum=0;
        cin>>n>>k>>x;

        if(k>n)
        {
            cout<<-1<<"\n";
        }
        else if(k>x+1)
        {
            cout<<-1<<"\n";
        }
        else
        {
            for(int i=0; i<k; i++)
            {
                sum=sum+i;
            }
            if(k==x)
            {
                sum=sum+((x-1)*(n-k));
            }
            else
            {
                sum=sum+((x)*(n-k));
            }

            cout<<sum<<"\n";
       }


    }

    return 0;
}
