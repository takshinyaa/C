#include<stdio.h>
#include<conio.h>
#include<string.h>
union Data{
	int i;
	char str[10];
	float f;
};
int main()
{
	union Data data;
	printf("memory size occupied by data:%d",sizeof(data));
	getch();
	return 0;
}