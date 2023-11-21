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
    int a[n],i,k,c=0,sum;
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    if(*max_element(a,a+n)-*min_element(a,a+n)==0 && *min_element(a,a+n)==0)c=2;
    else if(*max_element(a,a+n)-*min_element(a,a+n)==0)c=1;

    if(c==1)cout<<1<<"\n";
    else if(c==2)cout<<0<<"\n";
    else
    {
    sum=a[0];
    for(i=1; i<n; i++)
    {
    sum=sum^a[i];
    }
    if(sum==0)cout<<1<<"\n";
    else if(n%2==0)
    {
    cout<<2<<"\n";
    }
    else if(n%2==1)
    {
    cout<<4<<"\n";
    }
    }

    if(c==1)
    {
    cout<<1<<" "<<n<<"\n";
    }
    else if(c!=2)
    {
    sum=a[0];
    for(i=1; i<n; i++)
    {
    sum=sum^a[i];
    }
    if(sum==0)cout<<1<<" "<<n<<"\n";
    else if(n%2==0)
    {
    cout<<1<<" "<<n<<"\n";
    cout<<1<<" "<<n<<"\n";
    }
    else if(n%2==1)
    {
    cout<<1<<" "<<n-1<<"\n";
    cout<<1<<" "<<n-1<<"\n";
    cout<<n-1<<" "<<n<<"\n";
    cout<<n-1<<" "<<n<<"\n";
    }
    }

}



    return 0;
}
