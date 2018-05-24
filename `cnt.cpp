#include<iostream>
using namespace std;
int main()
{
int n,n1,i,count=0;
cin>>n;
while(n>0)
{
n1=n%10;
count++;
n=n/10;
}
cout<<count;
return 0;
}
