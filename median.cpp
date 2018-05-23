#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
clrscr();
int a[10],i,n;
float m;
cin>>n;
for(i=0;i<n;i++)
{
cin>>a[i];
}
if(n%2==0)
{
m=(a[n-1/2]+(a[n/2]))/2;
}
else
{
m=a[n/2];
}
cout<<m;
return 0;
}
