#include<iostream>
using namespace std;
int main()
{
   int k,i,sum,avg;
   int a[k];
   cin>>k;
   for(i=0;i<k;i++)
   cin>>a[i];
   for(i=0;i<k;i++)
   {
   sum=sum+a[i];
   }
   avg=sum/k;
   cout<<avg;
   }
