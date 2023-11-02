#include<stdio.h>
int main()
{
	int i,arr[]={10,11,12,13,7};
	for(i=0;i<5;i++)
	{
		if(arr[i]%2==0)
		{
			printf("given no is even:%d\n",arr[i]);
			
		}
		else
		{
		
			printf("given no is odd:%d\n",arr[i]);
			
		}
			
	}

}