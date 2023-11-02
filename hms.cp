#include<stdio.h>
void hms(char*name,char*phone,char*disease)
{
	printf("enter name:");
	scanf("%s",&name);
	printf("enter phone");
	scanf("%s",&phone);
	printf("enter disease");
	scanf("%s",&disease);
}
int main()
{
	char name[50];
	char phone[10];
	char disease[10];
	hms(name,phone,disease);
	printf("stored value:%s",&name);
	printf("stored value:%s",&phone);	
	printf("stored value:%s",&disease);	
	
	return 0;
}