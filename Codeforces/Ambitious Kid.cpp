#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        a[i]=abs(a[i]);
    }
   cout<<*min_element(a,a+n);
   return 0;
}
