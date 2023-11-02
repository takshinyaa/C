#include<stdio.h>
#include<conio.h>
 void swap(int x,int y);
int main()
{
	int a=10;
	int b=60;
	printf("before %d",a);
	
	printf("before %d",b);
	
	swap(a,b);
	return 0;
	
}
void swap(int x,int y)
{
	int c;
	c=x;
	x=y;
	y=c;
	printf(" after swapping a %d \n",x);
	printf(" after swapping b %d \n",y);
	
}