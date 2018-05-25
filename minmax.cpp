#include<iostream>
using namespace std;
int main()
{
   int k,i,min,max;
   int a[k];
   cin>>k;
   for(i=0;i<k;i++)
   cin>>a[i];
   min=a[0];
   for(i=1;i<k;i++)
   {
       if(min>a[i])
       min=a[i];
       
   }
   max=a[0];
   for(i=1;i<k;i++)
   {
       if(max<a[i])
       max=a[i];
       
   }
   cout<<min<<" "<<max;
   return 0;
}
