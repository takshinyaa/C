#include<stdio.h>
#include<conio.h>
#define no 15
int square=no*no;
#undef no
int main()
{
	printf("%d",square);
}