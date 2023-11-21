#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n,k;
        cin>>n>>k;
        vector<int>a;
        vector<int>b;
        for(int i=0; i<n; i++)
        {
        int s;
        cin>>s;
        a.push_back(s);
        }
        for(int i=0; i<n; i++)
        {
        int m;
        cin>>m;
        b.push_back(m);
        }

        sort(a.begin(),a.end());
        sort(b.rbegin(),b.rend());

        int ans=0;

        for(int i=0; i<n; i++)
        {
        if(i<k)
        {
        ans += max(a[i],b[i]);
        }
        else
        {
        ans += a[i];
        }

        }
        cout<<ans<<"\n";


    }

    return 0;
}

