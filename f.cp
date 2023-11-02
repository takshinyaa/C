#include<stdio.h>
void area(int l,int h)
{
	int a;

	printf("enter the value of l:");
	scanf("%d",&l);
	printf("enter the value of h:");
	scanf("%d",&h);	
	a=0.5*l*h;
	printf("area:%d",a);
}
int main()
{
		int l;
	int h;
	area(l,h);
return 0;
}
