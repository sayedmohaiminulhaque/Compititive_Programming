#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t--)
    {

        int x,y,z,sum;

        cin>>x>>y>>z;

        if(y>x)
        {
            if((y-x)>z)
            {
                sum=x+z+(2*(y-x-z));
            }

            else
            {
                sum=y;
            }

            cout<<sum<<"\n";
        }

        else
        {
            cout<<x<<"\n";

        }


    }

    return 0;
}
