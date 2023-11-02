#include<stdio.h>
#include<conio.h>
int main()
{
	int x1,x2,y1,y2,d;
	printf("enter the value of x1,x2,y1,y2");
	scanf("%d %d %d %d",&x1,&x2,&y1,&y2);
	d=((x2-x1)+(y2-y1))*2; 
	printf(" Distance =%d",d);
}