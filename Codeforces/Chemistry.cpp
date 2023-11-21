#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n,k,cnt=0;

        cin>>n>>k;

        char s[n];

        for(int i=0; i<n; i++)
        {
            cin>>s[i];
        }

        multiset<char>ms;

        for(int i=0; i<n; i++)
        {
            ms.insert(s[i]);

        }

        for(int i=0; i<n; i++)
        {
            if(ms.count(s[i])%2==1)
            {
                cnt++;
            }
        }

        if((cnt-k == 1  && (n-k)%2== 1))
        {
            cout<<"YES\n";
        }

        else if(cnt-k==0)
        {
            cout<<"YES\n";
        }

        else
        {
            cout<<"NO\n";
        }



    }

    return 0;
}
