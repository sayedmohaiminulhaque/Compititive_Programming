#include<bits/stdc++.h>
using namespace std;

int main()
{
    long int t;
    cin>>t;
loop:
    while(t--)
    {
        long int n,a,q,p=0,m=0;
        cin>>n>>a>>q;
        char s[q];
        long int i;
        for(i=0; i<q; i++)
        {
            cin>>s[i];
            if(s[i]=='+')
            {
                p++;
            }
            else
            {
                m++;
            }

        }
        if(n==a)
        {
            cout<<"YES"<<"\n";
        }

        else if(n>a+p)
        {
            cout<<"NO"<<"\n";
        }
        else
        {
            for(i=0; i<q; i++)
            {
                if(s[i]=='+')
                {
                    a++;
                    if(n==a)
                    {
                        cout<<"YES\n";
                        goto loop;
                    }
                }
                else
                {
                    a--;
                }

            }
            cout<<"MAYBE\n";

        }

    }

    return 0;
}
