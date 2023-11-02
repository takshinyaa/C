#include<stdio.h>
#include<conio.h>
int main()
{
	int a;
	printf("enter the value of a");
	scanf("%d",&a);
	if(a>=2 && a%2==0)
	{
		printf("the given no is even");
	
	}
	else 
	{
		printf("the given no is odd");
	}
}