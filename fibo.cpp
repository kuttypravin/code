#include<iostream>
using namespace std;
int main()
{
int n,a,b,c,i;
cin>>n;
a=0;
b=1;
cout<<b<<" ";
for(i=1;i<n;i++)
{
c=a+b;
a=b;
b=c;
cout<<c<<" ";
}
return 0;
}
