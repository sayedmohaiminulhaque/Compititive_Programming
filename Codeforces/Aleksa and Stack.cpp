#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
      int n;
    cin>>n;
    int a[n];
    a[0]=2*n;
    a[1]=a[0]+2;
    for(int i=2; i<n; i++)
    {
        if((3*(a[i-1]+2))%(a[i-1]+a[i-2])!=0)
        {
            a[i]=a[i-1]+2;
        }
        else
        {
            a[i]=a[i-1]+3;
        }

    }
    for(int i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<"\n";
    }


    return 0;
}
