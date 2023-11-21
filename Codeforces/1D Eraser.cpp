#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,sum=0;
        cin>>n>>k;
        char a[n];
        int i,j;
        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }

        for(i=0; i<n;)
        {
            if(a[i]=='B')
            {
            sum++;
            i=i+k;
            }
            else
            {
            i++;
            }
        }
        cout<<sum<<endl;


    }
    return 0;
}
