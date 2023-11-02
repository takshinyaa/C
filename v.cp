#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,c,ch;
	printf("enter value of a,b");
	scanf("%d %d",&a,&b);
	printf("enter the choice ");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1: c=a+b;
		printf("c=%d",c);
		break;
		case 2: c=a-b;
		printf("c=%d",c);
		break;
		case 3: c=a*b;
		printf("c=%d",c);
		break;
		case 4: c=a/b;
		printf("c=%d",c);
		break;
		default:printf("enter a valid choice");
	}
}