#include<stdio.h>
int main()
{
	int i,a[]={10,20,30,40,50};
	int j=i+1;
	for(i=0;i<5;i++)
	{
		while(a[i]>=a[j])
		{
			j++;
			
		}
		
	printf("max:%d",a[i]);	
	}
}