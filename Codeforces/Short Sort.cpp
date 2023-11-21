#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        string a;
        cin>>a;
        if(a[0]=='a' || a[1]=='b' || a[2]=='c')
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
