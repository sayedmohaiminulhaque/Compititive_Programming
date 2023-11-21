#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
loop2:
    while(t--)
    {
        long long int n,k,h,c;
        cin>>n>>k;
        long long int a[n];
        long long int i;
        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }
        h=ceil(k/n);
loop:
        c=n*h;
        for(i=0; i<n; i++)
        {
            if(a[i]>=h)
            {
                c=c-h;
            }
            else
            {
                c=c-a[i];
            }
        }
        if(c<=k)
        {
            h++;
            goto loop;
        }
        else
        {
            cout<<h-1<<"\n";
            goto loop2;
        }


    }


    return 0;
}

