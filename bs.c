#include<stdio.h> 
void bs(char*gp,char*pp,char*contact)
{
	printf("enter gpay:");
	scanf("%s",&gp);
	printf("enter phonepay");
	scanf("%s",&pp);
	printf("enter contact");
	scanf("%s",&contact);
}
int main()
{
	char gp[50];
	char pp[10];
	char contact[10];
	bs(gp,pp,contact);

	printf("stored value:%s",&gp);
	printf("stored value:%s",&pp);
	printf("stored value:%s",&contact);
	return 0;
}