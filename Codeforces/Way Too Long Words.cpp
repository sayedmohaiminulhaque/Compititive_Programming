#include<iostream>
#include<string>
using namespace std;
int n,i;
class A
{
public:
    string arr;
    int l;
    get_input()
    {
        cin>>arr;
    }
    get_length()
    {
        l=arr.size();
    }
    operation()
    {
        if(l<=10)
            cout<<arr<<endl;
        else
cout<<arr[0]<<l-2<<arr[l-1]<<endl;
    }
};
int main()
{
    A ob[102];
    cin>>n;
    for(i=0; i<n; i++)
    {
        ob[i].get_input();
    }
    for(i=0; i<n; i++)
    {
        ob[i].get_length();
        ob[i].operation();
    }
    return 0;
}
