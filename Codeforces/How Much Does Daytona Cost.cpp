#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,m;
        cin>>n>>k;
        multiset<int>ms;
        for(int i=0; i<n; i++)
        {
            cin>>m;
            ms.insert(m);
        }
        if(ms.count(k)!=0)
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
