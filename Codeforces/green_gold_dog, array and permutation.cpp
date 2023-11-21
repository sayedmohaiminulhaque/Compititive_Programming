#include<bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
long long int p;

int main()
{
    long int t;
    cin>>t;
    while(t--)
    {
        long long int n;
        cin>>n;
        long long int a[n],b[n],i,j;
        ordered_set s;
        for(i=0; i<n; i++)
        {
            cin>>a[i];
            b[i]=a[i];

        }
        sort(b,b+n);
        for(i=0; i<n; i++)
        {
          s.insert(b[i]);
        }
        for(i=0; i<n; i++)
        {
          cout<< s.order_of_key(a[i])<<" ";
        }
        cout<<"\n";
    }

    return 0;
}
