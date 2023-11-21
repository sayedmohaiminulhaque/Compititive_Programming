#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{
char a[10][10];
    int i,j,sum=0;
    for(i=0; i<10; i++)
    {
        for(j=0; j<10; j++)
        {
            cin>>a[i][j];
        }
    }
    for(i=0; i<10; i++)
    {
        for(j=0; j<10; j++)
        {
            if(a[i][j]=='X')
            {
            if(i<5 && j<5)
            {
            sum=sum+(min(i,j)+1);
            }
            else if(i<5 && j>=5)
            {
            if(min(i,(9-j))==9-j)
            {
             sum=sum+10-j;
            }
            else
            {
            sum=sum+i+1;
            }
            //sum=sum+(min(i,(9-j)));
            }
            else if(i>=5 && j<5)
            {
            if(min((9-i),j)==9-i)
            {
             sum=sum+10-i;
            }
            else
            {
            sum=sum+j+1;
            }

            }
            else if(i>=5 && j>=5)
            {
            sum=sum+(min((9-i),(9-j)))+1;
            }
            }

        }
    }
    cout<<sum<<"\n";
}



    return 0;
}
