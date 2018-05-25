#include<iostream>
using namespace std;
int main()
{
int n,x,y,c,i;
cin>>n;
x=0;
y=1;
cout<<b<<" ";
for(i=1;i<n;i++)
{
c=x+y;
x=y;
y=c;
cout<<c<<" ";
}
return 0;
}
