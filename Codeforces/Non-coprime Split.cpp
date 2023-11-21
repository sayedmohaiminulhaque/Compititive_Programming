#include<bits/stdc++.h>
using namespace std;
const long long int mx = 1e7+5;

bool isPrime[mx];
void Sieve()
{
    isPrime[2]=1;
    for(long long int i=3; i<mx; i+=2)isPrime[i]=1;
    for(long long int i=3; i*i<=mx; i++)
    {
        if(isPrime[i])
        {
            for(long long int j=i*i; j<mx; j+=i+i)isPrime[j]=0;
        }
    }
}


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        Sieve();
        long long int l,r,k;
        cin>>l>>r;
        if(r-l==0)
        {
            if(isPrime[l])
            {
                cout<<-1<<"\n";
            }
            else if(l%2==0)
            {
            cout<<l/2<<" "<<l/2<<"\n";
            }
            else
            {
               k=3;
               l=l-k;
               loop:
                if(__gcd(l,k)==1)
                {
                k++;
                l=l-1;
                goto loop;
                }
                else
                cout<<l<<" "<<k<<"\n";
            }

        }
        else if(l>2)
        {
            if(l%2==0)
            {
                cout<<l/2<<" "<<l/2<<"\n";
            }
            else
            {
                cout<<(l+1)/2<<" "<<(l+1)/2<<"\n";
            }
        }
        else if(r>3)
        {
            if(r%2==0)
            {
                cout<<r/2<<" "<<r/2<<"\n";
            }
            else
            {
                cout<<(r-1)/2<<" "<<(r-1)/2<<"\n";
            }
        }
        else
        {
            cout<<-1<<"\n";
        }

    }

    return 0;
}
