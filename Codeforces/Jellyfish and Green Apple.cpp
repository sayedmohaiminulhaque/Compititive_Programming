#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        long long int n,m,k=0,sum=0;
        //float f;
        cin>>n>>m;
        //k=n;
            while(n%m!=0)
            {
            k++;
                sum=sum+(n%m);
                n=(n%m)*2;
                if(k>100)
                {
                break;
                }
            }
            if(k>100)
            {
            cout<<-1<<"\n";

            }
            else
            {
            cout<<sum<<"\n";
            }



    }

    return 0;
}
