#include<stdio.h>
void main()
{
	long int a[100000],a,i;
	int f=0;
	printf("enter a no");
	scanf("%ld",&a);
		printf("enter  numbers\n");
	for(i=0;i<a;i++)
	{
		scanf("%ld",&a[i]);
	}
	for(i=0;i<a;i++)
	{
		if(a[i]==i)		
		{
			f=1;
		printf("%d",i);
		}
	}	
	if(f==0)
	printf("-1");
}
