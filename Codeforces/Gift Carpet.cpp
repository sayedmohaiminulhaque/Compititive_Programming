#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int h,w,i,j,k=0;
        cin>>h>>w;
        char a[h][w];
        for(i=0; i<h; i++)
        {
            for(j=0; j<w; j++)
            {
                cin>>a[i][j];
            }
        }

        for(j=0; j<w; j++)
        {
            for(i=0; i<h; i++)
            {
                if(a[i][j]=='v' && k==0)
                {
                    k++;
                    break;
                }
                else if(a[i][j]=='i' && k==1)
                {
                    k++;
                    break;
                }
                else if(a[i][j]=='k' && k==2)
                {
                    k++;
                    break;
                }
                else if(a[i][j]=='a' && k==3)
                {
                    k++;
                    break;
                }
            }
        }
        if(k==4)
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }

    }
    return 0;
}
