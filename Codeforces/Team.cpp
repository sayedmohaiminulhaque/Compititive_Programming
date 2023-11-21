#include<iostream>
using namespace std;

int n,i,sum=0;
class A
{
public:
    int m,n,o,p;
    void func()
    {
        cin>>m;
        cin>>n;
        cin>>o;

    }


};

int main()
{
    A ob[1001],ob1;
    cin>>n;
    for(i=0; i<n; i++)
    {
        ob[i].func();
    }
    for(i=0; i<n; i++)
    {
        if(ob[i].m+ob[i].n+ob[i].o>=2)
            sum=sum+1;
        else
            sum=sum;

    }
    cout<<sum;



    return 0;
}
