#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,sum=0;
    cin>>n;
    int a[n];

    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }

    for(int i=n-1; i>0; i++)
    {
        if(a[i-1]>a[i])
        {
            sum++;
        }
    }


    return 0;
}
