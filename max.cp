#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,c;
	printf("enter the value of a, b,c");
	scanf("%d %d %d",&a,&b,&c);
	if(a>b)
	{
		printf("a=%d is greater",a);
	}
	else if(b>c)
	{
		printf("c=%d is greater",a);
	}
	else
	{
		printf("c=%d is greater",c);
	}
}