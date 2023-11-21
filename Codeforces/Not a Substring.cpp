#include<bits/stdc++.h>
using namespace std;

int main()

{
    int t;
    cin>>t;
nn:
    while(t--)
    {
        string a;
        int l,x=0,i,j;

        cin>>a;
        l=a.size();
        for(i=0; i<l; i++)
        {
            if(a[i]=='(')
            {
                x++;
            }
            else
            {
                x--;
            }
            if(x<0)
            {
                break;
            }
        }
        if(x==0)
        {
            cout<<"NO\n";
        }
        else
        {
            cout<<"YES\n";
            for(i=0; i<l; i++)
            {
                if(a[i]==')'&&a[i+1]=='(')
                {
                    for(j=0; j<l; j++)
                    {
                        cout<<"(";
                    }
                    for(j=0; j<l; j++)
                    {
                        cout<<")";
                    }
                    cout<<"\n";
                    goto nn;
                }

            }
            for(i=0; i<l; i++)
            {
                if(a[i]=='(')
                {
                    cout<<a[i];
                    cout<<")";
                }
                else if(a[i]==')')
                {
                    cout<<"(";
                    cout<<a[i];
                    //cout<<")";
                }
            }
            cout<<"\n";

        }


    }


    return 0;
}
