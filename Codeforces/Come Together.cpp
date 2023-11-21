#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int a1,b1,a2,b2,a3,b3,x1,x2,y1,y2,m=0,n=0,p=0,k=0;
        cin>>a1>>b1>>a2>>b2>>a3>>b3;

        x1=b2-b1;
        x2=b3-b1;

        y1=a2-a1;
        y2=a3-a1;

        if(x1>0 && x2>0)
        {
            m=min(x1,x2);
        }
        else if(x1<0 && x2<0)
        {
            m=abs(max(x1,x2));
        }
        if(y1>0 && y2>0)
        {
            n=min(y1,y2);
        }
        else if(y1<0 && y2<0)
        {
            n=abs(max(y1,y2));
        }
        if(a1>a2 && a1>a3)
        {
            if(b1>b2 && b1>b3)
            {
                if(m<n)
                {
                    m=m+abs(b2-b3);
                    n=n+abs(b2-b3);
                }
                else
                {
                    m=m+abs(a2-a3);
                    n=n+abs(a2-a3);
                }

            }
        }
        else if(a1<a2 && a1<a3)
        {
            if(b1<b2 && b1<b3)
            {
                if(m<n)
                {
                    m=m+abs(b2-b3);
                    n=n+abs(b2-b3);
                }
                else
                {
                    m=m+abs(a2-a3);
                    n=n+abs(a2-a3);
                }
            }
        }
        cout<<max(n,m)+1<<"\n";

    }
    return 0;
}
