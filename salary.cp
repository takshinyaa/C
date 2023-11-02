 #include<stdio.h>
#include<conio.h>
int main()
{
	int a;
	printf("enter salary");
	scanf("%d",&a);
	if(a>=40000 && a<=50000)
	{
		printf("ax department");
	}
	else if(a>=30000 && a<40000)
	{
		printf("bx department");
	}
	else if(a>=20000 && a<30000)
	{
		printf("cx department");
	}
	else if(a>=10000 && a<20000)
	{
		printf("dx department");
	}
	else
	{
		printf("ex department");
	}
	}