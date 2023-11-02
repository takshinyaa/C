#include<stdio.h>
#include<conio.h>
int main()
{
	int fact=1;
	int i,n;
	printf("enter the number");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	printf("the factorial of given number is %d",fact);
}