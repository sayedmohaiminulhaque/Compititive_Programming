#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<int>s;
    int k,n,i,j,k1;
    cin>>k>>n;
    string v;
    int l[n],r[n];
   // vector<char>v;
    cin>>v;
    for(i=0; i<n; i++)
    {
        cin>>l[i];
    }
    for(i=0; i<n; i++)
    {
        cin>>r[i];
    }
    int q;
    cin>>q;
    int x[q];
    for(i=0; i<q; i++)
    {
        cin>>x[i];
    }

    for(i=0; i<q; i++)
    {
        for(j=0; j<n; j++)
        {
            if(l[j]<=x[i]<=r[j] && s.count(j)==0)
            {
                k1=l[j]+r[j]-x[i];
                reverse((v.begin()+x[i])-1,(v.begin()+k1)-1);
                break;
            }
        }
    }
    cout<<v;
    cout<<"\n";


    return 0;
}
