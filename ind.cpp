#include<iostream>
using namespace std;
int main()
{
int n,i,j,temp;
cin>>n;
int a[n];
for(i=0;i<n;i++)
{
cin>>a[i];
}
for(i=0;i<n;i++)
{
    cout<<i;
    cout<<a[i]<<endl;
}
return 0;
}
