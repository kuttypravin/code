#include <iostream>
#include<string.h>
using namespace std;
int main() 
{
char a[100];
int i,n,count=0,countt=0,count1=0;
cin>>a;
n=strlen(a);
for(i=0;i<n;i++)
{
if((a[i]>='a')&&(a[i]<='z')||(a[i]>='A')&&(a[i]<='Z'))
{
count=1;
}
else if((a[i]>=0)&&(a[i]>=9))
{
countt=1;
}
else
{
count1=1;
}
}
if((count==1)&&(countt==1))
{
 cout<<"yes";
}
else
{
cout<<"no";
}
return 0;
}
