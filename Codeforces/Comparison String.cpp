#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t--)
    {

        int n,m=1,k=1;
        string s;

        cin>>n;
        cin>>s;
        int a[n+1],i;

        for(i=0; i<n-1; i++)
        {
           if(s[i]==s[i+1])
           {
           m++;
           if(m>k)
                {
                    k=m;
                }
           }
           else
           {
                    m=1;

           }
        }


        cout<<k+1<<"\n";
    }


    return 0;
}
