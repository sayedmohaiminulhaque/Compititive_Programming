#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n,a=0,b=0;
        cin>>n;
        char s[n];

        for(int i=0; i<n; i++)
        {
            cin>>s[i];
            if(s[i]=='A')a++;
            else b++;
        }

        if(a!=b)
        {
         cout<<s[n-1]<<"\n";
        }
        else
        {
        cout<<"?\n";
        }


    }

    return 0;
}
