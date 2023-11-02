#include<stdio.h>
int main()
{
int a[3][3][3]={{1,5,6},{6,7,8},{9,10,12}};
int i,j,k;
for(i=0;i<3;i++)
{
	for(j=0;j<3;j++)
	{
		for(k=0;k<3;k++)
		{
		printf("a[%d][%d][%d]=%d ",i,j,k,a[i][j][k]);
		}
	}
}	
	return 0;
}