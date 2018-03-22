#include<stdio.h>
#include<conio.h>
void main()
{
char str1[30],str2[20];
printf("enter a string");
scanf("%s",&str1);
int i,j;
i=0;
if(i%2==0)
{
temp=s1[i];
s2[i]=s1[i+2];
s1[i+2]=temp;
i++;
printf("%s",str1[i+2]);
}
else
{
temp=str1[i];
s2[i]=str1[i+1];
s1[i+1]=temp;
printf("%s",str1[i+2]);
i++;
}
}
