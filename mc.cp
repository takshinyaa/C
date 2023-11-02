#include<stdio.h>
int main()
{
	int i,a[]={80,90,60,20,30},n;
	int j=i+1;
	
	for(i=0;i<5;i++)
	{
		if(a[i]>=a[j])
		{
		a[j]=a[i];
				
		}
		if(a[i]<=a[k])
		{
			a[k]=a[i];
		}
	}
	printf("max:%d",a[j]);	
	printf("min:%d",a[k]);	
	
	
}