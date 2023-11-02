#include<stdio.h>
#include<conio.h>
#include<string.h>
typedef struct student
{
	int id;
	char str[10];
	float f;
}status;
int main()
{
	status rec;
	rec.id=1;
	rec.f=56;
	strcpy(rec.str,"raju");
		printf("Id is :%d\n",rec.id);
	printf("name is :%s\n",rec.str);
	printf("percentage is :%f\n",rec.f);
	getch();
	return 0;
}