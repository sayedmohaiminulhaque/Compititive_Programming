#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c,sum=0;
        cin>>a>>b>>c;
        if(a>b)
        {
            while(a>b)
            {
                a=a-c;
                b=b+c;
                sum=sum+1;
            }
            cout<<sum<<"\n";
        }
        else if(a<b)
        {
            while(a<b)
            {
                a=a+c;
                b=b-c;
                sum=sum+1;
            }
            cout<<sum<<"\n";
        }
        else
        {
            cout<<"0\n";
        }
    }
    return 0;
}
