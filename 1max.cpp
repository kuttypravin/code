#include<iostream>
using namespace std;
int main()
{
    int a[10],i,m;
    for(i=0;i<10;i++)
    {
        cin>>a[i];
    }
    m=a[0];
    for(i=1;i<10;i++)
    {
        if(m<a[i])
        m=a[i];
    }
    cout<<m;
    return 0;
}
