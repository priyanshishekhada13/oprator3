#include<stdio.h>

void main()
{
	
	int a,b,c;
	printf("enter a:");
	scanf("%d",&a);
	printf("enter b:");
	scanf("%d",&b);
	printf("enter c:");
	scanf("%d",&c);
	
	if(a>b)//ac
	{
		if(a>c)
		{
			printf("a is max");	
		}
		else
		{
			printf("c is max");
		}
	}
	else
	{
		if(b>c)
		{
			printf("b is max");	
		}
		else
		{
			printf("c is max");
		}
	}
}
