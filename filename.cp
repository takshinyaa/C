#include<stdio.h>
int main()
{
	FILE*fptr;
	char filename[20];
	char ch;
	printf("enter the file to be opened");
	scanf("%s",filename);
	
	fptr=fopen("filename","r");
	if(fptr==NULL)
	{
		printf("file doesn't exist\n");
	}
	ch=fgetc(fptr);
	while(ch!=EOF)
	{
		printf("%c",ch);
		ch=fgetc(fptr);
	}
	fclose(fptr);
	
	return 0;
}