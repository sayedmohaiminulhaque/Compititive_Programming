#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long int n;
        cin>>n;
        long long int a[n],b[n],i,k=0;
        for(i=0; i<n; i++)
        {
            cin>>a[i]>> b[i];
        }
        /*if(a[0]==*min_element(a,a+n) && b[0]==*min_element(b,b+n))
        {
            cout<<-1<<"\n";
        }*/
       // else
        //{
            for(i=1; i<n; i++)
            {
                if(b[i]>=b[0] && a[i]>=a[0])
                {
                    cout<<-1<<"\n";
                    break;
                }
                else
                {
                    k++;
                }
            }
        //}
        if(k==n-1)
        {
          cout<<a[0]<<"\n";
        }


    }


    return 0;
}
