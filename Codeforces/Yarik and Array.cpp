#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n,g=0,i;
        cin>>n;
        int a[n],b[n];

        for(i=0; i<n; i++)
        {
            b[i]=0;
        }


        for(i=0; i<n; i++)
        {
            cin>>a[i];

            if(i==0)
            {
                b[g]+=a[i];
            }

            else
            {
                if((abs(a[i-1]%2))!=(abs(a[i]%2)))
                {
                    b[g]+=a[i];
                }

                else
                {
                    g++;
                    b[g]+=a[i];
                }

            }


        }

        cout<<*max_element(b,b+(g+1))<<"\n";


    }

    return 0;
}

