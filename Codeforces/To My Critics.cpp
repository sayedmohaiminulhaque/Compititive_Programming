#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int a,b,c,s1,s2,s3;
        cin>>a>>b>>c;
        s1=a+b;
        s2=a+c;
        s3=b+c;

        if(s1>=10 || s2>=10 || s3>=10)
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
