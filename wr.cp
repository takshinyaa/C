#include<stdio.h>
int main()
{
	FILE*fptr;
	char name[20];
	int age;
	float salary;
	fptr=fopen("wr.txt","w");
	if(fptr==NULL)
	{
		printf("file doesn't exist\n");
	}
	printf("enter name");
	scanf("%s",&name);
	fprintf(fptr,"name=%s\n",name);
	printf("enter age");
	scanf("%d",&age);
	fprintf(fptr,"age=%d\n",age);
	printf("enter salary");
	scanf("%d",&salary);
	fprintf(fptr,"salary=%d\n",salary);
	fclose(fptr);
	
	return 0;
}