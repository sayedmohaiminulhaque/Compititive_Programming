#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n,k=0;
        cin>>n;
        int a[n+5];

        for(int i=1; i<=n; i++)
        {
            cin>>a[i];
        }

        if(n>3)
        {
            if(a[3]>a[4])
            {
                k=1;
                cout<<"NO\n";
            }

        }


        if(5<n && k!=1)
        {
            if(n>=8)
            {
                for(int i=5; i<8; i++)
                {
                    if(a[i]>a[i+1])
                    {
                        cout<<"NO\n";
                        k=1;
                        break;
                    }

                }
            }

            else
            {
                for(int i=5; i<n; i++)
                {
                    if(a[i]>a[i+1])
                    {
                        cout<<"NO\n";
                        k=1;
                        break;
                    }

                }

            }

        }

        if(6<n && k!=1)
        {
            if(n>=8)
            {
                for(int i=6; i<8; i++)
                {
                    if(a[i]>a[i+1])
                    {
                        cout<<"NO\n";
                        k=1;
                        break;
                    }

                }
            }

            else
            {

                for(int i=6; i<n; i++)
                {
                    if(a[i]>a[i+1])
                    {
                        cout<<"NO\n";
                        k=1;
                        break;
                    }

                }
            }


        }

        if(7<n && k!=1)
        {
            if(n>=8)
            {
                for(int i=7; i<8; i++)
                {
                    if(a[i]>a[i+1])
                    {
                        cout<<"NO\n";
                        k=1;
                        break;
                    }

                }
            }

            else
            {
                for(int i=7; i<n; i++)
                {
                    if(a[i]>a[i+1])
                    {
                        cout<<"NO\n";
                        k=1;
                        break;
                    }

                }
            }


        }

        if(9<n && k!=1)
        {
            if(n>=16)
            {
                for(int i=9; i<16; i++)
                {
                    if(a[i]>a[i+1])
                    {
                        cout<<"NO\n";
                        k=1;
                        break;
                    }

                }
            }

            else
            {
                for(int i=9; i<n; i++)
                {
                    if(a[i]>a[i+1])
                    {
                        cout<<"NO\n";
                        k=1;
                        break;
                    }

                }
            }


        }

        if(10<n && k!=1)
        {
            if(n>=16)
            {
                for(int i=10; i<16; i++)
                {
                    if(a[i]>a[i+1])
                    {
                        cout<<"NO\n";
                        k=1;
                        break;
                    }

                }
            }

            else
            {
                for(int i=10; i<n; i++)
                {
                    if(a[i]>a[i+1])
                    {
                        cout<<"NO\n";
                        k=1;
                        break;
                    }

                }

            }


        }

        if(11<n && k!=1)
        {
            if(n>=16)
            {
                for(int i=11; i<16; i++)
                {
                    if(a[i]>a[i+1])
                    {
                        cout<<"NO\n";
                        k=1;
                        break;
                    }

                }

            }

            else
            {
                for(int i=11; i<n; i++)
                {
                    if(a[i]>a[i+1])
                    {
                        cout<<"NO\n";
                        k=1;
                        break;
                    }

                }
            }


        }

        if(12<n && k!=1)
        {
            if(n>=16)
            {
                for(int i=12; i<16; i++)
                {
                    if(a[i]>a[i+1])
                    {
                        cout<<"NO\n";
                        k=1;
                        break;
                    }

                }

            }

            else
            {
                for(int i=12; i<n; i++)
                {
                    if(a[i]>a[i+1])
                    {
                        cout<<"NO\n";
                        k=1;
                        break;
                    }

                }
            }


        }

        if(13<n && k!=1)
        {
            if(n>=16)
            {
                for(int i=13; i<16; i++)
                {
                    if(a[i]>a[i+1])
                    {
                        cout<<"NO\n";
                        k=1;
                        break;
                    }

                }

            }

            else
            {
                for(int i=13; i<n; i++)
                {
                    if(a[i]>a[i+1])
                    {
                        cout<<"NO\n";
                        k=1;
                        break;
                    }

                }
            }


        }

        if(14<n && k!=1)
        {
            if(n>=16)
            {
                for(int i=14; i<16; i++)
                {
                    if(a[i]>a[i+1])
                    {
                        cout<<"NO\n";
                        k=1;
                        break;
                    }

                }

            }

            else
            {

                for(int i=14; i<n; i++)
                {
                    if(a[i]>a[i+1])
                    {
                        cout<<"NO\n";
                        k=1;
                        break;
                    }

                }
            }


        }

        if(15<n && k!=1)
        {
            for(int i=15; i<16; i++)
            {
                if(a[i]>a[i+1])
                {
                    cout<<"NO\n";
                    k=1;
                    break;
                }

            }

        }

        if(17<n && k!=1)
        {
            for(int i=17; i<n; i++)
            {
                if(a[i]>a[i+1])
                {
                    cout<<"NO\n";
                    k=1;
                    break;
                }

            }

        }


        if(k==0)
        {
            cout<<"YES\n";
        }


    }




    return 0;
}
