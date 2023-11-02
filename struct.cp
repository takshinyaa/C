#include<stdio.h>
#include<conio.h>
#include<string.h>
struct student{
	int id;
	char name[10];
	float percentage;
};
int main()
{
	struct student rec;
	rec.id=1;
	strcpy(rec.name,"raju");
	rec.percentage=67;
	printf("Id is :%d\n",rec.id);
	printf("name is :%s\n",rec.name);
	printf("percentage is :%f\n",rec.percentage);
	getch();
	return 0;
}