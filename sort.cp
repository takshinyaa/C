#include<stdio.h>
void sort();
void swap(int a[i],int a[j]);
int main()
{
	int a[]={30,80,60,10};
	int i,j,k,t;
	sort();
	
}
void sort()
{
	int a[]={30,80,60,10};
	int i,j,k,t;
	for(i=0;i<4;i++)
	{
		if(a[i]>a[j])
		{
		a[j]=a[i];
		j++;
		}
		if(a[i]<a[k])
		{
			a[k]=a[j];
		}
	}
	swap(a[i],a[j]);
}
void swap(int a[i],int a[j])
{
	int i,j,k,t;
	int a[]={30,80,60,10};
		t=a[i];
		a[i]=a[j];
		a[j]=t;	
		printf("sorting:%d",a[i],a[j]);
}
