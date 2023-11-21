#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n,k,i,j,b=0,a=0,c=0;
        cin>>n>>k;
        char s[n];

        for(i=0; i<n; i++)
        {
            cin>>s[i];

            if(s[i]=='B')b++;

            else a++;
        }

        if(b==k)
        {
            cout<<0<<"\n";
        }

        else if(b>k)
        {
            for(i=0; i<n; i++)
            {
                if(s[i]=='B')
                {
                    c++;
                }

                if(c==(b-k))
                {
                    break;
                }
            }

            cout<<1<<"\n";
            cout<<i+1<<" "<<"A\n";
        }

        else if(b<k)
        {
            for(i=0; i<n; i++)
            {
                if(s[i]=='A')
                {
                    c++;
                }

                if(c==(k-b))
                {
                    break;
                }
            }

            cout<<1<<"\n";
            cout<<i+1<<" "<<"B\n";
        }



    }



    return 0;
}
