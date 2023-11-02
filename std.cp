#include<stdio.h>
#include<conio.h>
int main()
{
	int a;
	printf("enter the value of a");
	scanf("%d",&a);
	if(a>=90 && a<=100)
	{
		printf("A1 grade");
	}
	else if(a>=80 && a<90)
	{
		printf("A2 grade");
	}
	else if(a>=70 && a<80)
	{
		printf("B1 grade");
	}
	else if(a>=60 && a<70)
	{
		printf("B2 grade");
	}
	else if(a>=50 && a<60)
	{
		printf("C1 grade");
	}
	else if(a>=40 && a<50)
	{
		printf("C2 grade");
	}
	else
	{
		printf("Failed");
	}
	}