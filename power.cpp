#include<iostream>
using namespace std;
int main()
{
    int n,p=1,i,flag=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        p=2*p;
    
    if(n==p)
    {
        flag=1;
    }
    }
    if(flag==1)
  cout<<("yes");
    else
  cout<<("no");
  return 0;
}
