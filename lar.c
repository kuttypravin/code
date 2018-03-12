#include<stdio.h>
#include<conio.h>
int main()
{
int n,j,m[100],temp=0,a=0,i,b=0;
scanf("%d",&n);
for(i=0;i<n;i++)
{
  printf("Enter the elements:");
scanf("%d",&m[i]);
}
for(i=0;i<n-1;i++)
{
for(j=i+1;j<n;j++)
{
if(m[i]==m[j])
{
temp=temp+1;
}
}

}
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(m[i]==m[j])
{
temp=m[j];
m[j]=m[j+1];
m[j+1]=temp;
}
}
}
b=a;
for(i=0;i<(n-(a-1));i++)
{
for(j=i+1;j<(n-a);j++)
{
if(m[i]<m[j])
{
temp=m[i];
m[i]=m[j];
m[j]=temp;
}
}}
  printf("Largest number:");
  for(i=0;i<(n-a);i++)
{
printf("%d\t\n",m[i]);
  }
}
