#include <iostream>
using namespace std;
int main()
{
   int n,i,sum=0;
   cin>>n;
    if((n >0)||(n <0))
    {
   for(i=1;i<=5;i++)
   {
       sum=i*n;
      cout<<sum<<" ";
   }}
    else 
    {
     cout<<"invalid input";   
    }
    return 0;
}
