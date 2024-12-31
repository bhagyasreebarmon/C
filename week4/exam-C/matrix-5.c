#include<stdio.h>
int main()
{
	int i,j, row,column,max,a[3][4];
	for(i=0;i<=2;i++)
	for(j=0;j<=3;j++)
	scanf("%d",&a[i][j]);
	max=a[0][0];row=0;column=0;
	for(i=0;i<=2;i++)
	for(j=0;j<=3;j++)
	if(a[i][j]>max)
	{
		max=a[i][j];row=i;column=j;
	}
	printf("max=%d\nrow=%d\ncolumn=%d\n",max,row,column);
	return 0;
}
