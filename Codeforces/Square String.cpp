#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        string s;
        cin>>s;
        int n=s.size(),k=0,i,j;

        if(n%2==1)
        {
            cout<<"NO\n";
        }

        else
        {
            for(i=0,j=n/2; i<n/2; i++,j++)
            {
                if(s[i]==s[j])
                {
                    k++;
                }
            }

            if(k==n/2)
            {
                cout<<"YES\n";
            }

            else
            {
                cout<<"NO\n";
            }
        }


    }

    return 0;
}
