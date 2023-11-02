#include<stdio.h>
#include<conio.h>
void add();
int main()
{
	add();
	
	return 0;
}
void add()
{
	int a,b,c;
	printf("enter the value of a and b");
	scanf("%d %d",&a,&b);
	c=a+b;
	printf("Addition is %d",c);
}